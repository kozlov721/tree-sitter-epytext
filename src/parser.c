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
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_M_LBRACE = 67,
  anon_sym_I_LBRACE = 68,
  anon_sym_B_LBRACE = 69,
  anon_sym_X_LBRACE = 70,
  anon_sym_L_LBRACE = 71,
  anon_sym_U_LBRACE = 72,
  sym_epytext = 73,
  sym_docstring = 74,
  sym_para = 75,
  sym_field = 76,
  sym_description = 77,
  sym_change_literal = 78,
  sym_copyright_literal = 79,
  sym_cvar_literal = 80,
  sym_ivar_literal = 81,
  sym_keyword_literal = 82,
  sym_organization_literal = 83,
  sym_param_literal = 84,
  sym_postcondition_literal = 85,
  sym_precondition_literal = 86,
  sym_raise_literal = 87,
  sym_requires_literal = 88,
  sym_return_literal = 89,
  sym_rtype_literal = 90,
  sym_see_literal = 91,
  sym_var_literal = 92,
  sym_warning_literal = 93,
  sym_field_literal = 94,
  sym_link = 95,
  sym_named_link = 96,
  sym_primitive_link = 97,
  sym_tag_content = 98,
  sym_code_tag = 99,
  sym_math_tag = 100,
  sym_italic_tag = 101,
  sym_bold_tag = 102,
  sym_indexed_tag = 103,
  sym_link_tag = 104,
  sym_uri_tag = 105,
  sym_tag = 106,
  aux_sym_epytext_repeat1 = 107,
  aux_sym_epytext_repeat2 = 108,
  aux_sym_para_repeat1 = 109,
  aux_sym_tag_content_repeat1 = 110,
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
  [anon_sym_M_LBRACE] = "M{",
  [anon_sym_I_LBRACE] = "I{",
  [anon_sym_B_LBRACE] = "B{",
  [anon_sym_X_LBRACE] = "X{",
  [anon_sym_L_LBRACE] = "L{",
  [anon_sym_U_LBRACE] = "U{",
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
  [anon_sym_M_LBRACE] = anon_sym_M_LBRACE,
  [anon_sym_I_LBRACE] = anon_sym_I_LBRACE,
  [anon_sym_B_LBRACE] = anon_sym_B_LBRACE,
  [anon_sym_X_LBRACE] = anon_sym_X_LBRACE,
  [anon_sym_L_LBRACE] = anon_sym_L_LBRACE,
  [anon_sym_U_LBRACE] = anon_sym_U_LBRACE,
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
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 15,
  [19] = 10,
  [20] = 16,
  [21] = 13,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 22,
  [32] = 30,
  [33] = 24,
  [34] = 26,
  [35] = 29,
  [36] = 23,
  [37] = 27,
  [38] = 28,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 42,
  [46] = 46,
  [47] = 47,
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
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 70,
  [76] = 71,
  [77] = 77,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 73,
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 80,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '>') ADVANCE(289);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'B') ADVANCE(210);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'I') ADVANCE(214);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'X') ADVANCE(222);
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
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(290);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(297);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'X') ADVANCE(302);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(303);
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
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(242);
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
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(273);
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
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(285);
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
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(249);
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
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(259);
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
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(275);
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
      if (lookahead == 'p') ADVANCE(243);
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
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(256);
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
      if (lookahead == 's') ADVANCE(278);
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
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(269);
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
      if (lookahead == 'y') ADVANCE(279);
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
      if (lookahead == '{') ADVANCE(308);
      END_STATE();
    case 211:
      if (lookahead == '{') ADVANCE(308);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 212:
      if (lookahead == '{') ADVANCE(304);
      END_STATE();
    case 213:
      if (lookahead == '{') ADVANCE(304);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 214:
      if (lookahead == '{') ADVANCE(307);
      END_STATE();
    case 215:
      if (lookahead == '{') ADVANCE(307);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 216:
      if (lookahead == '{') ADVANCE(310);
      END_STATE();
    case 217:
      if (lookahead == '{') ADVANCE(310);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 218:
      if (lookahead == '{') ADVANCE(306);
      END_STATE();
    case 219:
      if (lookahead == '{') ADVANCE(306);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == '{') ADVANCE(311);
      END_STATE();
    case 221:
      if (lookahead == '{') ADVANCE(311);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 222:
      if (lookahead == '{') ADVANCE(309);
      END_STATE();
    case 223:
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(294);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(230);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == 'X') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_arg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == 'X') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_attention_literal);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_author_literal);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_bug_literal);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_change);
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_changes);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_contact_literal);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LPARENc_RPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_cvar);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_cvariable);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_deprecated_literal);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_group_literal);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_invariant_literal);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ivar);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ivariable);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_kwarg);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_keyword);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_kwparam);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_license_literal);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_newfield_literal);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_note_literal);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_organization);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_permission_literal);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_postcondition);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_postcond);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_precondition);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_precond);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_raise);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_requirement);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_rtype);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_returntype);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_see);
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_seealso);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_since_literal);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_sort_literal);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_status_literal);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_summary_literal);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_todo_literal);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_type_literal);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_version_literal);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_warn);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_target);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_target);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == 'B') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(297);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(300);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'X') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_M_LBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_I_LBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_X_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_L_LBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_U_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 226},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 226},
  [4] = {.lex_state = 226},
  [5] = {.lex_state = 226},
  [6] = {.lex_state = 226},
  [7] = {.lex_state = 226},
  [8] = {.lex_state = 226},
  [9] = {.lex_state = 226},
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
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 226},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 226},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 226},
  [28] = {.lex_state = 226},
  [29] = {.lex_state = 226},
  [30] = {.lex_state = 226},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
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
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 224},
  [73] = {.lex_state = 0},
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
    [anon_sym_M_LBRACE] = ACTIONS(1),
    [anon_sym_I_LBRACE] = ACTIONS(1),
    [anon_sym_B_LBRACE] = ACTIONS(1),
    [anon_sym_X_LBRACE] = ACTIONS(1),
    [anon_sym_L_LBRACE] = ACTIONS(1),
    [anon_sym_U_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_epytext] = STATE(88),
    [sym_docstring] = STATE(3),
    [sym_para] = STATE(25),
    [sym_field] = STATE(39),
    [sym_field_literal] = STATE(48),
    [sym_code_tag] = STATE(30),
    [sym_math_tag] = STATE(30),
    [sym_italic_tag] = STATE(30),
    [sym_bold_tag] = STATE(30),
    [sym_indexed_tag] = STATE(30),
    [sym_link_tag] = STATE(30),
    [sym_uri_tag] = STATE(30),
    [sym_tag] = STATE(8),
    [aux_sym_epytext_repeat1] = STATE(3),
    [aux_sym_epytext_repeat2] = STATE(39),
    [aux_sym_para_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_C_LBRACE] = ACTIONS(9),
    [anon_sym_M_LBRACE] = ACTIONS(11),
    [anon_sym_I_LBRACE] = ACTIONS(13),
    [anon_sym_B_LBRACE] = ACTIONS(15),
    [anon_sym_X_LBRACE] = ACTIONS(17),
    [anon_sym_L_LBRACE] = ACTIONS(19),
    [anon_sym_U_LBRACE] = ACTIONS(21),
  },
  [2] = {
    [sym_change_literal] = STATE(49),
    [sym_copyright_literal] = STATE(49),
    [sym_cvar_literal] = STATE(49),
    [sym_ivar_literal] = STATE(49),
    [sym_keyword_literal] = STATE(49),
    [sym_organization_literal] = STATE(49),
    [sym_param_literal] = STATE(49),
    [sym_postcondition_literal] = STATE(49),
    [sym_precondition_literal] = STATE(49),
    [sym_raise_literal] = STATE(49),
    [sym_requires_literal] = STATE(49),
    [sym_return_literal] = STATE(49),
    [sym_rtype_literal] = STATE(49),
    [sym_see_literal] = STATE(49),
    [sym_var_literal] = STATE(49),
    [sym_warning_literal] = STATE(49),
    [sym_attention_literal] = ACTIONS(23),
    [sym_author_literal] = ACTIONS(23),
    [sym_bug_literal] = ACTIONS(23),
    [anon_sym_change] = ACTIONS(25),
    [anon_sym_changes] = ACTIONS(27),
    [sym_contact_literal] = ACTIONS(23),
    [anon_sym_copyright] = ACTIONS(29),
    [anon_sym_LPARENc_RPAREN] = ACTIONS(29),
    [anon_sym_cvar] = ACTIONS(31),
    [anon_sym_cvariable] = ACTIONS(33),
    [sym_deprecated_literal] = ACTIONS(23),
    [sym_group_literal] = ACTIONS(23),
    [sym_invariant_literal] = ACTIONS(23),
    [anon_sym_ivar] = ACTIONS(35),
    [anon_sym_ivariable] = ACTIONS(37),
    [anon_sym_kwarg] = ACTIONS(39),
    [anon_sym_keyword] = ACTIONS(39),
    [anon_sym_kwparam] = ACTIONS(39),
    [sym_license_literal] = ACTIONS(23),
    [sym_newfield_literal] = ACTIONS(23),
    [sym_note_literal] = ACTIONS(23),
    [anon_sym_organization] = ACTIONS(41),
    [anon_sym_org] = ACTIONS(43),
    [anon_sym_param] = ACTIONS(45),
    [anon_sym_parameter] = ACTIONS(47),
    [anon_sym_arg] = ACTIONS(47),
    [sym_permission_literal] = ACTIONS(23),
    [anon_sym_postcondition] = ACTIONS(49),
    [anon_sym_postcond] = ACTIONS(51),
    [anon_sym_precondition] = ACTIONS(53),
    [anon_sym_precond] = ACTIONS(55),
    [anon_sym_raises] = ACTIONS(57),
    [anon_sym_raise] = ACTIONS(59),
    [anon_sym_except] = ACTIONS(59),
    [anon_sym_exception] = ACTIONS(57),
    [anon_sym_requires] = ACTIONS(61),
    [anon_sym_require] = ACTIONS(63),
    [anon_sym_requirement] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_returns] = ACTIONS(67),
    [anon_sym_rtype] = ACTIONS(69),
    [anon_sym_returntype] = ACTIONS(69),
    [anon_sym_see] = ACTIONS(71),
    [anon_sym_seealso] = ACTIONS(73),
    [sym_since_literal] = ACTIONS(23),
    [sym_sort_literal] = ACTIONS(23),
    [sym_status_literal] = ACTIONS(23),
    [sym_summary_literal] = ACTIONS(23),
    [sym_todo_literal] = ACTIONS(23),
    [sym_type_literal] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(75),
    [anon_sym_variable] = ACTIONS(77),
    [sym_version_literal] = ACTIONS(23),
    [anon_sym_warning] = ACTIONS(79),
    [anon_sym_warn] = ACTIONS(81),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_M_LBRACE,
    ACTIONS(13), 1,
      anon_sym_I_LBRACE,
    ACTIONS(15), 1,
      anon_sym_B_LBRACE,
    ACTIONS(17), 1,
      anon_sym_X_LBRACE,
    ACTIONS(19), 1,
      anon_sym_L_LBRACE,
    ACTIONS(21), 1,
      anon_sym_U_LBRACE,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_para,
    STATE(48), 1,
      sym_field_literal,
    STATE(4), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(44), 2,
      sym_field,
      aux_sym_epytext_repeat2,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [58] = 14,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_text,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      anon_sym_C_LBRACE,
    ACTIONS(95), 1,
      anon_sym_M_LBRACE,
    ACTIONS(98), 1,
      anon_sym_I_LBRACE,
    ACTIONS(101), 1,
      anon_sym_B_LBRACE,
    ACTIONS(104), 1,
      anon_sym_X_LBRACE,
    ACTIONS(107), 1,
      anon_sym_L_LBRACE,
    ACTIONS(110), 1,
      anon_sym_U_LBRACE,
    STATE(25), 1,
      sym_para,
    STATE(4), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [109] = 14,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_M_LBRACE,
    ACTIONS(13), 1,
      anon_sym_I_LBRACE,
    ACTIONS(15), 1,
      anon_sym_B_LBRACE,
    ACTIONS(17), 1,
      anon_sym_X_LBRACE,
    ACTIONS(19), 1,
      anon_sym_L_LBRACE,
    ACTIONS(21), 1,
      anon_sym_U_LBRACE,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym_para,
    STATE(4), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [160] = 13,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_M_LBRACE,
    ACTIONS(13), 1,
      anon_sym_I_LBRACE,
    ACTIONS(15), 1,
      anon_sym_B_LBRACE,
    ACTIONS(17), 1,
      anon_sym_X_LBRACE,
    ACTIONS(19), 1,
      anon_sym_L_LBRACE,
    ACTIONS(21), 1,
      anon_sym_U_LBRACE,
    STATE(25), 1,
      sym_para,
    STATE(46), 1,
      sym_description,
    STATE(5), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [208] = 13,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(9), 1,
      anon_sym_C_LBRACE,
    ACTIONS(11), 1,
      anon_sym_M_LBRACE,
    ACTIONS(13), 1,
      anon_sym_I_LBRACE,
    ACTIONS(15), 1,
      anon_sym_B_LBRACE,
    ACTIONS(17), 1,
      anon_sym_X_LBRACE,
    ACTIONS(19), 1,
      anon_sym_L_LBRACE,
    ACTIONS(21), 1,
      anon_sym_U_LBRACE,
    STATE(25), 1,
      sym_para,
    STATE(62), 1,
      sym_description,
    STATE(5), 2,
      sym_docstring,
      aux_sym_epytext_repeat1,
    STATE(8), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [256] = 4,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
    ACTIONS(119), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [284] = 12,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_C_LBRACE,
    ACTIONS(131), 1,
      anon_sym_M_LBRACE,
    ACTIONS(134), 1,
      anon_sym_I_LBRACE,
    ACTIONS(137), 1,
      anon_sym_B_LBRACE,
    ACTIONS(140), 1,
      anon_sym_X_LBRACE,
    ACTIONS(143), 1,
      anon_sym_L_LBRACE,
    ACTIONS(146), 1,
      anon_sym_U_LBRACE,
    STATE(9), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(30), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [328] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(66), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [369] = 11,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    ACTIONS(165), 1,
      sym_tag_text,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [410] = 11,
    ACTIONS(169), 1,
      sym_tag_text,
    ACTIONS(172), 1,
      anon_sym_C_LBRACE,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      anon_sym_M_LBRACE,
    ACTIONS(180), 1,
      anon_sym_I_LBRACE,
    ACTIONS(183), 1,
      anon_sym_B_LBRACE,
    ACTIONS(186), 1,
      anon_sym_X_LBRACE,
    ACTIONS(189), 1,
      anon_sym_L_LBRACE,
    ACTIONS(192), 1,
      anon_sym_U_LBRACE,
    STATE(12), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [451] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(70), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [492] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(82), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [533] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(74), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [574] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(71), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [615] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(79), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [656] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(78), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [697] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(67), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [738] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(76), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [779] = 11,
    ACTIONS(149), 1,
      sym_tag_text,
    ACTIONS(151), 1,
      anon_sym_C_LBRACE,
    ACTIONS(153), 1,
      anon_sym_M_LBRACE,
    ACTIONS(155), 1,
      anon_sym_I_LBRACE,
    ACTIONS(157), 1,
      anon_sym_B_LBRACE,
    ACTIONS(159), 1,
      anon_sym_X_LBRACE,
    ACTIONS(161), 1,
      anon_sym_L_LBRACE,
    ACTIONS(163), 1,
      anon_sym_U_LBRACE,
    STATE(75), 1,
      sym_tag_content,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(32), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [820] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(197), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [835] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(201), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [850] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(205), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [865] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(209), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [880] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(213), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [895] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(217), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [910] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(221), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [925] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(225), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [940] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(229), 8,
      anon_sym_AT,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [955] = 1,
    ACTIONS(197), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [967] = 1,
    ACTIONS(229), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [979] = 1,
    ACTIONS(205), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [991] = 1,
    ACTIONS(213), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1003] = 1,
    ACTIONS(225), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1015] = 1,
    ACTIONS(201), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1027] = 1,
    ACTIONS(217), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1039] = 1,
    ACTIONS(221), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1051] = 4,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_field_literal,
    STATE(43), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1065] = 5,
    ACTIONS(233), 1,
      sym_name,
    ACTIONS(235), 1,
      sym_target,
    STATE(85), 1,
      sym_link,
    STATE(86), 1,
      sym_named_link,
    STATE(87), 1,
      sym_primitive_link,
  [1081] = 5,
    ACTIONS(233), 1,
      sym_name,
    ACTIONS(235), 1,
      sym_target,
    STATE(80), 1,
      sym_link,
    STATE(86), 1,
      sym_named_link,
    STATE(87), 1,
      sym_primitive_link,
  [1097] = 5,
    ACTIONS(233), 1,
      sym_name,
    ACTIONS(235), 1,
      sym_target,
    STATE(81), 1,
      sym_link,
    STATE(86), 1,
      sym_named_link,
    STATE(87), 1,
      sym_primitive_link,
  [1113] = 4,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_field_literal,
    STATE(43), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1127] = 4,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_field_literal,
    STATE(43), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1141] = 5,
    ACTIONS(233), 1,
      sym_name,
    ACTIONS(235), 1,
      sym_target,
    STATE(73), 1,
      sym_link,
    STATE(86), 1,
      sym_named_link,
    STATE(87), 1,
      sym_primitive_link,
  [1157] = 1,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [1162] = 1,
    ACTIONS(246), 2,
      sym_arg,
      anon_sym_COLON,
  [1167] = 2,
    ACTIONS(248), 1,
      sym_arg,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1174] = 1,
    ACTIONS(252), 2,
      sym_arg,
      anon_sym_COLON,
  [1179] = 1,
    ACTIONS(254), 2,
      sym_arg,
      anon_sym_COLON,
  [1184] = 1,
    ACTIONS(256), 2,
      sym_arg,
      anon_sym_COLON,
  [1189] = 1,
    ACTIONS(258), 2,
      sym_arg,
      anon_sym_COLON,
  [1194] = 1,
    ACTIONS(260), 2,
      sym_arg,
      anon_sym_COLON,
  [1199] = 1,
    ACTIONS(262), 2,
      sym_arg,
      anon_sym_COLON,
  [1204] = 1,
    ACTIONS(264), 2,
      sym_arg,
      anon_sym_COLON,
  [1209] = 1,
    ACTIONS(266), 2,
      sym_arg,
      anon_sym_COLON,
  [1214] = 1,
    ACTIONS(268), 2,
      sym_arg,
      anon_sym_COLON,
  [1219] = 1,
    ACTIONS(270), 2,
      sym_arg,
      anon_sym_COLON,
  [1224] = 1,
    ACTIONS(272), 2,
      sym_arg,
      anon_sym_COLON,
  [1229] = 1,
    ACTIONS(274), 2,
      sym_arg,
      anon_sym_COLON,
  [1234] = 1,
    ACTIONS(276), 2,
      sym_arg,
      anon_sym_COLON,
  [1239] = 1,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [1244] = 1,
    ACTIONS(280), 2,
      sym_arg,
      anon_sym_COLON,
  [1249] = 1,
    ACTIONS(282), 2,
      sym_arg,
      anon_sym_COLON,
  [1254] = 1,
    ACTIONS(284), 2,
      sym_arg,
      anon_sym_COLON,
  [1259] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
  [1263] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
  [1267] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [1271] = 1,
    ACTIONS(292), 1,
      anon_sym_GT,
  [1275] = 1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
  [1279] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [1283] = 1,
    ACTIONS(298), 1,
      sym_target,
  [1287] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [1291] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [1295] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [1299] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [1303] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1307] = 1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
  [1311] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
  [1315] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [1319] = 1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
  [1323] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [1327] = 1,
    ACTIONS(320), 1,
      anon_sym_LT,
  [1331] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [1335] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [1339] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1343] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1347] = 1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 208,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 369,
  [SMALL_STATE(12)] = 410,
  [SMALL_STATE(13)] = 451,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 615,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 738,
  [SMALL_STATE(21)] = 779,
  [SMALL_STATE(22)] = 820,
  [SMALL_STATE(23)] = 835,
  [SMALL_STATE(24)] = 850,
  [SMALL_STATE(25)] = 865,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 895,
  [SMALL_STATE(28)] = 910,
  [SMALL_STATE(29)] = 925,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 955,
  [SMALL_STATE(32)] = 967,
  [SMALL_STATE(33)] = 979,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1003,
  [SMALL_STATE(36)] = 1015,
  [SMALL_STATE(37)] = 1027,
  [SMALL_STATE(38)] = 1039,
  [SMALL_STATE(39)] = 1051,
  [SMALL_STATE(40)] = 1065,
  [SMALL_STATE(41)] = 1081,
  [SMALL_STATE(42)] = 1097,
  [SMALL_STATE(43)] = 1113,
  [SMALL_STATE(44)] = 1127,
  [SMALL_STATE(45)] = 1141,
  [SMALL_STATE(46)] = 1157,
  [SMALL_STATE(47)] = 1162,
  [SMALL_STATE(48)] = 1167,
  [SMALL_STATE(49)] = 1174,
  [SMALL_STATE(50)] = 1179,
  [SMALL_STATE(51)] = 1184,
  [SMALL_STATE(52)] = 1189,
  [SMALL_STATE(53)] = 1194,
  [SMALL_STATE(54)] = 1199,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1209,
  [SMALL_STATE(57)] = 1214,
  [SMALL_STATE(58)] = 1219,
  [SMALL_STATE(59)] = 1224,
  [SMALL_STATE(60)] = 1229,
  [SMALL_STATE(61)] = 1234,
  [SMALL_STATE(62)] = 1239,
  [SMALL_STATE(63)] = 1244,
  [SMALL_STATE(64)] = 1249,
  [SMALL_STATE(65)] = 1254,
  [SMALL_STATE(66)] = 1259,
  [SMALL_STATE(67)] = 1263,
  [SMALL_STATE(68)] = 1267,
  [SMALL_STATE(69)] = 1271,
  [SMALL_STATE(70)] = 1275,
  [SMALL_STATE(71)] = 1279,
  [SMALL_STATE(72)] = 1283,
  [SMALL_STATE(73)] = 1287,
  [SMALL_STATE(74)] = 1291,
  [SMALL_STATE(75)] = 1295,
  [SMALL_STATE(76)] = 1299,
  [SMALL_STATE(77)] = 1303,
  [SMALL_STATE(78)] = 1307,
  [SMALL_STATE(79)] = 1311,
  [SMALL_STATE(80)] = 1315,
  [SMALL_STATE(81)] = 1319,
  [SMALL_STATE(82)] = 1323,
  [SMALL_STATE(83)] = 1327,
  [SMALL_STATE(84)] = 1331,
  [SMALL_STATE(85)] = 1335,
  [SMALL_STATE(86)] = 1339,
  [SMALL_STATE(87)] = 1343,
  [SMALL_STATE(88)] = 1347,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(8),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(13),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(16),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(14),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(40),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_para, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_para_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(9),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(13),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(16),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(10),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(15),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(14),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(40),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(45),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_content, 1),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(12),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(21),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(20),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(19),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(18),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(17),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(41),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri_tag, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri_tag, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_tag, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_tag, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_tag, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_tag, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_tag, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_tag, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_tag, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_tag, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_tag, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexed_tag, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat2, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_epytext_repeat2, 2), SHIFT_REPEAT(2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtype_literal, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_literal, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_literal, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright_literal, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cvar_literal, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_literal, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_literal, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_organization_literal, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_literal, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcondition_literal, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_precondition_literal, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise_literal, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning_literal, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_literal, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_literal, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_literal, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_link, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_link, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 1),
  [328] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
