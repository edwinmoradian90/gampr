#include <stdlib.h>
#include "include/lexer.h"

lexer_T* init_lexer(char* contents) {
    lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
    lexer->contents = contents;
    lexer->i = 0;
    lexer->c = contents[lexer->i];

    return lexer;
}
void lexer_advance(lexer_T* lexer);
void lexer_skip_white_space(lexer_T* lexer);
token_T* lexer_get_next_token(lexer_T* lexer);
token_T* lexer_collect_string(lexer_T* lexer);
char* lexer_get_current_char_as_string(lexer_T* lexer);
