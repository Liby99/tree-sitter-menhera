module.exports = grammar({
  name: 'menhera',
  rules: {
    source_file: $ => $.expr,
    expr: $ => choice(
      $.identifier,
      $.number,
      $.binary_expr
    ),
    binary_expr: $ => choice(
      prec.left(1, seq($.expr, $.plus, $.expr)),
      prec.left(1, seq($.expr, $.minus, $.expr)),
    ),
    plus: $ => /\+/,
    minus: $ => /\-/,
    eq: $ => /\=/,
    let: $ => /let/,
    identifier: $ => /[a-z]+/,
    number: $ => /\d+/,
  }
});
