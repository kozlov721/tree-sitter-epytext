#include <tree_sitter/parser.h>
#include <stdbool.h>
#include <stdint.h>

enum TokenType { CODE_CONTENT };

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

bool _parse_code(void *payload, TSLexer *lexer) {
    unsigned int brace_nesting = 1;

    while (true) {
        if (lexer->eof(lexer)) {
            return false;
        }

        if (lexer->lookahead == '{') {
            brace_nesting++;
            lexer->advance(lexer, false);
        } else if (lexer->lookahead == '}') {
            brace_nesting--;
            if (brace_nesting == 0) {
                lexer->result_symbol = CODE_CONTENT;
                return true;
            }
            lexer->advance(lexer, false);
        } else {
            lexer->advance(lexer, false);
        }
        lexer->mark_end(lexer);
    }
}

bool tree_sitter_epytext_external_scanner_scan(
        void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[CODE_CONTENT]) {
        return _parse_code(payload, lexer);
    } else {
        return false;
    }
}
