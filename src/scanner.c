#include <tree_sitter/parser.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define CHECK_EOF            \
    if (lexer->eof(lexer)) { \
        return false;        \
    }

#define LEXER_ADVANCE (lexer->advance(lexer, false))
#define LEXER_MARK_END (lexer->mark_end(lexer))
#define PRINT_LOOKAHEAD (printf("%c\n", lexer->lookahead))

enum TokenType { CODE_CONTENT, TAG_TEXT };

void *tree_sitter_epytext_external_scanner_create() {
    return NULL;
}

void tree_sitter_epytext_external_scanner_destroy(void *payload) {
    // No state to free
}

unsigned tree_sitter_epytext_external_scanner_serialize(
        void *payload, char *buffer) {
    return 0; // No state to serialize
}

void tree_sitter_epytext_external_scanner_deserialize(
        void *payload, const char *buffer, unsigned length) {
    // No state to deserialize
}

bool letter_is_tag(uint32_t c) {
    char tag_letters[] = { 'I', 'B', 'C', 'M', 'S', 'G', 'X', 'L', 'U' };
    for (int i = 0; i < 9; i++) {
        if (c == tag_letters[i]) {
            return true;
        }
    }
    return false;
}

bool parse_tag_text(TSLexer *lexer) {
    CHECK_EOF;

    if (letter_is_tag(lexer->lookahead)) {
        LEXER_ADVANCE;
        if (lexer->lookahead == '{') {
            return false;
        }
    } else if (lexer->lookahead == '}') {
        return false;
    }

    LEXER_MARK_END;

    while (true) {
        CHECK_EOF;

        if (letter_is_tag(lexer->lookahead)) {
            LEXER_ADVANCE;
            if (lexer->lookahead == '{') {
                lexer->result_symbol = TAG_TEXT;
                return true;
            }
        } else if (lexer->lookahead == '}') {
            lexer->result_symbol = TAG_TEXT;
            return true;
        } else {
            LEXER_ADVANCE;
            LEXER_MARK_END;
        }
    }
}

bool parse_code_content(TSLexer *lexer) {
    unsigned int brace_nesting = 1;
    while (true) {
        CHECK_EOF;

        if (lexer->lookahead == '{') {
            brace_nesting++;
            LEXER_ADVANCE;
        } else if (lexer->lookahead == '}') {
            brace_nesting--;
            if (brace_nesting == 0) {
                lexer->result_symbol = CODE_CONTENT;
                return true;
            }
            LEXER_ADVANCE;
        } else {
            LEXER_ADVANCE;
        }
        LEXER_MARK_END;
    }
}

bool tree_sitter_epytext_external_scanner_scan(
        void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[TAG_TEXT]) {
        return parse_tag_text(lexer);
    } else if (valid_symbols[CODE_CONTENT]) {
        return parse_code_content(lexer);
    } else {
        return false;
    }
}
