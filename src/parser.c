#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 7
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_plus = 1,
  sym_minus = 2,
  sym_eq = 3,
  sym_let = 4,
  sym_identifier = 5,
  sym_number = 6,
  sym_source_file = 7,
  sym_expr = 8,
  sym_binary_expr = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_eq] = "eq",
  [sym_let] = "let",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_expr] = "expr",
  [sym_binary_expr] = "binary_expr",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_let);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 11},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_let] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_expr] = STATE(4),
    [sym_binary_expr] = STATE(2),
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(5),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_plus] = ACTIONS(13),
    [sym_minus] = ACTIONS(13),
  },
  [5] = {
    [sym_expr] = STATE(6),
    [sym_binary_expr] = STATE(2),
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(5),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_plus] = ACTIONS(15),
    [sym_minus] = ACTIONS(15),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expr, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_menhera() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
