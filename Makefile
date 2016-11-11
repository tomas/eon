SHELL=/bin/sh
DESTDIR?=/usr/local/bin/
MACOS_DEPLOYMENT_TARGET=10.7

mle_cflags:=$(CFLAGS) -D_GNU_SOURCE -Wall -Wno-missing-braces -g -I./mlbuf/ -I./termbox/src/
mle_ldlibs:=$(LDLIBS) -lm -lpcre -L/usr/local/Cellar/pcre/8.36/lib
mle_objects:=$(patsubst %.c,%.o,$(wildcard *.c))
mle_static:=

all: mle

mle: ./mlbuf/libmlbuf.a ./termbox/build/src/libtermbox.a $(mle_objects)
	$(CC) $(mle_objects) $(mle_static) ./mlbuf/libmlbuf.a ./termbox/build/src/libtermbox.a $(mle_ldlibs) -o mle

mle_static: mle_static:=-static
mle_static: mle_ldlibs:=$(mle_ldlibs) -lpthread
mle_static: mle

$(mle_objects): %.o: %.c
	$(CC) -c $(mle_cflags) $< -o $@

./mlbuf/libmlbuf.a:
	$(MAKE) -C mlbuf

./termbox/build/src/libtermbox.a: ./termbox/build/src/*.o
	ar rcs ./termbox/build/src/libtermbox.a ./termbox/build/src/*.o

./termbox/build/src/*.o: ./termbox/src/termbox.c.patched
	@echo "Building termbox..."
	mkdir -p termbox/build/src
	cd termbox/src && gcc termbox.c utf8.c -c
	mv termbox/src/*.o termbox/build/src

./termbox/src/termbox.c.patched: termbox-meta-keys.patch
	@echo "Patching termbox..."
	if [ -e $@ ]; then cd termbox; patch -R -p1 < ../$<; cd ..; fi
	cd termbox; patch -p1 < ../$<; cd ..
	cp termbox-meta-keys.patch $@

test: mle test_mle
	$(MAKE) -C mlbuf test

test_mle: mle
	$(MAKE) -C tests && ./mle -v

sloc:
	find . -name '*.c' -or -name '*.h' | \
		grep -Pv '(termbox|test|ut)' | \
		xargs -rn1 cat | \
		wc -l

install: mle
	install -v -m 755 mle $(DESTDIR)

clean:
	rm -f *.o mle.bak.* gmon.out perf.data perf.data.old mle
	$(MAKE) -C mlbuf clean
	$(MAKE) -C tests clean
	rm -Rf termbox/build

.PHONY: all mle_static test test_mle sloc install clean
