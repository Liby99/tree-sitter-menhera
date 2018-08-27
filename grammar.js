module.exports = grammar({
  name: 'menhera',
  rules: {
    program: $ => $.expr,
    expr: $ => choice(
      $.variable,
      $.integer,
      $.binary_operation,
      prec(0, $.let_in)
    ),
    variable: $ => $.name,
    binary_operation: $ => choice(
      prec.left(1, seq($.expr, '+', $.expr)),
      prec.left(1, seq($.expr, '-', $.expr))
    ),
    let_in: $ => seq('let', $.name, '=', $.expr, 'in', $.expr),
    name: $ => /^[a-zA-Z0-9\_]+$/,
    integer: $ => /^\-?\d+$/,
  }
});
