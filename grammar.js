/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'epytext',
  externals: $ => [
    $.code_content,
    $.tag_text,
    $.end_of_file,
  ],
  rules: {
    epytext: $ => seq(
      optional($.docstring),
      repeat($.field),
    ),
    docstring: $ => prec.left(repeat1(
      choice(
        $.para,
        // $.literal_block,
        // TODO: implement
        // $.list,
        // $.doctest_block,
      ))),
    para: $ => prec.left(seq(
      repeat1(choice(
        $.tag,
        $.text,
      )),
      $.paragraph_break,
    )),
    paragraph_break: $ => choice(/\n{2,}/, $.end_of_file),
    text: _ => /(?:[^@A-Z\n]|[A-Z][^{])+/,

    // ------- Tags -------

    tag: $ => prec(1, choice(
      $.italic_tag,
      $.bold_tag,
      $.code_tag,
      $.math_tag,
      $.indexed_tag,
      $.link_tag,
      $.uri_tag,
      $.symbol_tag,
      $.graph_tag,
    )),

    italic_tag: $ => seq('I{', $.tag_content, '}'),
    bold_tag: $ => seq('B{', $.tag_content, '}'),
    code_tag: $ => seq('C{', $.code_content, '}'),
    math_tag: $ => seq('M{', $.tag_content, '}'),
    symbol_tag: $ => seq('S{', $.tag_text, '}'),
    graph_tag: $ => seq('G{', $.tag_text, '}'),
    indexed_tag: $ => seq('X{', $.tag_content, '}'),
    link_tag: $ => seq('L{', $.link, '}'),
    uri_tag: $ => seq('U{', $.link, '}'),

    link: $ => choice(
      $.named_link,
      $.primitive_link
    ),

    primitive_link: _ => /[^<}]+/,
    link_name: _ => /[^<}]+/,
    link_url: _ => /[^>]+/,

    named_link: $ => seq(
      $.link_name,
      '<',
      $.link_url,
      '>'
    ),

    tag_content: $ => repeat1(choice(
      $.tag,
      $.tag_text,
    )),

    // ------- Fields -------

    field: $ => seq(
      $.field_literal,
      field('parameter', optional($.arg)),
      ':',
      field('description', repeat1($.docstring)),
    ),
    arg: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    field_literal: $ => seq(
      '@',
      choice(
        $.return_literal,
        $.rtype_literal,
        $.param_literal,
        $.raise_literal,
        $.keyword_literal,
        $.ivar_literal,
        $.cvar_literal,
        $.var_literal,
        $.see_literal,
        $.warning_literal,
        $.requires_literal,
        $.precondition_literal,
        $.postcondition_literal,
        $.organization_literal,
        $.copyright_literal,
        $.change_literal,
        $.type_literal,
        $.group_literal,
        $.sort_literal,
        $.note_literal,
        $.attention_literal,
        $.bug_literal,
        $.version_literal,
        $.todo_literal,
        $.deprecated_literal,
        $.since_literal,
        $.status_literal,
        $.permission_literal,
        $.invariant_literal,
        $.author_literal,
        $.license_literal,
        $.contact_literal,
        $.summary_literal,
        $.newfield_literal,
      )
    ),

    attention_literal: _ => 'attention',
    author_literal: _ => 'author',
    bug_literal: _ => 'bug',
    change_literal: _ => choice('change', 'changes'),
    contact_literal: _ => 'contact',
    copyright_literal: _ => choice('copyright', '(c)'),
    cvar_literal: _ => choice('cvar', 'cvariable'),
    deprecated_literal: _ => 'deprecated',
    group_literal: _ => 'group',
    invariant_literal: _ => 'invariant',
    ivar_literal: _ => choice('ivar', 'ivariable'),
    keyword_literal: _ => choice('kwarg', 'keyword', 'kwparam'),
    license_literal: _ => 'license',
    newfield_literal: _ => 'newfield',
    note_literal: _ => 'note',
    organization_literal: _ => choice('organization', 'org'),
    param_literal: _ => choice('param', 'parameter', 'arg'),
    permission_literal: _ => 'permission',
    postcondition_literal: _ => choice('postcondition', 'postcond'),
    precondition_literal: _ => choice('precondition', 'precond'),
    raise_literal: _ => choice('raises', 'raise', 'except', 'exception'),
    requires_literal: _ => choice('requires', 'require', 'requirement'),
    return_literal: _ => choice('return', 'returns'),
    rtype_literal: _ => choice('rtype', 'returntype'),
    see_literal: _ => choice('see', 'seealso'),
    since_literal: _ => 'since',
    sort_literal: _ => 'sort',
    status_literal: _ => 'status',
    summary_literal: _ => 'summary',
    todo_literal: _ => 'todo',
    type_literal: _ => 'type',
    var_literal: _ => choice('var', 'variable'),
    version_literal: _ => 'version',
    warning_literal: _ => choice('warning', 'warn'),
  }
})
