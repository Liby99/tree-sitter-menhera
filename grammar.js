const PREC = {
  LET: 0,
  PLUS_MINUS: 1,
  MULT_DIV_MOD: 2,
};

module.exports = grammar({
  name: 'menhera',
  rules: {
    source_file: $ => $.expr,
    integer: $ => /\-?\d+/,
    identifier: $ => /[a-zA-Z0-9\_]/,
    expr_int: $ => $.integer,
    expr_var: $ => $.identifier,
    expr_bin_op: $ => choice(
      prec.left(PREC.PLUS_MINUS, seq($.expr, '+', $.expr)),
      prec.left(PREC.PLUS_MINUS, seq($.expr, '-', $.expr)),
      prec.left(PREC.MULT_DIV_MOD, seq($.expr, '*', $.expr)),
      prec.left(PREC.MULT_DIV_MOD, seq($.expr, '/', $.expr)),
      prec.left(PREC.MULT_DIV_MOD, seq($.expr, '%', $.expr)),
    ),
    expr_let: $ => seq('let', $.identifier, '=', $.expr, 'in', $.expr),
    expr: $ => choice(
      $.expr_int,
      $.expr_var,
      $.expr_bin_op,
      $.expr_let,
    ),
  }
});
