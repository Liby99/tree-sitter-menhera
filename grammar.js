const PREC = {
  LET: 0,
  PLUS_MINUS: 1,
  MULT_DIV_MOD: 2,
  APPLICATION: 3,
};

module.exports = grammar({
  name: 'menhera',
  rules: {
    
    // Entry point
    source_file: $ => $.expr,
    
    // Statics
    integer: $ => /\-?\d+/,
    identifier: $ => /[a-zA-Z0-9\_]/,
    
    // Helpers
    arguments: $ => seq($.identifier, optional(seq(',', $.arguments))),
    expressions: $ => seq($.expr, optional(seq(',', $.expressions))),
    unit_expr: $ => choice(
      $.expr_int,
      $.expr_var,
      seq('(', $.compound_expr, ')')
    ),
    compound_expr: $ => choice(
      $.expr_bin_op,
      $.expr_let,
      $.expr_function,
      $.expr_application
    ),
    
    // Expressions
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
    expr_function: $ => prec.right(seq('(', $.arguments, ')', '=>', $.expr)),
    expr_application: $ => prec.left(
      PREC.APPLICATION,
      seq(
        $.expr,
        '(',
        $.expressions,
        ')'
      )
    ),
    expr: $ => choice($.unit_expr, $.compound_expr),
  }
});
