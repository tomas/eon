
/*
#define TB_DEFAULT 0x00
#define TB_BLACK   0x01
#define TB_RED     0x02
#define TB_GREEN   0x03
#define TB_YELLOW  0x04
#define TB_BLUE    0x05
#define TB_MAGENTA 0x06
#define TB_CYAN    0x07
#define TB_WHITE   0x08
#define TB_BOLD      0x0100
#define TB_UNDERLINE 0x0200
#define TB_REVERSE   0x0400
*/

#define MACRO_RECORDING_FG (TB_RED | TB_BOLD)
#define MACRO_RECORDING_BG TB_BLACK

#define MACRO_PLAYING_FG (TB_GREEN | TB_BOLD)
#define MACRO_PLAYING_BG TB_BLACK

#define ANCHOR_FG (TB_WHITE | TB_BOLD)
#define ANCHOR_BG TB_BLACK

#define ASYNC_FG (TB_YELLOW | TB_BOLD)
#define ASYNC_BG TB_BLACK

#define NEEDINPUT_FG (TB_BLUE | TB_BOLD)
#define NEEDINPUT_BG TB_BLACK

#define ERROR_FG (TB_WHITE | TB_BOLD)
#define ERROR_BG TB_RED

#define INFO_FG TB_WHITE
#define INFO_BG TB_DEFAULT

#define MODE_FG (TB_MAGENTA | TB_BOLD)
#define SYNTAX_FG (TB_CYAN | TB_BOLD)

#define LINECOL_CURRENT_FG (TB_YELLOW | TB_BOLD)
#define LINECOL_TOTAL_FG TB_YELLOW

#define CURSOR_BG TB_RED
#define ASLEEP_CURSOR_BG TB_RED
#define AWAKE_CURSOR_BG TB_CYAN
#define MENU_CURSOR_LINE_BG TB_REVERSE

#define BRACKET_HIGHLIGHT TB_REVERSE

#define RECT_CAPTION_FG TB_WHITE
#define RECT_CAPTION_BG TB_BLACK

#define RECT_LINES_FG TB_CYAN
#define RECT_LINES_BG TB_DEFAULT // TB_BLACK

#define RECT_MARGIN_LEFT_FG TB_RED
#define RECT_MARGIN_RIGHT_FG TB_RED

#define RECT_STATUS_FG TB_WHITE
#define RECT_STATUS_BG TB_BLACK

#define PROMPT_FG (TB_GREEN | TB_BOLD)
#define PROMPT_BG TB_BLACK

#define CAPTION_ACTIVE_FG TB_BOLD
#define CAPTION_ACTIVE_BG TB_BLUE
#define CAPTION_INACTIVE_FG TB_DEFAULT
#define CAPTION_INACTIVE_BG TB_DEFAULT

#define LINENUM_FG TB_DEFAULT
#define LINENUM_FG_CURSOR TB_BOLD
#define LINENUM_BG TB_DEFAULT

// syntax highlighting
#define KEYWORD_FG TB_BLUE
#define KEYWORD_BG TB_DEFAULT

#define PUNCTUATION_FG TB_BLUE | TB_BOLD
#define PUNCTUATION_BG TB_DEFAULT

#define SINGLE_QUOTE_STRING_FG (TB_YELLOW | TB_BOLD)
#define SINGLE_QUOTE_STRING_BG TB_DEFAULT

#define DOUBLE_QUOTE_STRING_FG (TB_YELLOW | TB_BOLD)
#define DOUBLE_QUOTE_STRING_BG TB_DEFAULT

#define CONSTANTS_FG (TB_MAGENTA | TB_BOLD)
#define CONSTANTS_BG TB_DEFAULT

#define VARIABLES_FG TB_MAGENTA
#define VARIABLES_BG TB_DEFAULT

#define BOOLS_INTS_FG TB_BLUE | TB_BOLD
#define BOOLS_INTS_BG TB_DEFAULT

#define REGEX_FG TB_YELLOW
#define REGEX_BG TB_DEFAULT

#define COMMENT_FG TB_CYAN
#define COMMENT_BG TB_DEFAULT

#define CODE_TAG_FG TB_GREEN
#define CODE_TAG_BG TB_DEFAULT

#define CODE_BLOCK_FG TB_WHITE
#define CODE_BLOCK_BG TB_DEFAULT

#define TRIPLE_QUOTE_COMMENT_FG TB_YELLOW | TB_BOLD
#define TRIPLE_QUOTE_COMMENT_BG TB_DEFAULT

#define TAB_WHITESPACE_FG TB_RED | TB_UNDERLINE
#define TAB_WHITESPACE_BG TB_DEFAULT

#define WHITESPACE_FG TB_DEFAULT
#define WHITESPACE_BG TB_YELLOW