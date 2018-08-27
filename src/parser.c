#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 21
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_let = 3,
  anon_sym_EQ = 4,
  anon_sym_in = 5,
  sym_name = 6,
  sym_integer = 7,
  sym_program = 8,
  sym_expr = 9,
  sym_variable = 10,
  sym_binary_operation = 11,
  sym_let_in = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_in] = "in",
  [sym_name] = "name",
  [sym_integer] = "integer",
  [sym_program] = "program",
  [sym_expr] = "expr",
  [sym_variable] = "variable",
  [sym_binary_operation] = "binary_operation",
  [sym_let_in] = "let_in",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_let_in] = {
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
      if (lookahead == '^')
        ADVANCE(5);
      if (lookahead == 'i')
        ADVANCE(12);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      if (lookahead == '-')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '$')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 9:
      if (lookahead == '$')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 11:
      if (lookahead == '$')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'n')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 14:
      if (lookahead == 'e')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 17:
      if (lookahead == '^')
        ADVANCE(5);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == 'i')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
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
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 18},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_integer] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_expr] = STATE(6),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [2] = {
    [sym_name] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_in] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
  },
  [7] = {
    [anon_sym_EQ] = ACTIONS(23),
  },
  [8] = {
    [sym_expr] = STATE(10),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [9] = {
    [sym_expr] = STATE(12),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(25),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
  },
  [11] = {
    [sym_name] = ACTIONS(29),
  },
  [12] = {
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(33),
  },
  [13] = {
    [anon_sym_EQ] = ACTIONS(35),
  },
  [14] = {
    [sym_expr] = STATE(10),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(25),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [15] = {
    [sym_expr] = STATE(17),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [16] = {
    [sym_expr] = STATE(18),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(25),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
  },
  [18] = {
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(39),
  },
  [19] = {
    [sym_expr] = STATE(20),
    [sym_variable] = STATE(4),
    [sym_binary_operation] = STATE(4),
    [sym_let_in] = STATE(4),
    [anon_sym_let] = ACTIONS(25),
    [sym_name] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
  },
  [20] = {
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(37),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operation, 3),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_let_in, 6),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
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
