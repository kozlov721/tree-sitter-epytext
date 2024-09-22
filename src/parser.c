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
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_arg = 1,
  sym_text = 2,
  anon_sym_COLON = 3,
  sym_attention_literal = 4,
  sym_author_literal = 5,
  sym_bug_literal = 6,
  anon_sym_change = 7,
  anon_sym_changes = 8,
  sym_contact_literal = 9,
  anon_sym_copyright = 10,
  anon_sym_LPARENc_RPAREN = 11,
  anon_sym_cvar = 12,
  anon_sym_cvariable = 13,
  sym_deprecated_literal = 14,
  sym_group_literal = 15,
  sym_invariant_literal = 16,
  anon_sym_ivar = 17,
  anon_sym_ivariable = 18,
  anon_sym_kwarg = 19,
  anon_sym_keyword = 20,
  anon_sym_kwparam = 21,
  sym_license_literal = 22,
  sym_newfield_literal = 23,
  sym_note_literal = 24,
  anon_sym_organization = 25,
  anon_sym_org = 26,
  anon_sym_param = 27,
  anon_sym_parameter = 28,
  anon_sym_arg = 29,
  sym_permission_literal = 30,
  anon_sym_postcondition = 31,
  anon_sym_postcond = 32,
  anon_sym_precondition = 33,
  anon_sym_precond = 34,
  anon_sym_raises = 35,
  anon_sym_raise = 36,
  anon_sym_except = 37,
  anon_sym_exception = 38,
  anon_sym_requires = 39,
  anon_sym_require = 40,
  anon_sym_requirement = 41,
  anon_sym_return = 42,
  anon_sym_returns = 43,
  anon_sym_rtype = 44,
  anon_sym_returntype = 45,
  anon_sym_see = 46,
  anon_sym_seealso = 47,
  sym_since_literal = 48,
  sym_sort_literal = 49,
  sym_status_literal = 50,
  sym_summary_literal = 51,
  sym_todo_literal = 52,
  sym_type_literal = 53,
  anon_sym_var = 54,
  anon_sym_variable = 55,
  sym_version_literal = 56,
  anon_sym_warning = 57,
  anon_sym_warn = 58,
  anon_sym_AT = 59,
  anon_sym_LT = 60,
  anon_sym_GT = 61,
  sym_name = 62,
  sym_target = 63,
  sym_tag_text = 64,
  anon_sym_C_LBRACE = 65,
  anon_sym_RBRACE = 66,
  anon_sym_S_LBRACE = 67,
  anon_sym_G_LBRACE = 68,
  anon_sym_M_LBRACE = 69,
  anon_sym_I_LBRACE = 70,
  anon_sym_B_LBRACE = 71,
  anon_sym_X_LBRACE = 72,
  anon_sym_L_LBRACE = 73,
  anon_sym_U_LBRACE = 74,
  sym_code_content = 75,
  sym_epytext = 76,
  sym_docstring = 77,
  sym_para = 78,
  sym_field = 79,
  sym_description = 80,
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
  sym_named_link = 99,
  sym_primitive_link = 100,
  sym_tag_content = 101,
  sym_code_tag = 102,
  sym_symbol_tag = 103,
  sym_graph_tag = 104,
  sym_math_tag = 105,
  sym_italic_tag = 106,
  sym_bold_tag = 107,
  sym_indexed_tag = 108,
  sym_link_tag = 109,
  sym_uri_tag = 110,
  sym_tag = 111,
  aux_sym_epytext_repeat1 = 112,
  aux_sym_epytext_repeat2 = 113,
  aux_sym_para_repeat1 = 114,
  aux_sym_tag_content_repeat1 = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_arg] = "arg",
  [sym_text] = "text",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_name] = "name",
  [sym_target] = "target",
  [sym_tag_text] = "tag_text",
  [anon_sym_C_LBRACE] = "C{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_S_LBRACE] = "S{",
  [anon_sym_G_LBRACE] = "G{",
  [anon_sym_M_LBRACE] = "M{",
  [anon_sym_I_LBRACE] = "I{",
  [anon_sym_B_LBRACE] = "B{",
  [anon_sym_X_LBRACE] = "X{",
  [anon_sym_L_LBRACE] = "L{",
  [anon_sym_U_LBRACE] = "U{",
  [sym_code_content] = "code_content",
  [sym_epytext] = "epytext",
  [sym_docstring] = "docstring",
  [sym_para] = "para",
  [sym_field] = "field",
  [sym_description] = "description",
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
  [sym_named_link] = "named_link",
  [sym_primitive_link] = "primitive_link",
  [sym_tag_content] = "tag_content",
  [sym_code_tag] = "code_tag",
  [sym_symbol_tag] = "symbol_tag",
  [sym_graph_tag] = "graph_tag",
  [sym_math_tag] = "math_tag",
  [sym_italic_tag] = "italic_tag",
  [sym_bold_tag] = "bold_tag",
  [sym_indexed_tag] = "indexed_tag",
  [sym_link_tag] = "link_tag",
  [sym_uri_tag] = "uri_tag",
  [sym_tag] = "tag",
  [aux_sym_epytext_repeat1] = "epytext_repeat1",
  [aux_sym_epytext_repeat2] = "epytext_repeat2",
  [aux_sym_para_repeat1] = "para_repeat1",
  [aux_sym_tag_content_repeat1] = "tag_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_arg] = sym_arg,
  [sym_text] = sym_text,
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_name] = sym_name,
  [sym_target] = sym_target,
  [sym_tag_text] = sym_tag_text,
  [anon_sym_C_LBRACE] = anon_sym_C_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_S_LBRACE] = anon_sym_S_LBRACE,
  [anon_sym_G_LBRACE] = anon_sym_G_LBRACE,
  [anon_sym_M_LBRACE] = anon_sym_M_LBRACE,
  [anon_sym_I_LBRACE] = anon_sym_I_LBRACE,
  [anon_sym_B_LBRACE] = anon_sym_B_LBRACE,
  [anon_sym_X_LBRACE] = anon_sym_X_LBRACE,
  [anon_sym_L_LBRACE] = anon_sym_L_LBRACE,
  [anon_sym_U_LBRACE] = anon_sym_U_LBRACE,
  [sym_code_content] = sym_code_content,
  [sym_epytext] = sym_epytext,
  [sym_docstring] = sym_docstring,
  [sym_para] = sym_para,
  [sym_field] = sym_field,
  [sym_description] = sym_description,
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
  [sym_named_link] = sym_named_link,
  [sym_primitive_link] = sym_primitive_link,
  [sym_tag_content] = sym_tag_content,
  [sym_code_tag] = sym_code_tag,
  [sym_symbol_tag] = sym_symbol_tag,
  [sym_graph_tag] = sym_graph_tag,
  [sym_math_tag] = sym_math_tag,
  [sym_italic_tag] = sym_italic_tag,
  [sym_bold_tag] = sym_bold_tag,
  [sym_indexed_tag] = sym_indexed_tag,
  [sym_link_tag] = sym_link_tag,
  [sym_uri_tag] = sym_uri_tag,
  [sym_tag] = sym_tag,
  [aux_sym_epytext_repeat1] = aux_sym_epytext_repeat1,
  [aux_sym_epytext_repeat2] = aux_sym_epytext_repeat2,
  [aux_sym_para_repeat1] = aux_sym_para_repeat1,
  [aux_sym_tag_content_repeat1] = aux_sym_tag_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_C_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_M_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B_LBRACE] = {
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
  [sym_description] = {
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
  [sym_named_link] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_link] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code_tag] = {
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
  [sym_math_tag] = {
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
  [aux_sym_epytext_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_para_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 14,
  [18] = 10,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 21,
  [33] = 30,
  [34] = 29,
  [35] = 27,
  [36] = 26,
  [37] = 25,
  [38] = 24,
  [39] = 23,
  [40] = 22,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 50,
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 70,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 81,
  [88] = 80,
  [89] = 77,
  [90] = 74,
  [91] = 73,
  [92] = 92,
  [93] = 93,
  [94] = 86,
  [95] = 85,
  [96] = 93,
  [97] = 92,
  [98] = 84,
  [99] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(232);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '<') ADVANCE(293);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == '@') ADVANCE(292);
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
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(244);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(303);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(305);
      if (lookahead == 'L') ADVANCE(306);
      if (lookahead == 'M') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(308);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'X') ADVANCE(310);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(311);
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
      if (lookahead == 'c') ADVANCE(1);
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
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(247);
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
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(278);
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
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(290);
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
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(254);
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
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(264);
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
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(280);
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
      if (lookahead == 'p') ADVANCE(248);
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
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(261);
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
      if (lookahead == 's') ADVANCE(283);
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
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(274);
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
      if (lookahead == 'y') ADVANCE(284);
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
      if (lookahead == '{') ADVANCE(318);
      END_STATE();
    case 211:
      if (lookahead == '{') ADVANCE(318);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 212:
      if (lookahead == '{') ADVANCE(312);
      END_STATE();
    case 213:
      if (lookahead == '{') ADVANCE(312);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 214:
      if (lookahead == '{') ADVANCE(315);
      END_STATE();
    case 215:
      if (lookahead == '{') ADVANCE(315);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 216:
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    case 217:
      if (lookahead == '{') ADVANCE(317);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 218:
      if (lookahead == '{') ADVANCE(320);
      END_STATE();
    case 219:
      if (lookahead == '{') ADVANCE(320);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 220:
      if (lookahead == '{') ADVANCE(316);
      END_STATE();
    case 221:
      if (lookahead == '{') ADVANCE(316);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 222:
      if (lookahead == '{') ADVANCE(314);
      END_STATE();
    case 223:
      if (lookahead == '{') ADVANCE(314);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 224:
      if (lookahead == '{') ADVANCE(321);
      END_STATE();
    case 225:
      if (lookahead == '{') ADVANCE(321);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 226:
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 227:
      if (lookahead == '{') ADVANCE(319);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(228);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(300);
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(235);
      END_STATE();
    case 231:
      if (eof) ADVANCE(232);
      if (lookahead == '@') ADVANCE(292);
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
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_arg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
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
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_attention_literal);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_author_literal);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_bug_literal);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_change);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_changes);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_contact_literal);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LPARENc_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_cvar);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_cvariable);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_deprecated_literal);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_group_literal);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_invariant_literal);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ivar);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ivariable);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_kwarg);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_keyword);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_kwparam);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_license_literal);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_newfield_literal);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_note_literal);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_organization);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_permission_literal);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_postcondition);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_postcond);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_precondition);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_precond);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_raise);
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_requirement);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_rtype);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_returntype);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_see);
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_seealso);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_since_literal);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_sort_literal);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_status_literal);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_summary_literal);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_todo_literal);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_type_literal);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_version_literal);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_warn);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(228);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_target);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_target);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_target);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_target);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == 'B') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(303);
      if (lookahead == 'G') ADVANCE(304);
      if (lookahead == 'I') ADVANCE(305);
      if (lookahead == 'L') ADVANCE(306);
      if (lookahead == 'M') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(308);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead == 'X') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_S_LBRACE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_G_LBRACE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_M_LBRACE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_I_LBRACE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_X_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_L_LBRACE);
      END_STATE();
    case 321:
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
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 231},
  [21] = {.lex_state = 231},
  [22] = {.lex_state = 231},
  [23] = {.lex_state = 231},
  [24] = {.lex_state = 231},
  [25] = {.lex_state = 231},
  [26] = {.lex_state = 231},
  [27] = {.lex_state = 231},
  [28] = {.lex_state = 231},
  [29] = {.lex_state = 231},
  [30] = {.lex_state = 231},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 229},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
};

enum {
  ts_external_token_code_content = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_content] = sym_code_content,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
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
    [anon_sym_C_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_S_LBRACE] = ACTIONS(1),
    [anon_sym_G_LBRACE] = ACTIONS(1),
    [anon_sym_M_LBRACE] = ACTIONS(1),
    [anon_sym_I_LBRACE] = ACTIONS(1),
    [anon_sym_B_LBRACE] = ACTIONS(1),
    [anon_sym_X_LBRACE] = ACTIONS(1),
    [anon_sym_L_LBRACE] = ACTIONS(1),
    [anon_sym_U_LBRACE] = ACTIONS(1),
    [sym_code_content] = ACTIONS(1),
  },
  [1] = {
    [sym_epytext] = STATE(75),
    [sym_docstring] = STATE(3),
    [sym_para] = STATE(20),
    [sym_field] = STATE(45),
    [sym_field_literal] = STATE(52),
    [sym_code_tag] = STATE(21),
    [sym_symbol_tag] = STATE(21),
    [sym_graph_tag] = STATE(21),
    [sym_math_tag] = STATE(21),
    [sym_italic_tag] = STATE(21),
    [sym_bold_tag] = STATE(21),
    [sym_indexed_tag] = STATE(21),
    [sym_link_tag] = STATE(21),
    [sym_uri_tag] = STATE(21),
    [sym_tag] = STATE(9),
    [aux_sym_epytext_repeat1] = STATE(3),
    [aux_sym_epytext_repeat2] = STATE(45),
    [aux_sym_para_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_C_LBRACE] = ACTIONS(9),
    [anon_sym_S_LBRACE] = ACTIONS(11),
    [anon_sym_G_LBRACE] = ACTIONS(13),
    [anon_sym_M_LBRACE] = ACTIONS(15),
    [anon_sym_I_LBRACE] = ACTIONS(17),
    [anon_sym_B_LBRACE] = ACTIONS(19),
    [anon_sym_X_LBRACE] = ACTIONS(21),
    [anon_sym_L_LBRACE] = ACTIONS(23),
    [anon_sym_U_LBRACE] = ACTIONS(25),
  },
  [2] = {
    [sym_change_literal] = STATE(65),
    [sym_copyright_literal] = STATE(65),
    [sym_cvar_literal] = STATE(65),
    [sym_ivar_literal] = STATE(65),
    [sym_keyword_literal] = STATE(65),
    [sym_organization_literal] = STATE(65),
    [sym_param_literal] = STATE(65),
    [sym_postcondition_literal] = STATE(65),
    [sym_precondition_literal] = STATE(65),
    [sym_raise_literal] = STATE(65),
    [sym_requires_literal] = STATE(65),
    [sym_return_literal] = STATE(65),
    [sym_rtype_literal] = STATE(65),
    [sym_see_literal] = STATE(65),
    [sym_var_literal] = STATE(65),
    [sym_warning_literal] = STATE(65),
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
  [0] = 18,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_S_LBRACE,
    ACTIONS(13), 1,
      anon_sym_G_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_I_LBRACE,
    ACTIONS(19), 1,
      anon_sym_B_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_para,
    STATE(52), 1,
      sym_field_literal,
    STATE(4), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(41), 2,
      sym_field,
      aux_sym_epytext_repeat2,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [66] = 16,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_text,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      anon_sym_C_LBRACE,
    ACTIONS(99), 1,
      anon_sym_S_LBRACE,
    ACTIONS(102), 1,
      anon_sym_G_LBRACE,
    ACTIONS(105), 1,
      anon_sym_M_LBRACE,
    ACTIONS(108), 1,
      anon_sym_I_LBRACE,
    ACTIONS(111), 1,
      anon_sym_B_LBRACE,
    ACTIONS(114), 1,
      anon_sym_X_LBRACE,
    ACTIONS(117), 1,
      anon_sym_L_LBRACE,
    ACTIONS(120), 1,
      anon_sym_U_LBRACE,
    STATE(20), 1,
      sym_para,
    STATE(4), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [125] = 16,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_S_LBRACE,
    ACTIONS(13), 1,
      anon_sym_G_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_I_LBRACE,
    ACTIONS(19), 1,
      anon_sym_B_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym_para,
    STATE(4), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [184] = 15,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_S_LBRACE,
    ACTIONS(13), 1,
      anon_sym_G_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_I_LBRACE,
    ACTIONS(19), 1,
      anon_sym_B_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    STATE(20), 1,
      sym_para,
    STATE(63), 1,
      sym_description,
    STATE(5), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [240] = 15,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_S_LBRACE,
    ACTIONS(13), 1,
      anon_sym_G_LBRACE,
    ACTIONS(15), 1,
      anon_sym_M_LBRACE,
    ACTIONS(17), 1,
      anon_sym_I_LBRACE,
    ACTIONS(19), 1,
      anon_sym_B_LBRACE,
    ACTIONS(21), 1,
      anon_sym_X_LBRACE,
    ACTIONS(23), 1,
      anon_sym_L_LBRACE,
    ACTIONS(25), 1,
      anon_sym_U_LBRACE,
    STATE(20), 1,
      sym_para,
    STATE(67), 1,
      sym_description,
    STATE(5), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [296] = 14,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_C_LBRACE,
    ACTIONS(137), 1,
      anon_sym_S_LBRACE,
    ACTIONS(140), 1,
      anon_sym_G_LBRACE,
    ACTIONS(143), 1,
      anon_sym_M_LBRACE,
    ACTIONS(146), 1,
      anon_sym_I_LBRACE,
    ACTIONS(149), 1,
      anon_sym_B_LBRACE,
    ACTIONS(152), 1,
      anon_sym_X_LBRACE,
    ACTIONS(155), 1,
      anon_sym_L_LBRACE,
    ACTIONS(158), 1,
      anon_sym_U_LBRACE,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [348] = 4,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(21), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
    ACTIONS(163), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [380] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(94), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [429] = 13,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    ACTIONS(185), 1,
      sym_tag_text,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [478] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(81), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [527] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(80), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [576] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(85), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [625] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(88), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [674] = 13,
    ACTIONS(189), 1,
      sym_tag_text,
    ACTIONS(192), 1,
      anon_sym_C_LBRACE,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      anon_sym_S_LBRACE,
    ACTIONS(200), 1,
      anon_sym_G_LBRACE,
    ACTIONS(203), 1,
      anon_sym_M_LBRACE,
    ACTIONS(206), 1,
      anon_sym_I_LBRACE,
    ACTIONS(209), 1,
      anon_sym_B_LBRACE,
    ACTIONS(212), 1,
      anon_sym_X_LBRACE,
    ACTIONS(215), 1,
      anon_sym_L_LBRACE,
    ACTIONS(218), 1,
      anon_sym_U_LBRACE,
    STATE(16), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [723] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(95), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [772] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(86), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [821] = 13,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_C_LBRACE,
    ACTIONS(169), 1,
      anon_sym_S_LBRACE,
    ACTIONS(171), 1,
      anon_sym_G_LBRACE,
    ACTIONS(173), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(177), 1,
      anon_sym_B_LBRACE,
    ACTIONS(179), 1,
      anon_sym_X_LBRACE,
    ACTIONS(181), 1,
      anon_sym_L_LBRACE,
    ACTIONS(183), 1,
      anon_sym_U_LBRACE,
    STATE(87), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 9,
      sym_code_tag,
      sym_symbol_tag,
      sym_graph_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [870] = 2,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(223), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [887] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(227), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [904] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(231), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [921] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(235), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [938] = 2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(239), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [955] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(243), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [972] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(247), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [989] = 2,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(251), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1006] = 2,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(255), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1023] = 2,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(259), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1040] = 2,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(263), 10,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1057] = 1,
    ACTIONS(255), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1071] = 1,
    ACTIONS(227), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1085] = 1,
    ACTIONS(263), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1099] = 1,
    ACTIONS(259), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1113] = 1,
    ACTIONS(251), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1127] = 1,
    ACTIONS(247), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1141] = 1,
    ACTIONS(243), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1155] = 1,
    ACTIONS(239), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1169] = 1,
    ACTIONS(235), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1183] = 1,
    ACTIONS(231), 11,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_S_LBRACE,
      anon_sym_G_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1197] = 4,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_field_literal,
    STATE(46), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1211] = 4,
    ACTIONS(269), 1,
      sym_name,
    ACTIONS(271), 1,
      sym_target,
    STATE(77), 1,
      sym_link,
    STATE(76), 2,
      sym_named_link,
      sym_primitive_link,
  [1225] = 4,
    ACTIONS(269), 1,
      sym_name,
    ACTIONS(271), 1,
      sym_target,
    STATE(89), 1,
      sym_link,
    STATE(76), 2,
      sym_named_link,
      sym_primitive_link,
  [1239] = 4,
    ACTIONS(269), 1,
      sym_name,
    ACTIONS(271), 1,
      sym_target,
    STATE(90), 1,
      sym_link,
    STATE(76), 2,
      sym_named_link,
      sym_primitive_link,
  [1253] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_field_literal,
    STATE(46), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1267] = 4,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym_field_literal,
    STATE(46), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1281] = 4,
    ACTIONS(269), 1,
      sym_name,
    ACTIONS(271), 1,
      sym_target,
    STATE(74), 1,
      sym_link,
    STATE(76), 2,
      sym_named_link,
      sym_primitive_link,
  [1295] = 1,
    ACTIONS(278), 2,
      sym_arg,
      anon_sym_COLON,
  [1300] = 1,
    ACTIONS(280), 2,
      sym_arg,
      anon_sym_COLON,
  [1305] = 1,
    ACTIONS(282), 2,
      sym_arg,
      anon_sym_COLON,
  [1310] = 1,
    ACTIONS(284), 2,
      sym_arg,
      anon_sym_COLON,
  [1315] = 2,
    ACTIONS(286), 1,
      sym_arg,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [1322] = 1,
    ACTIONS(290), 2,
      sym_arg,
      anon_sym_COLON,
  [1327] = 1,
    ACTIONS(292), 2,
      sym_arg,
      anon_sym_COLON,
  [1332] = 1,
    ACTIONS(294), 2,
      sym_arg,
      anon_sym_COLON,
  [1337] = 1,
    ACTIONS(296), 2,
      sym_arg,
      anon_sym_COLON,
  [1342] = 1,
    ACTIONS(298), 2,
      sym_arg,
      anon_sym_COLON,
  [1347] = 1,
    ACTIONS(300), 2,
      sym_arg,
      anon_sym_COLON,
  [1352] = 1,
    ACTIONS(302), 2,
      sym_arg,
      anon_sym_COLON,
  [1357] = 1,
    ACTIONS(304), 2,
      sym_arg,
      anon_sym_COLON,
  [1362] = 1,
    ACTIONS(306), 2,
      sym_arg,
      anon_sym_COLON,
  [1367] = 1,
    ACTIONS(308), 2,
      sym_arg,
      anon_sym_COLON,
  [1372] = 1,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [1377] = 1,
    ACTIONS(312), 2,
      sym_arg,
      anon_sym_COLON,
  [1382] = 1,
    ACTIONS(314), 2,
      sym_arg,
      anon_sym_COLON,
  [1387] = 1,
    ACTIONS(316), 2,
      sym_arg,
      anon_sym_COLON,
  [1392] = 1,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [1397] = 1,
    ACTIONS(320), 1,
      anon_sym_COLON,
  [1401] = 1,
    ACTIONS(322), 1,
      anon_sym_GT,
  [1405] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [1409] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1413] = 1,
    ACTIONS(328), 1,
      sym_target,
  [1417] = 1,
    ACTIONS(330), 1,
      sym_code_content,
  [1421] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1425] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [1429] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
  [1433] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
  [1437] = 1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
  [1441] = 1,
    ACTIONS(342), 1,
      anon_sym_LT,
  [1445] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
  [1449] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [1453] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
  [1457] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [1461] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
  [1465] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [1469] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1473] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1477] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [1481] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
  [1485] = 1,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
  [1489] = 1,
    ACTIONS(366), 1,
      sym_code_content,
  [1493] = 1,
    ACTIONS(368), 1,
      sym_tag_text,
  [1497] = 1,
    ACTIONS(370), 1,
      sym_tag_text,
  [1501] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [1505] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [1509] = 1,
    ACTIONS(376), 1,
      sym_tag_text,
  [1513] = 1,
    ACTIONS(378), 1,
      sym_tag_text,
  [1517] = 1,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
  [1521] = 1,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 296,
  [SMALL_STATE(9)] = 348,
  [SMALL_STATE(10)] = 380,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 527,
  [SMALL_STATE(14)] = 576,
  [SMALL_STATE(15)] = 625,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 723,
  [SMALL_STATE(18)] = 772,
  [SMALL_STATE(19)] = 821,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 887,
  [SMALL_STATE(22)] = 904,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 938,
  [SMALL_STATE(25)] = 955,
  [SMALL_STATE(26)] = 972,
  [SMALL_STATE(27)] = 989,
  [SMALL_STATE(28)] = 1006,
  [SMALL_STATE(29)] = 1023,
  [SMALL_STATE(30)] = 1040,
  [SMALL_STATE(31)] = 1057,
  [SMALL_STATE(32)] = 1071,
  [SMALL_STATE(33)] = 1085,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1113,
  [SMALL_STATE(36)] = 1127,
  [SMALL_STATE(37)] = 1141,
  [SMALL_STATE(38)] = 1155,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1183,
  [SMALL_STATE(41)] = 1197,
  [SMALL_STATE(42)] = 1211,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1239,
  [SMALL_STATE(45)] = 1253,
  [SMALL_STATE(46)] = 1267,
  [SMALL_STATE(47)] = 1281,
  [SMALL_STATE(48)] = 1295,
  [SMALL_STATE(49)] = 1300,
  [SMALL_STATE(50)] = 1305,
  [SMALL_STATE(51)] = 1310,
  [SMALL_STATE(52)] = 1315,
  [SMALL_STATE(53)] = 1322,
  [SMALL_STATE(54)] = 1327,
  [SMALL_STATE(55)] = 1332,
  [SMALL_STATE(56)] = 1337,
  [SMALL_STATE(57)] = 1342,
  [SMALL_STATE(58)] = 1347,
  [SMALL_STATE(59)] = 1352,
  [SMALL_STATE(60)] = 1357,
  [SMALL_STATE(61)] = 1362,
  [SMALL_STATE(62)] = 1367,
  [SMALL_STATE(63)] = 1372,
  [SMALL_STATE(64)] = 1377,
  [SMALL_STATE(65)] = 1382,
  [SMALL_STATE(66)] = 1387,
  [SMALL_STATE(67)] = 1392,
  [SMALL_STATE(68)] = 1397,
  [SMALL_STATE(69)] = 1401,
  [SMALL_STATE(70)] = 1405,
  [SMALL_STATE(71)] = 1409,
  [SMALL_STATE(72)] = 1413,
  [SMALL_STATE(73)] = 1417,
  [SMALL_STATE(74)] = 1421,
  [SMALL_STATE(75)] = 1425,
  [SMALL_STATE(76)] = 1429,
  [SMALL_STATE(77)] = 1433,
  [SMALL_STATE(78)] = 1437,
  [SMALL_STATE(79)] = 1441,
  [SMALL_STATE(80)] = 1445,
  [SMALL_STATE(81)] = 1449,
  [SMALL_STATE(82)] = 1453,
  [SMALL_STATE(83)] = 1457,
  [SMALL_STATE(84)] = 1461,
  [SMALL_STATE(85)] = 1465,
  [SMALL_STATE(86)] = 1469,
  [SMALL_STATE(87)] = 1473,
  [SMALL_STATE(88)] = 1477,
  [SMALL_STATE(89)] = 1481,
  [SMALL_STATE(90)] = 1485,
  [SMALL_STATE(91)] = 1489,
  [SMALL_STATE(92)] = 1493,
  [SMALL_STATE(93)] = 1497,
  [SMALL_STATE(94)] = 1501,
  [SMALL_STATE(95)] = 1505,
  [SMALL_STATE(96)] = 1509,
  [SMALL_STATE(97)] = 1513,
  [SMALL_STATE(98)] = 1517,
  [SMALL_STATE(99)] = 1521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(73),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(96),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(17),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(12),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(13),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(42),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(47),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_para_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(8),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(73),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(97),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(96),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(17),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(10),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(12),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(13),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(42),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(47),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_para, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_content, 1),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(16),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(91),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(92),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(93),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(14),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(18),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(19),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(15),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(43),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(44),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri_tag, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri_tag, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_tag, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexed_tag, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_tag, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_tag, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_tag, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_tag, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_tag, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_tag, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph_tag, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph_tag, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_tag, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_tag, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_tag, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_tag, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat2, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_epytext_repeat2, 2), SHIFT_REPEAT(2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_literal, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_literal, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtype_literal, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_literal, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_literal, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise_literal, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_precondition_literal, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcondition_literal, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_literal, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_organization_literal, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_literal, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_literal, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cvar_literal, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright_literal, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_literal, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_literal, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_link, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_link, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
