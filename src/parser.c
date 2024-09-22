#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym__paragraph_break = 1,
  sym_text = 2,
  sym_arg = 3,
  anon_sym_COLON = 4,
  sym_attention_literal = 5,
  sym_author_literal = 6,
  sym_bug_literal = 7,
  anon_sym_change = 8,
  anon_sym_changes = 9,
  sym_contact_literal = 10,
  anon_sym_copyright = 11,
  anon_sym_LPARENc_RPAREN = 12,
  anon_sym_cvar = 13,
  anon_sym_cvariable = 14,
  sym_deprecated_literal = 15,
  sym_group_literal = 16,
  sym_invariant_literal = 17,
  anon_sym_ivar = 18,
  anon_sym_ivariable = 19,
  anon_sym_kwarg = 20,
  anon_sym_keyword = 21,
  anon_sym_kwparam = 22,
  sym_license_literal = 23,
  sym_newfield_literal = 24,
  sym_note_literal = 25,
  anon_sym_organization = 26,
  anon_sym_org = 27,
  anon_sym_param = 28,
  anon_sym_parameter = 29,
  anon_sym_arg = 30,
  sym_permission_literal = 31,
  anon_sym_postcondition = 32,
  anon_sym_postcond = 33,
  anon_sym_precondition = 34,
  anon_sym_precond = 35,
  anon_sym_raises = 36,
  anon_sym_raise = 37,
  anon_sym_except = 38,
  anon_sym_exception = 39,
  anon_sym_requires = 40,
  anon_sym_require = 41,
  anon_sym_requirement = 42,
  anon_sym_return = 43,
  anon_sym_returns = 44,
  anon_sym_rtype = 45,
  anon_sym_returntype = 46,
  anon_sym_see = 47,
  anon_sym_seealso = 48,
  sym_since_literal = 49,
  sym_sort_literal = 50,
  sym_status_literal = 51,
  sym_summary_literal = 52,
  sym_todo_literal = 53,
  sym_type_literal = 54,
  anon_sym_var = 55,
  anon_sym_variable = 56,
  sym_version_literal = 57,
  anon_sym_warning = 58,
  anon_sym_warn = 59,
  anon_sym_AT = 60,
  aux_sym_primitive_link_token1 = 61,
  sym_link_url = 62,
  anon_sym_LT = 63,
  anon_sym_GT = 64,
  anon_sym_I_LBRACE = 65,
  anon_sym_RBRACE = 66,
  anon_sym_B_LBRACE = 67,
  anon_sym_C_LBRACE = 68,
  anon_sym_M_LBRACE = 69,
  anon_sym_S_LBRACE = 70,
  anon_sym_G_LBRACE = 71,
  anon_sym_X_LBRACE = 72,
  anon_sym_L_LBRACE = 73,
  anon_sym_U_LBRACE = 74,
  sym_code_content = 75,
  sym_tag_text = 76,
  sym_epytext = 77,
  sym_docstring = 78,
  sym_para = 79,
  sym_field = 80,
  sym_change_literal = 81,
  sym_copyright_literal = 82,
  sym_cvar_literal = 83,
  sym_ivar_literal = 84,
  sym_keyword_literal = 85,
  sym_organization_literal = 86,
  sym_param_literal = 87,
  sym_postcondition_literal = 88,
  sym_precondition_literal = 89,
  sym_raise_literal = 90,
  sym_requires_literal = 91,
  sym_return_literal = 92,
  sym_rtype_literal = 93,
  sym_see_literal = 94,
  sym_var_literal = 95,
  sym_warning_literal = 96,
  sym_field_literal = 97,
  sym_link = 98,
  sym_primitive_link = 99,
  sym_link_name = 100,
  sym_named_link = 101,
  sym_tag_content = 102,
  sym_italic_tag = 103,
  sym_bold_tag = 104,
  sym_code_tag = 105,
  sym_math_tag = 106,
  sym_symbol_tag = 107,
  sym_graph_tag = 108,
  sym_indexed_tag = 109,
  sym_link_tag = 110,
  sym_uri_tag = 111,
  sym_tag = 112,
  aux_sym_epytext_repeat1 = 113,
  aux_sym_docstring_repeat1 = 114,
  aux_sym_para_repeat1 = 115,
  aux_sym_field_repeat1 = 116,
  aux_sym_tag_content_repeat1 = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__paragraph_break] = "_paragraph_break",
  [sym_text] = "text",
  [sym_arg] = "arg",
  [anon_sym_COLON] = ":",
  [sym_attention_literal] = "attention_literal",
  [sym_author_literal] = "author_literal",
  [sym_bug_literal] = "bug_literal",
  [anon_sym_change] = "change",
  [anon_sym_changes] = "changes",
  [sym_contact_literal] = "contact_literal",
  [anon_sym_copyright] = "copyright",
  [anon_sym_LPARENc_RPAREN] = "(c)",
  [anon_sym_cvar] = "cvar",
  [anon_sym_cvariable] = "cvariable",
  [sym_deprecated_literal] = "deprecated_literal",
  [sym_group_literal] = "group_literal",
  [sym_invariant_literal] = "invariant_literal",
  [anon_sym_ivar] = "ivar",
  [anon_sym_ivariable] = "ivariable",
  [anon_sym_kwarg] = "kwarg",
  [anon_sym_keyword] = "keyword",
  [anon_sym_kwparam] = "kwparam",
  [sym_license_literal] = "license_literal",
  [sym_newfield_literal] = "newfield_literal",
  [sym_note_literal] = "note_literal",
  [anon_sym_organization] = "organization",
  [anon_sym_org] = "org",
  [anon_sym_param] = "param",
  [anon_sym_parameter] = "parameter",
  [anon_sym_arg] = "arg",
  [sym_permission_literal] = "permission_literal",
  [anon_sym_postcondition] = "postcondition",
  [anon_sym_postcond] = "postcond",
  [anon_sym_precondition] = "precondition",
  [anon_sym_precond] = "precond",
  [anon_sym_raises] = "raises",
  [anon_sym_raise] = "raise",
  [anon_sym_except] = "except",
  [anon_sym_exception] = "exception",
  [anon_sym_requires] = "requires",
  [anon_sym_require] = "require",
  [anon_sym_requirement] = "requirement",
  [anon_sym_return] = "return",
  [anon_sym_returns] = "returns",
  [anon_sym_rtype] = "rtype",
  [anon_sym_returntype] = "returntype",
  [anon_sym_see] = "see",
  [anon_sym_seealso] = "seealso",
  [sym_since_literal] = "since_literal",
  [sym_sort_literal] = "sort_literal",
  [sym_status_literal] = "status_literal",
  [sym_summary_literal] = "summary_literal",
  [sym_todo_literal] = "todo_literal",
  [sym_type_literal] = "type_literal",
  [anon_sym_var] = "var",
  [anon_sym_variable] = "variable",
  [sym_version_literal] = "version_literal",
  [anon_sym_warning] = "warning",
  [anon_sym_warn] = "warn",
  [anon_sym_AT] = "@",
  [aux_sym_primitive_link_token1] = "primitive_link_token1",
  [sym_link_url] = "link_url",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_I_LBRACE] = "I{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_B_LBRACE] = "B{",
  [anon_sym_C_LBRACE] = "C{",
  [anon_sym_M_LBRACE] = "M{",
  [anon_sym_S_LBRACE] = "S{",
  [anon_sym_G_LBRACE] = "G{",
  [anon_sym_X_LBRACE] = "X{",
  [anon_sym_L_LBRACE] = "L{",
  [anon_sym_U_LBRACE] = "U{",
  [sym_code_content] = "code_content",
  [sym_tag_text] = "tag_text",
  [sym_epytext] = "epytext",
  [sym_docstring] = "docstring",
  [sym_para] = "para",
  [sym_field] = "field",
  [sym_change_literal] = "change_literal",
  [sym_copyright_literal] = "copyright_literal",
  [sym_cvar_literal] = "cvar_literal",
  [sym_ivar_literal] = "ivar_literal",
  [sym_keyword_literal] = "keyword_literal",
  [sym_organization_literal] = "organization_literal",
  [sym_param_literal] = "param_literal",
  [sym_postcondition_literal] = "postcondition_literal",
  [sym_precondition_literal] = "precondition_literal",
  [sym_raise_literal] = "raise_literal",
  [sym_requires_literal] = "requires_literal",
  [sym_return_literal] = "return_literal",
  [sym_rtype_literal] = "rtype_literal",
  [sym_see_literal] = "see_literal",
  [sym_var_literal] = "var_literal",
  [sym_warning_literal] = "warning_literal",
  [sym_field_literal] = "field_literal",
  [sym_link] = "link",
  [sym_primitive_link] = "primitive_link",
  [sym_link_name] = "link_name",
  [sym_named_link] = "named_link",
  [sym_tag_content] = "tag_content",
  [sym_italic_tag] = "italic_tag",
  [sym_bold_tag] = "bold_tag",
  [sym_code_tag] = "code_tag",
  [sym_math_tag] = "math_tag",
  [sym_symbol_tag] = "symbol_tag",
  [sym_graph_tag] = "graph_tag",
  [sym_indexed_tag] = "indexed_tag",
  [sym_link_tag] = "link_tag",
  [sym_uri_tag] = "uri_tag",
  [sym_tag] = "tag",
  [aux_sym_epytext_repeat1] = "epytext_repeat1",
  [aux_sym_docstring_repeat1] = "docstring_repeat1",
  [aux_sym_para_repeat1] = "para_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_tag_content_repeat1] = "tag_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__paragraph_break] = sym__paragraph_break,
  [sym_text] = sym_text,
  [sym_arg] = sym_arg,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_attention_literal] = sym_attention_literal,
  [sym_author_literal] = sym_author_literal,
  [sym_bug_literal] = sym_bug_literal,
  [anon_sym_change] = anon_sym_change,
  [anon_sym_changes] = anon_sym_changes,
  [sym_contact_literal] = sym_contact_literal,
  [anon_sym_copyright] = anon_sym_copyright,
  [anon_sym_LPARENc_RPAREN] = anon_sym_LPARENc_RPAREN,
  [anon_sym_cvar] = anon_sym_cvar,
  [anon_sym_cvariable] = anon_sym_cvariable,
  [sym_deprecated_literal] = sym_deprecated_literal,
  [sym_group_literal] = sym_group_literal,
  [sym_invariant_literal] = sym_invariant_literal,
  [anon_sym_ivar] = anon_sym_ivar,
  [anon_sym_ivariable] = anon_sym_ivariable,
  [anon_sym_kwarg] = anon_sym_kwarg,
  [anon_sym_keyword] = anon_sym_keyword,
  [anon_sym_kwparam] = anon_sym_kwparam,
  [sym_license_literal] = sym_license_literal,
  [sym_newfield_literal] = sym_newfield_literal,
  [sym_note_literal] = sym_note_literal,
  [anon_sym_organization] = anon_sym_organization,
  [anon_sym_org] = anon_sym_org,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_arg] = anon_sym_arg,
  [sym_permission_literal] = sym_permission_literal,
  [anon_sym_postcondition] = anon_sym_postcondition,
  [anon_sym_postcond] = anon_sym_postcond,
  [anon_sym_precondition] = anon_sym_precondition,
  [anon_sym_precond] = anon_sym_precond,
  [anon_sym_raises] = anon_sym_raises,
  [anon_sym_raise] = anon_sym_raise,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_exception] = anon_sym_exception,
  [anon_sym_requires] = anon_sym_requires,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_requirement] = anon_sym_requirement,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_rtype] = anon_sym_rtype,
  [anon_sym_returntype] = anon_sym_returntype,
  [anon_sym_see] = anon_sym_see,
  [anon_sym_seealso] = anon_sym_seealso,
  [sym_since_literal] = sym_since_literal,
  [sym_sort_literal] = sym_sort_literal,
  [sym_status_literal] = sym_status_literal,
  [sym_summary_literal] = sym_summary_literal,
  [sym_todo_literal] = sym_todo_literal,
  [sym_type_literal] = sym_type_literal,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_variable] = anon_sym_variable,
  [sym_version_literal] = sym_version_literal,
  [anon_sym_warning] = anon_sym_warning,
  [anon_sym_warn] = anon_sym_warn,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_primitive_link_token1] = aux_sym_primitive_link_token1,
  [sym_link_url] = sym_link_url,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_I_LBRACE] = anon_sym_I_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_B_LBRACE] = anon_sym_B_LBRACE,
  [anon_sym_C_LBRACE] = anon_sym_C_LBRACE,
  [anon_sym_M_LBRACE] = anon_sym_M_LBRACE,
  [anon_sym_S_LBRACE] = anon_sym_S_LBRACE,
  [anon_sym_G_LBRACE] = anon_sym_G_LBRACE,
  [anon_sym_X_LBRACE] = anon_sym_X_LBRACE,
  [anon_sym_L_LBRACE] = anon_sym_L_LBRACE,
  [anon_sym_U_LBRACE] = anon_sym_U_LBRACE,
  [sym_code_content] = sym_code_content,
  [sym_tag_text] = sym_tag_text,
  [sym_epytext] = sym_epytext,
  [sym_docstring] = sym_docstring,
  [sym_para] = sym_para,
  [sym_field] = sym_field,
  [sym_change_literal] = sym_change_literal,
  [sym_copyright_literal] = sym_copyright_literal,
  [sym_cvar_literal] = sym_cvar_literal,
  [sym_ivar_literal] = sym_ivar_literal,
  [sym_keyword_literal] = sym_keyword_literal,
  [sym_organization_literal] = sym_organization_literal,
  [sym_param_literal] = sym_param_literal,
  [sym_postcondition_literal] = sym_postcondition_literal,
  [sym_precondition_literal] = sym_precondition_literal,
  [sym_raise_literal] = sym_raise_literal,
  [sym_requires_literal] = sym_requires_literal,
  [sym_return_literal] = sym_return_literal,
  [sym_rtype_literal] = sym_rtype_literal,
  [sym_see_literal] = sym_see_literal,
  [sym_var_literal] = sym_var_literal,
  [sym_warning_literal] = sym_warning_literal,
  [sym_field_literal] = sym_field_literal,
  [sym_link] = sym_link,
  [sym_primitive_link] = sym_primitive_link,
  [sym_link_name] = sym_link_name,
  [sym_named_link] = sym_named_link,
  [sym_tag_content] = sym_tag_content,
  [sym_italic_tag] = sym_italic_tag,
  [sym_bold_tag] = sym_bold_tag,
  [sym_code_tag] = sym_code_tag,
  [sym_math_tag] = sym_math_tag,
  [sym_symbol_tag] = sym_symbol_tag,
  [sym_graph_tag] = sym_graph_tag,
  [sym_indexed_tag] = sym_indexed_tag,
  [sym_link_tag] = sym_link_tag,
  [sym_uri_tag] = sym_uri_tag,
  [sym_tag] = sym_tag,
  [aux_sym_epytext_repeat1] = aux_sym_epytext_repeat1,
  [aux_sym_docstring_repeat1] = aux_sym_docstring_repeat1,
  [aux_sym_para_repeat1] = aux_sym_para_repeat1,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
  [aux_sym_tag_content_repeat1] = aux_sym_tag_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__paragraph_break] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_attention_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_author_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bug_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_change] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_changes] = {
    .visible = true,
    .named = false,
  },
  [sym_contact_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copyright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENc_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvariable] = {
    .visible = true,
    .named = false,
  },
  [sym_deprecated_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_group_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_invariant_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ivar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ivariable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kwarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kwparam] = {
    .visible = true,
    .named = false,
  },
  [sym_license_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_newfield_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_note_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_organization] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_org] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arg] = {
    .visible = true,
    .named = false,
  },
  [sym_permission_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_postcondition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postcond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precondition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exception] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requirement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returntype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_see] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seealso] = {
    .visible = true,
    .named = false,
  },
  [sym_since_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_status_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_summary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [sym_version_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_link_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_link_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_code_content] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_text] = {
    .visible = true,
    .named = true,
  },
  [sym_epytext] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym_para] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_change_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_copyright_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_cvar_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ivar_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_organization_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_param_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_postcondition_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_precondition_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_raise_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_requires_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_return_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_rtype_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_see_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_var_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_warning_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_field_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_link] = {
    .visible = true,
    .named = true,
  },
  [sym_link_name] = {
    .visible = true,
    .named = true,
  },
  [sym_named_link] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_content] = {
    .visible = true,
    .named = true,
  },
  [sym_italic_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_code_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_math_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_graph_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_indexed_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_uri_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_epytext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docstring_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_para_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_description = 1,
  field_parameter = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description] = "description",
  [field_parameter] = "parameter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_description, 2},
  [1] =
    {field_description, 3},
    {field_parameter, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 11,
  [21] = 18,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 28,
  [36] = 25,
  [37] = 34,
  [38] = 33,
  [39] = 24,
  [40] = 26,
  [41] = 32,
  [42] = 31,
  [43] = 30,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 72,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 76,
  [85] = 71,
  [86] = 86,
  [87] = 79,
  [88] = 80,
  [89] = 81,
  [90] = 77,
  [91] = 74,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 82,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 97,
  [100] = 100,
  [101] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(232);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ':') ADVANCE(238);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == 'B') ADVANCE(210);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'G') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'S') ADVANCE(222);
      if (lookahead == 'U') ADVANCE(224);
      if (lookahead == 'X') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(223);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'X') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(223);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'X') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(246);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(3);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 146:
      if (lookahead == 'q') ADVANCE(196);
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 201:
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 202:
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 203:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(286);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 209:
      if (lookahead == 'z') ADVANCE(25);
      END_STATE();
    case 210:
      if (lookahead == '{') ADVANCE(303);
      END_STATE();
    case 211:
      if (lookahead == '{') ADVANCE(303);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 212:
      if (lookahead == '{') ADVANCE(304);
      END_STATE();
    case 213:
      if (lookahead == '{') ADVANCE(304);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 214:
      if (lookahead == '{') ADVANCE(307);
      END_STATE();
    case 215:
      if (lookahead == '{') ADVANCE(307);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 216:
      if (lookahead == '{') ADVANCE(301);
      END_STATE();
    case 217:
      if (lookahead == '{') ADVANCE(301);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 218:
      if (lookahead == '{') ADVANCE(309);
      END_STATE();
    case 219:
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 220:
      if (lookahead == '{') ADVANCE(305);
      END_STATE();
    case 221:
      if (lookahead == '{') ADVANCE(305);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 222:
      if (lookahead == '{') ADVANCE(306);
      END_STATE();
    case 223:
      if (lookahead == '{') ADVANCE(306);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 224:
      if (lookahead == '{') ADVANCE(310);
      END_STATE();
    case 225:
      if (lookahead == '{') ADVANCE(310);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 226:
      if (lookahead == '{') ADVANCE(308);
      END_STATE();
    case 227:
      if (lookahead == '{') ADVANCE(308);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(296);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(298);
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(236);
      END_STATE();
    case 231:
      if (eof) ADVANCE(232);
      if (lookahead == '\n') SKIP(231)
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(223);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'X') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__paragraph_break);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(223);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'X') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(223);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'X') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_arg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_attention_literal);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_author_literal);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_bug_literal);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_change);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_changes);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_contact_literal);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LPARENc_RPAREN);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_cvar);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_cvariable);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_deprecated_literal);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_group_literal);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_invariant_literal);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ivar);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ivariable);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_kwarg);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_keyword);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_kwparam);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_license_literal);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_newfield_literal);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_note_literal);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_organization);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_permission_literal);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_postcondition);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_postcond);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_precondition);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_precond);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_raise);
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_requirement);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_rtype);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_returntype);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_see);
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_seealso);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_since_literal);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_sort_literal);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_status_literal);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_summary_literal);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_todo_literal);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_type_literal);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_version_literal);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_warn);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_primitive_link_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_primitive_link_token1);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_link_url);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_link_url);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_I_LBRACE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_M_LBRACE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_S_LBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_G_LBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_X_LBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_L_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_U_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 231},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 231},
  [4] = {.lex_state = 231},
  [5] = {.lex_state = 231},
  [6] = {.lex_state = 231},
  [7] = {.lex_state = 231},
  [8] = {.lex_state = 231},
  [9] = {.lex_state = 231},
  [10] = {.lex_state = 231},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 231},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 228},
  [48] = {.lex_state = 228},
  [49] = {.lex_state = 228},
  [50] = {.lex_state = 228},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 229},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
};

enum {
  ts_external_token_code_content = 0,
  ts_external_token_tag_text = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_content] = sym_code_content,
  [ts_external_token_tag_text] = sym_tag_text,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_content] = true,
    [ts_external_token_tag_text] = true,
  },
  [2] = {
    [ts_external_token_tag_text] = true,
  },
  [3] = {
    [ts_external_token_code_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_attention_literal] = ACTIONS(1),
    [sym_author_literal] = ACTIONS(1),
    [sym_bug_literal] = ACTIONS(1),
    [anon_sym_change] = ACTIONS(1),
    [anon_sym_changes] = ACTIONS(1),
    [sym_contact_literal] = ACTIONS(1),
    [anon_sym_copyright] = ACTIONS(1),
    [anon_sym_LPARENc_RPAREN] = ACTIONS(1),
    [anon_sym_cvar] = ACTIONS(1),
    [anon_sym_cvariable] = ACTIONS(1),
    [sym_deprecated_literal] = ACTIONS(1),
    [sym_group_literal] = ACTIONS(1),
    [sym_invariant_literal] = ACTIONS(1),
    [anon_sym_ivar] = ACTIONS(1),
    [anon_sym_ivariable] = ACTIONS(1),
    [anon_sym_kwarg] = ACTIONS(1),
    [anon_sym_keyword] = ACTIONS(1),
    [anon_sym_kwparam] = ACTIONS(1),
    [sym_license_literal] = ACTIONS(1),
    [sym_newfield_literal] = ACTIONS(1),
    [sym_note_literal] = ACTIONS(1),
    [anon_sym_organization] = ACTIONS(1),
    [anon_sym_org] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_arg] = ACTIONS(1),
    [sym_permission_literal] = ACTIONS(1),
    [anon_sym_postcondition] = ACTIONS(1),
    [anon_sym_postcond] = ACTIONS(1),
    [anon_sym_precondition] = ACTIONS(1),
    [anon_sym_precond] = ACTIONS(1),
    [anon_sym_raises] = ACTIONS(1),
    [anon_sym_raise] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_requirement] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_rtype] = ACTIONS(1),
    [anon_sym_returntype] = ACTIONS(1),
    [anon_sym_see] = ACTIONS(1),
    [anon_sym_seealso] = ACTIONS(1),
    [sym_since_literal] = ACTIONS(1),
    [sym_sort_literal] = ACTIONS(1),
    [sym_status_literal] = ACTIONS(1),
    [sym_summary_literal] = ACTIONS(1),
    [sym_todo_literal] = ACTIONS(1),
    [sym_type_literal] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [sym_version_literal] = ACTIONS(1),
    [anon_sym_warning] = ACTIONS(1),
    [anon_sym_warn] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_I_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_B_LBRACE] = ACTIONS(1),
    [anon_sym_C_LBRACE] = ACTIONS(1),
    [anon_sym_M_LBRACE] = ACTIONS(1),
    [anon_sym_S_LBRACE] = ACTIONS(1),
    [anon_sym_G_LBRACE] = ACTIONS(1),
    [anon_sym_X_LBRACE] = ACTIONS(1),
    [anon_sym_L_LBRACE] = ACTIONS(1),
    [anon_sym_U_LBRACE] = ACTIONS(1),
    [sym_code_content] = ACTIONS(1),
    [sym_tag_text] = ACTIONS(1),
  },
  [1] = {
    [sym_epytext] = STATE(83),
    [sym_docstring] = STATE(51),
    [sym_para] = STATE(9),
    [sym_field] = STATE(46),
    [sym_field_literal] = STATE(53),
    [sym_italic_tag] = STATE(40),
    [sym_bold_tag] = STATE(40),
    [sym_code_tag] = STATE(40),
    [sym_math_tag] = STATE(40),
    [sym_symbol_tag] = STATE(40),
    [sym_graph_tag] = STATE(40),
    [sym_indexed_tag] = STATE(40),
    [sym_link_tag] = STATE(40),
    [sym_uri_tag] = STATE(40),
    [sym_tag] = STATE(17),
    [aux_sym_epytext_repeat1] = STATE(46),
    [aux_sym_docstring_repeat1] = STATE(9),
    [aux_sym_para_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_I_LBRACE] = ACTIONS(9),
    [anon_sym_B_LBRACE] = ACTIONS(11),
    [anon_sym_C_LBRACE] = ACTIONS(13),
    [anon_sym_M_LBRACE] = ACTIONS(15),
    [anon_sym_S_LBRACE] = ACTIONS(17),
    [anon_sym_G_LBRACE] = ACTIONS(19),
    [anon_sym_X_LBRACE] = ACTIONS(21),
    [anon_sym_L_LBRACE] = ACTIONS(23),
    [anon_sym_U_LBRACE] = ACTIONS(25),
  },
  [2] = {
    [sym_change_literal] = STATE(55),
    [sym_copyright_literal] = STATE(55),
    [sym_cvar_literal] = STATE(55),
    [sym_ivar_literal] = STATE(55),
    [sym_keyword_literal] = STATE(55),
    [sym_organization_literal] = STATE(55),
    [sym_param_literal] = STATE(55),
    [sym_postcondition_literal] = STATE(55),
    [sym_precondition_literal] = STATE(55),
    [sym_raise_literal] = STATE(55),
    [sym_requires_literal] = STATE(55),
    [sym_return_literal] = STATE(55),
    [sym_rtype_literal] = STATE(55),
    [sym_see_literal] = STATE(55),
    [sym_var_literal] = STATE(55),
    [sym_warning_literal] = STATE(55),
    [sym_attention_literal] = ACTIONS(27),
    [sym_author_literal] = ACTIONS(27),
    [sym_bug_literal] = ACTIONS(27),
    [anon_sym_change] = ACTIONS(29),
    [anon_sym_changes] = ACTIONS(31),
    [sym_contact_literal] = ACTIONS(27),
    [anon_sym_copyright] = ACTIONS(33),
    [anon_sym_LPARENc_RPAREN] = ACTIONS(33),
    [anon_sym_cvar] = ACTIONS(35),
    [anon_sym_cvariable] = ACTIONS(37),
    [sym_deprecated_literal] = ACTIONS(27),
    [sym_group_literal] = ACTIONS(27),
    [sym_invariant_literal] = ACTIONS(27),
    [anon_sym_ivar] = ACTIONS(39),
    [anon_sym_ivariable] = ACTIONS(41),
    [anon_sym_kwarg] = ACTIONS(43),
    [anon_sym_keyword] = ACTIONS(43),
    [anon_sym_kwparam] = ACTIONS(43),
    [sym_license_literal] = ACTIONS(27),
    [sym_newfield_literal] = ACTIONS(27),
    [sym_note_literal] = ACTIONS(27),
    [anon_sym_organization] = ACTIONS(45),
    [anon_sym_org] = ACTIONS(47),
    [anon_sym_param] = ACTIONS(49),
    [anon_sym_parameter] = ACTIONS(51),
    [anon_sym_arg] = ACTIONS(51),
    [sym_permission_literal] = ACTIONS(27),
    [anon_sym_postcondition] = ACTIONS(53),
    [anon_sym_postcond] = ACTIONS(55),
    [anon_sym_precondition] = ACTIONS(57),
    [anon_sym_precond] = ACTIONS(59),
    [anon_sym_raises] = ACTIONS(61),
    [anon_sym_raise] = ACTIONS(63),
    [anon_sym_except] = ACTIONS(63),
    [anon_sym_exception] = ACTIONS(61),
    [anon_sym_requires] = ACTIONS(65),
    [anon_sym_require] = ACTIONS(67),
    [anon_sym_requirement] = ACTIONS(65),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_returns] = ACTIONS(71),
    [anon_sym_rtype] = ACTIONS(73),
    [anon_sym_returntype] = ACTIONS(73),
    [anon_sym_see] = ACTIONS(75),
    [anon_sym_seealso] = ACTIONS(77),
    [sym_since_literal] = ACTIONS(27),
    [sym_sort_literal] = ACTIONS(27),
    [sym_status_literal] = ACTIONS(27),
    [sym_summary_literal] = ACTIONS(27),
    [sym_todo_literal] = ACTIONS(27),
    [sym_type_literal] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(79),
    [anon_sym_variable] = ACTIONS(81),
    [sym_version_literal] = ACTIONS(27),
    [anon_sym_warning] = ACTIONS(83),
    [anon_sym_warn] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_text,
    ACTIONS(92), 1,
      anon_sym_AT,
    ACTIONS(94), 1,
      anon_sym_I_LBRACE,
    ACTIONS(97), 1,
      anon_sym_B_LBRACE,
    ACTIONS(100), 1,
      anon_sym_C_LBRACE,
    ACTIONS(103), 1,
      anon_sym_M_LBRACE,
    ACTIONS(106), 1,
      anon_sym_S_LBRACE,
    ACTIONS(109), 1,
      anon_sym_G_LBRACE,
    ACTIONS(112), 1,
      anon_sym_X_LBRACE,
    ACTIONS(115), 1,
      anon_sym_L_LBRACE,
    ACTIONS(118), 1,
      anon_sym_U_LBRACE,
    STATE(3), 2,
      sym_docstring,
      aux_sym_field_repeat1,
    STATE(6), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [60] = 16,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_I_LBRACE,
    ACTIONS(11), 1,
      anon_sym_B_LBRACE,
    ACTIONS(13), 1,
      anon_sym_C_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_S_LBRACE,
    ACTIONS(19), 1,
      anon_sym_G_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(3), 2,
      sym_docstring,
      aux_sym_field_repeat1,
    STATE(6), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [120] = 16,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_I_LBRACE,
    ACTIONS(11), 1,
      anon_sym_B_LBRACE,
    ACTIONS(13), 1,
      anon_sym_C_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_S_LBRACE,
    ACTIONS(19), 1,
      anon_sym_G_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(3), 2,
      sym_docstring,
      aux_sym_field_repeat1,
    STATE(6), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [180] = 5,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(10), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
    ACTIONS(131), 10,
      anon_sym_AT,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [216] = 14,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_I_LBRACE,
    ACTIONS(11), 1,
      anon_sym_B_LBRACE,
    ACTIONS(13), 1,
      anon_sym_C_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_S_LBRACE,
    ACTIONS(19), 1,
      anon_sym_G_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    STATE(5), 2,
      sym_docstring,
      aux_sym_field_repeat1,
    STATE(6), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [270] = 14,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_I_LBRACE,
    ACTIONS(11), 1,
      anon_sym_B_LBRACE,
    ACTIONS(13), 1,
      anon_sym_C_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_S_LBRACE,
    ACTIONS(19), 1,
      anon_sym_G_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    STATE(4), 2,
      sym_docstring,
      aux_sym_field_repeat1,
    STATE(6), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [324] = 15,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_I_LBRACE,
    ACTIONS(11), 1,
      anon_sym_B_LBRACE,
    ACTIONS(13), 1,
      anon_sym_C_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_S_LBRACE,
    ACTIONS(19), 1,
      anon_sym_G_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(10), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [380] = 15,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      anon_sym_I_LBRACE,
    ACTIONS(143), 1,
      anon_sym_B_LBRACE,
    ACTIONS(146), 1,
      anon_sym_C_LBRACE,
    ACTIONS(149), 1,
      anon_sym_M_LBRACE,
    ACTIONS(152), 1,
      anon_sym_S_LBRACE,
    ACTIONS(155), 1,
      anon_sym_G_LBRACE,
    ACTIONS(158), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(164), 1,
      anon_sym_U_LBRACE,
    STATE(10), 2,
      sym_para,
      aux_sym_docstring_repeat1,
    STATE(17), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [436] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(79), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [485] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(84), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [534] = 13,
    ACTIONS(187), 1,
      sym__paragraph_break,
    ACTIONS(189), 1,
      sym_text,
    ACTIONS(192), 1,
      anon_sym_I_LBRACE,
    ACTIONS(195), 1,
      anon_sym_B_LBRACE,
    ACTIONS(198), 1,
      anon_sym_C_LBRACE,
    ACTIONS(201), 1,
      anon_sym_M_LBRACE,
    ACTIONS(204), 1,
      anon_sym_S_LBRACE,
    ACTIONS(207), 1,
      anon_sym_G_LBRACE,
    ACTIONS(210), 1,
      anon_sym_X_LBRACE,
    ACTIONS(213), 1,
      anon_sym_L_LBRACE,
    ACTIONS(216), 1,
      anon_sym_U_LBRACE,
    STATE(13), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [583] = 13,
    ACTIONS(219), 1,
      anon_sym_I_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      anon_sym_B_LBRACE,
    ACTIONS(227), 1,
      anon_sym_C_LBRACE,
    ACTIONS(230), 1,
      anon_sym_M_LBRACE,
    ACTIONS(233), 1,
      anon_sym_S_LBRACE,
    ACTIONS(236), 1,
      anon_sym_G_LBRACE,
    ACTIONS(239), 1,
      anon_sym_X_LBRACE,
    ACTIONS(242), 1,
      anon_sym_L_LBRACE,
    ACTIONS(245), 1,
      anon_sym_U_LBRACE,
    ACTIONS(248), 1,
      sym_tag_text,
    STATE(14), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [632] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      sym_tag_text,
    STATE(14), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [681] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(76), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [730] = 13,
    ACTIONS(9), 1,
      anon_sym_I_LBRACE,
    ACTIONS(11), 1,
      anon_sym_B_LBRACE,
    ACTIONS(13), 1,
      anon_sym_C_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_S_LBRACE,
    ACTIONS(19), 1,
      anon_sym_G_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    ACTIONS(255), 1,
      sym__paragraph_break,
    ACTIONS(257), 1,
      sym_text,
    STATE(13), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(40), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [779] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(77), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [828] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(85), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [877] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(87), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [926] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(90), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [975] = 13,
    ACTIONS(167), 1,
      anon_sym_I_LBRACE,
    ACTIONS(169), 1,
      anon_sym_B_LBRACE,
    ACTIONS(171), 1,
      anon_sym_C_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_S_LBRACE,
    ACTIONS(177), 1,
      anon_sym_G_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    STATE(71), 1,
      sym_tag_content,
    STATE(15), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(26), 9,
      sym_italic_tag,
      sym_bold_tag,
      sym_code_tag,
      sym_math_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [1024] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(261), 10,
      anon_sym_AT,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1041] = 1,
    ACTIONS(263), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1055] = 1,
    ACTIONS(265), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1069] = 1,
    ACTIONS(267), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1083] = 1,
    ACTIONS(269), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1097] = 1,
    ACTIONS(271), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1111] = 1,
    ACTIONS(273), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1125] = 1,
    ACTIONS(275), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1139] = 1,
    ACTIONS(277), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1153] = 1,
    ACTIONS(279), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1167] = 1,
    ACTIONS(281), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1181] = 1,
    ACTIONS(283), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1195] = 1,
    ACTIONS(285), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1209] = 1,
    ACTIONS(287), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1223] = 1,
    ACTIONS(289), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1237] = 1,
    ACTIONS(291), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1251] = 1,
    ACTIONS(293), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1265] = 1,
    ACTIONS(295), 11,
      sym__paragraph_break,
      sym_text,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1279] = 1,
    ACTIONS(297), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1293] = 1,
    ACTIONS(299), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1307] = 1,
    ACTIONS(301), 11,
      sym_tag_text,
      anon_sym_I_LBRACE,
      anon_sym_RBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1321] = 4,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym_field_literal,
    STATE(45), 2,
      sym_field,
      aux_sym_epytext_repeat1,
  [1335] = 4,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym_field_literal,
    STATE(45), 2,
      sym_field,
      aux_sym_epytext_repeat1,
  [1349] = 4,
    ACTIONS(305), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_field_literal,
    STATE(45), 2,
      sym_field,
      aux_sym_epytext_repeat1,
  [1363] = 4,
    ACTIONS(314), 1,
      aux_sym_primitive_link_token1,
    STATE(92), 1,
      sym_link,
    STATE(100), 1,
      sym_link_name,
    STATE(101), 2,
      sym_primitive_link,
      sym_named_link,
  [1377] = 4,
    ACTIONS(314), 1,
      aux_sym_primitive_link_token1,
    STATE(91), 1,
      sym_link,
    STATE(100), 1,
      sym_link_name,
    STATE(101), 2,
      sym_primitive_link,
      sym_named_link,
  [1391] = 4,
    ACTIONS(314), 1,
      aux_sym_primitive_link_token1,
    STATE(74), 1,
      sym_link,
    STATE(100), 1,
      sym_link_name,
    STATE(101), 2,
      sym_primitive_link,
      sym_named_link,
  [1405] = 4,
    ACTIONS(314), 1,
      aux_sym_primitive_link_token1,
    STATE(94), 1,
      sym_link,
    STATE(100), 1,
      sym_link_name,
    STATE(101), 2,
      sym_primitive_link,
      sym_named_link,
  [1419] = 4,
    ACTIONS(305), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_field_literal,
    STATE(44), 2,
      sym_field,
      aux_sym_epytext_repeat1,
  [1433] = 1,
    ACTIONS(316), 2,
      sym_arg,
      anon_sym_COLON,
  [1438] = 2,
    ACTIONS(318), 1,
      sym_arg,
    ACTIONS(320), 1,
      anon_sym_COLON,
  [1445] = 2,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [1452] = 1,
    ACTIONS(326), 2,
      sym_arg,
      anon_sym_COLON,
  [1457] = 1,
    ACTIONS(328), 2,
      sym_arg,
      anon_sym_COLON,
  [1462] = 1,
    ACTIONS(330), 2,
      sym_arg,
      anon_sym_COLON,
  [1467] = 1,
    ACTIONS(332), 2,
      sym_arg,
      anon_sym_COLON,
  [1472] = 1,
    ACTIONS(334), 2,
      sym_arg,
      anon_sym_COLON,
  [1477] = 1,
    ACTIONS(336), 2,
      sym_arg,
      anon_sym_COLON,
  [1482] = 1,
    ACTIONS(338), 2,
      sym_arg,
      anon_sym_COLON,
  [1487] = 1,
    ACTIONS(340), 2,
      sym_arg,
      anon_sym_COLON,
  [1492] = 1,
    ACTIONS(342), 2,
      sym_arg,
      anon_sym_COLON,
  [1497] = 1,
    ACTIONS(344), 2,
      sym_arg,
      anon_sym_COLON,
  [1502] = 1,
    ACTIONS(346), 2,
      sym_arg,
      anon_sym_COLON,
  [1507] = 1,
    ACTIONS(348), 2,
      sym_arg,
      anon_sym_COLON,
  [1512] = 1,
    ACTIONS(350), 2,
      sym_arg,
      anon_sym_COLON,
  [1517] = 1,
    ACTIONS(352), 2,
      sym_arg,
      anon_sym_COLON,
  [1522] = 1,
    ACTIONS(354), 2,
      sym_arg,
      anon_sym_COLON,
  [1527] = 1,
    ACTIONS(356), 2,
      sym_arg,
      anon_sym_COLON,
  [1532] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1536] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [1540] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
  [1544] = 1,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
  [1548] = 1,
    ACTIONS(366), 1,
      sym_link_url,
  [1552] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
  [1556] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [1560] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [1564] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [1568] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [1572] = 1,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
  [1576] = 1,
    ACTIONS(380), 1,
      sym_code_content,
  [1580] = 1,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
  [1584] = 1,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
  [1588] = 1,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
  [1592] = 1,
    ACTIONS(388), 1,
      anon_sym_GT,
  [1596] = 1,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
  [1600] = 1,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
  [1604] = 1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
  [1608] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [1612] = 1,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
  [1616] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
  [1620] = 1,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [1624] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
  [1628] = 1,
    ACTIONS(406), 1,
      sym_code_content,
  [1632] = 1,
    ACTIONS(408), 1,
      sym_tag_text,
  [1636] = 1,
    ACTIONS(410), 1,
      sym_tag_text,
  [1640] = 1,
    ACTIONS(412), 1,
      sym_tag_text,
  [1644] = 1,
    ACTIONS(414), 1,
      sym_tag_text,
  [1648] = 1,
    ACTIONS(416), 1,
      anon_sym_LT,
  [1652] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 380,
  [SMALL_STATE(11)] = 436,
  [SMALL_STATE(12)] = 485,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 583,
  [SMALL_STATE(15)] = 632,
  [SMALL_STATE(16)] = 681,
  [SMALL_STATE(17)] = 730,
  [SMALL_STATE(18)] = 779,
  [SMALL_STATE(19)] = 828,
  [SMALL_STATE(20)] = 877,
  [SMALL_STATE(21)] = 926,
  [SMALL_STATE(22)] = 975,
  [SMALL_STATE(23)] = 1024,
  [SMALL_STATE(24)] = 1041,
  [SMALL_STATE(25)] = 1055,
  [SMALL_STATE(26)] = 1069,
  [SMALL_STATE(27)] = 1083,
  [SMALL_STATE(28)] = 1097,
  [SMALL_STATE(29)] = 1111,
  [SMALL_STATE(30)] = 1125,
  [SMALL_STATE(31)] = 1139,
  [SMALL_STATE(32)] = 1153,
  [SMALL_STATE(33)] = 1167,
  [SMALL_STATE(34)] = 1181,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1209,
  [SMALL_STATE(37)] = 1223,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1251,
  [SMALL_STATE(40)] = 1265,
  [SMALL_STATE(41)] = 1279,
  [SMALL_STATE(42)] = 1293,
  [SMALL_STATE(43)] = 1307,
  [SMALL_STATE(44)] = 1321,
  [SMALL_STATE(45)] = 1335,
  [SMALL_STATE(46)] = 1349,
  [SMALL_STATE(47)] = 1363,
  [SMALL_STATE(48)] = 1377,
  [SMALL_STATE(49)] = 1391,
  [SMALL_STATE(50)] = 1405,
  [SMALL_STATE(51)] = 1419,
  [SMALL_STATE(52)] = 1433,
  [SMALL_STATE(53)] = 1438,
  [SMALL_STATE(54)] = 1445,
  [SMALL_STATE(55)] = 1452,
  [SMALL_STATE(56)] = 1457,
  [SMALL_STATE(57)] = 1462,
  [SMALL_STATE(58)] = 1467,
  [SMALL_STATE(59)] = 1472,
  [SMALL_STATE(60)] = 1477,
  [SMALL_STATE(61)] = 1482,
  [SMALL_STATE(62)] = 1487,
  [SMALL_STATE(63)] = 1492,
  [SMALL_STATE(64)] = 1497,
  [SMALL_STATE(65)] = 1502,
  [SMALL_STATE(66)] = 1507,
  [SMALL_STATE(67)] = 1512,
  [SMALL_STATE(68)] = 1517,
  [SMALL_STATE(69)] = 1522,
  [SMALL_STATE(70)] = 1527,
  [SMALL_STATE(71)] = 1532,
  [SMALL_STATE(72)] = 1536,
  [SMALL_STATE(73)] = 1540,
  [SMALL_STATE(74)] = 1544,
  [SMALL_STATE(75)] = 1548,
  [SMALL_STATE(76)] = 1552,
  [SMALL_STATE(77)] = 1556,
  [SMALL_STATE(78)] = 1560,
  [SMALL_STATE(79)] = 1564,
  [SMALL_STATE(80)] = 1568,
  [SMALL_STATE(81)] = 1572,
  [SMALL_STATE(82)] = 1576,
  [SMALL_STATE(83)] = 1580,
  [SMALL_STATE(84)] = 1584,
  [SMALL_STATE(85)] = 1588,
  [SMALL_STATE(86)] = 1592,
  [SMALL_STATE(87)] = 1596,
  [SMALL_STATE(88)] = 1600,
  [SMALL_STATE(89)] = 1604,
  [SMALL_STATE(90)] = 1608,
  [SMALL_STATE(91)] = 1612,
  [SMALL_STATE(92)] = 1616,
  [SMALL_STATE(93)] = 1620,
  [SMALL_STATE(94)] = 1624,
  [SMALL_STATE(95)] = 1628,
  [SMALL_STATE(96)] = 1632,
  [SMALL_STATE(97)] = 1636,
  [SMALL_STATE(98)] = 1640,
  [SMALL_STATE(99)] = 1644,
  [SMALL_STATE(100)] = 1648,
  [SMALL_STATE(101)] = 1652,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(17),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(22),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(82),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(11),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(99),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(96),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(18),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(49),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(50),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_docstring_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(17),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(16),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(22),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(82),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(11),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(99),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(96),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(18),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(49),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2), SHIFT_REPEAT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(13),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(16),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(22),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(82),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(11),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(99),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(96),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(18),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(49),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(50),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(12),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(19),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(95),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(20),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(97),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(98),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(21),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(48),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(47),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(14),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_content, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_para, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_tag, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_tag, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri_tag, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_tag, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri_tag, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexed_tag, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_tag, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_tag, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_tag, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_tag, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_tag, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_tag, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_tag, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_tag, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_tag, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_tag, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_name, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_link, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_literal, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_literal, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_literal, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cvar_literal, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_literal, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning_literal, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_literal, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_literal, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtype_literal, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_literal, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_literal, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_literal, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise_literal, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_precondition_literal, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_organization_literal, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcondition_literal, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_link, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [382] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_epytext_external_scanner_create(void);
void tree_sitter_epytext_external_scanner_destroy(void *);
bool tree_sitter_epytext_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_epytext_external_scanner_serialize(void *, char *);
void tree_sitter_epytext_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epytext(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_epytext_external_scanner_create,
      tree_sitter_epytext_external_scanner_destroy,
      tree_sitter_epytext_external_scanner_scan,
      tree_sitter_epytext_external_scanner_serialize,
      tree_sitter_epytext_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
