#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 26
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_integer = 1,
  sym_identifier = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  anon_sym_PERCENT = 7,
  anon_sym_let = 8,
  anon_sym_EQ = 9,
  anon_sym_in = 10,
  sym_source_file = 11,
  sym_expr_int = 12,
  sym_expr_var = 13,
  sym_expr_bin_op = 14,
  sym_expr_let = 15,
  sym_expr = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_in] = "in",
  [sym_source_file] = "source_file",
  [sym_expr_int] = "expr_int",
  [sym_expr_var] = "expr_var",
  [sym_expr_bin_op] = "expr_bin_op",
  [sym_expr_let] = "expr_let",
  [sym_expr] = "expr",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_int] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_var] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_bin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_let] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
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
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == 'i')
        ADVANCE(9);
      if (lookahead == 'l')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 't')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 15:
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == 'l')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 17},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(7),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_in] = ACTIONS(13),
  },
  [4] = {
    [sym_identifier] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
  },
  [8] = {
    [anon_sym_EQ] = ACTIONS(27),
  },
  [9] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(12),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
  [10] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(13),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
  [11] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(15),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(29),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
  },
  [14] = {
    [sym_identifier] = ACTIONS(33),
  },
  [15] = {
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_in] = ACTIONS(39),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(41),
  },
  [17] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(21),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(29),
  },
  [18] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(13),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(29),
  },
  [19] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(22),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
  [20] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(23),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(29),
  },
  [21] = {
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_in] = ACTIONS(31),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
  },
  [23] = {
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_in] = ACTIONS(45),
  },
  [24] = {
    [sym_expr_int] = STATE(6),
    [sym_expr_var] = STATE(6),
    [sym_expr_bin_op] = STATE(6),
    [sym_expr_let] = STATE(6),
    [sym_expr] = STATE(25),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(29),
  },
  [25] = {
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_in] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_expr_int, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_expr_var, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_expr_bin_op, 3),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_expr_let, 6),
  [45] = {.count = 1, .reusable = true}, SHIFT(24),
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
