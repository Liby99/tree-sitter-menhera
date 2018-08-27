#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 79
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_integer = 1,
  sym_identifier = 2,
  anon_sym_COMMA = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_PERCENT = 10,
  anon_sym_let = 11,
  anon_sym_EQ = 12,
  anon_sym_in = 13,
  anon_sym_EQ_GT = 14,
  sym_source_file = 15,
  sym_arguments = 16,
  sym_expressions = 17,
  sym_unit_expr = 18,
  sym_compound_expr = 19,
  sym_expr_int = 20,
  sym_expr_var = 21,
  sym_expr_bin_op = 22,
  sym_expr_let = 23,
  sym_expr_function = 24,
  sym_expr_application = 25,
  sym_expr = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_in] = "in",
  [anon_sym_EQ_GT] = "=>",
  [sym_source_file] = "source_file",
  [sym_arguments] = "arguments",
  [sym_expressions] = "expressions",
  [sym_unit_expr] = "unit_expr",
  [sym_compound_expr] = "compound_expr",
  [sym_expr_int] = "expr_int",
  [sym_expr_var] = "expr_var",
  [sym_expr_bin_op] = "expr_bin_op",
  [sym_expr_let] = "expr_let",
  [sym_expr_function] = "expr_function",
  [sym_expr_application] = "expr_application",
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_expressions] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_expr] = {
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
  [sym_expr_function] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_application] = {
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(13);
      if (lookahead == 'l')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 't')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 19:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '>')
        ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 32},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 30},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(10),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_in] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(15),
  },
  [4] = {
    [sym_arguments] = STATE(14),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(15),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(16),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [5] = {
    [sym_identifier] = ACTIONS(23),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
  },
  [11] = {
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(15),
  },
  [12] = {
    [sym_arguments] = STATE(22),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(15),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(16),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [13] = {
    [sym_identifier] = ACTIONS(45),
  },
  [14] = {
    [anon_sym_RPAREN] = ACTIONS(47),
  },
  [15] = {
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
  },
  [16] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(55),
  },
  [18] = {
    [sym_expressions] = STATE(31),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(32),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
  },
  [19] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(33),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
  },
  [20] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(34),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
  },
  [21] = {
    [sym_arguments] = STATE(36),
    [sym_identifier] = ACTIONS(61),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(63),
  },
  [23] = {
    [anon_sym_EQ] = ACTIONS(65),
  },
  [24] = {
    [anon_sym_EQ_GT] = ACTIONS(67),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(69),
  },
  [26] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(40),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [27] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(34),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [28] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(43),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [29] = {
    [sym_arguments] = STATE(44),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(15),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(16),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [30] = {
    [sym_identifier] = ACTIONS(75),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_in] = ACTIONS(87),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [37] = {
    [anon_sym_EQ_GT] = ACTIONS(91),
  },
  [38] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(51),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [39] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(52),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
  },
  [41] = {
    [sym_arguments] = STATE(53),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(15),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(16),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [42] = {
    [sym_identifier] = ACTIONS(93),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(99),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [45] = {
    [anon_sym_EQ] = ACTIONS(103),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_in] = ACTIONS(105),
  },
  [47] = {
    [sym_expressions] = STATE(60),
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(32),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
  },
  [48] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(61),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
  },
  [49] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(34),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
  },
  [50] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(62),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(107),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(111),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(113),
  },
  [55] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(66),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [56] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(34),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [57] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(67),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
  },
  [58] = {
    [anon_sym_EQ_GT] = ACTIONS(115),
  },
  [59] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(69),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(117),
  },
  [61] = {
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
  },
  [63] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(70),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
  },
  [64] = {
    [anon_sym_EQ_GT] = ACTIONS(119),
  },
  [65] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(72),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(87),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
  },
  [68] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(73),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(123),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
  },
  [71] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(75),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(125),
  },
  [73] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
  },
  [74] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(77),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(109),
  },
  [76] = {
    [sym_unit_expr] = STATE(7),
    [sym_compound_expr] = STATE(7),
    [sym_expr_int] = STATE(8),
    [sym_expr_var] = STATE(8),
    [sym_expr_bin_op] = STATE(9),
    [sym_expr_let] = STATE(9),
    [sym_expr_function] = STATE(9),
    [sym_expr_application] = STATE(9),
    [sym_expr] = STATE(78),
    [sym_integer] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(121),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_expr_int, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_expr_var, 1),
  [17] = {.count = 1, .reusable = false}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(17),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_unit_expr, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_compound_expr, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = true}, SHIFT(35),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, SHIFT(39),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_unit_expr, 3),
  [71] = {.count = 1, .reusable = true}, SHIFT(41),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(45),
  [77] = {.count = 1, .reusable = true}, SHIFT(46),
  [79] = {.count = 1, .reusable = true}, SHIFT(47),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_expressions, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(48),
  [85] = {.count = 1, .reusable = true}, SHIFT(49),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_expr_bin_op, 3),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [91] = {.count = 1, .reusable = true}, SHIFT(50),
  [93] = {.count = 1, .reusable = true}, SHIFT(54),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = true}, SHIFT(56),
  [99] = {.count = 1, .reusable = true}, SHIFT(57),
  [101] = {.count = 1, .reusable = true}, SHIFT(58),
  [103] = {.count = 1, .reusable = true}, SHIFT(59),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_expr_application, 4),
  [107] = {.count = 1, .reusable = true}, SHIFT(63),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_expr_function, 5),
  [111] = {.count = 1, .reusable = true}, SHIFT(64),
  [113] = {.count = 1, .reusable = true}, SHIFT(65),
  [115] = {.count = 1, .reusable = true}, SHIFT(68),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_expressions, 3),
  [119] = {.count = 1, .reusable = true}, SHIFT(71),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_expr_let, 6),
  [123] = {.count = 1, .reusable = true}, SHIFT(74),
  [125] = {.count = 1, .reusable = true}, SHIFT(76),
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
