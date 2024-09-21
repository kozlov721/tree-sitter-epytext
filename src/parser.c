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
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_arg = 1,
  anon_sym_COLON = 2,
  sym_attention_literal = 3,
  sym_author_literal = 4,
  sym_bug_literal = 5,
  anon_sym_change = 6,
  anon_sym_changes = 7,
  sym_contact_literal = 8,
  anon_sym_copyright = 9,
  anon_sym_LPARENc_RPAREN = 10,
  anon_sym_cvar = 11,
  anon_sym_cvariable = 12,
  sym_deprecated_literal = 13,
  sym_group_literal = 14,
  sym_invariant_literal = 15,
  anon_sym_ivar = 16,
  anon_sym_ivariable = 17,
  anon_sym_kwarg = 18,
  anon_sym_keyword = 19,
  anon_sym_kwparam = 20,
  sym_license_literal = 21,
  sym_newfield_literal = 22,
  sym_note_literal = 23,
  anon_sym_organization = 24,
  anon_sym_org = 25,
  anon_sym_param = 26,
  anon_sym_parameter = 27,
  anon_sym_arg = 28,
  sym_permission_literal = 29,
  anon_sym_postcondition = 30,
  anon_sym_postcond = 31,
  anon_sym_precondition = 32,
  anon_sym_precond = 33,
  anon_sym_raises = 34,
  anon_sym_raise = 35,
  anon_sym_except = 36,
  anon_sym_exception = 37,
  anon_sym_requires = 38,
  anon_sym_require = 39,
  anon_sym_requirement = 40,
  anon_sym_return = 41,
  anon_sym_returns = 42,
  anon_sym_rtype = 43,
  anon_sym_returntype = 44,
  anon_sym_see = 45,
  anon_sym_seealso = 46,
  sym_since_literal = 47,
  sym_sort_literal = 48,
  sym_status_literal = 49,
  sym_summary_literal = 50,
  sym_todo_literal = 51,
  sym_type_literal = 52,
  anon_sym_var = 53,
  anon_sym_variable = 54,
  sym_version_literal = 55,
  anon_sym_warning = 56,
  anon_sym_warn = 57,
  anon_sym_AT = 58,
  anon_sym_DASH = 59,
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
  sym_text = 73,
  sym_epytext = 74,
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
  sym_ulist = 95,
  sym_li = 96,
  sym_link = 97,
  sym_named_link = 98,
  sym_primitive_link = 99,
  sym_tag_content = 100,
  sym_code_tag = 101,
  sym_math_tag = 102,
  sym_italic_tag = 103,
  sym_bold_tag = 104,
  sym_indexed_tag = 105,
  sym_link_tag = 106,
  sym_uri_tag = 107,
  sym_tag = 108,
  aux_sym_epytext_repeat1 = 109,
  aux_sym_epytext_repeat2 = 110,
  aux_sym_para_repeat1 = 111,
  aux_sym_ulist_repeat1 = 112,
  aux_sym_tag_content_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_DASH] = "- ",
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
  [sym_text] = "text",
  [sym_epytext] = "epytext",
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
  [sym_ulist] = "ulist",
  [sym_li] = "li",
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
  [aux_sym_ulist_repeat1] = "ulist_repeat1",
  [aux_sym_tag_content_repeat1] = "tag_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_text] = sym_text,
  [sym_epytext] = sym_epytext,
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
  [sym_ulist] = sym_ulist,
  [sym_li] = sym_li,
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
  [aux_sym_ulist_repeat1] = aux_sym_ulist_repeat1,
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
  [anon_sym_DASH] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_epytext] = {
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
  [sym_ulist] = {
    .visible = true,
    .named = true,
  },
  [sym_li] = {
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
  [aux_sym_ulist_repeat1] = {
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
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 16,
  [21] = 15,
  [22] = 22,
  [23] = 19,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 33,
  [36] = 30,
  [37] = 31,
  [38] = 26,
  [39] = 27,
  [40] = 28,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
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
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 73,
  [79] = 74,
  [80] = 80,
  [81] = 77,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 82,
  [86] = 86,
  [87] = 87,
  [88] = 83,
  [89] = 89,
  [90] = 90,
  [91] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(228);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == 'X') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'k') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(238);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(291);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == 'C') ADVANCE(298);
      if (lookahead == 'I') ADVANCE(299);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'M') ADVANCE(301);
      if (lookahead == 'U') ADVANCE(302);
      if (lookahead == 'X') ADVANCE(303);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(304);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(118);
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
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 147:
      if (lookahead == 'q') ADVANCE(197);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 202:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 204:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 209:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 210:
      if (lookahead == 'z') ADVANCE(26);
      END_STATE();
    case 211:
      if (lookahead == '{') ADVANCE(309);
      END_STATE();
    case 212:
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 213:
      if (lookahead == '{') ADVANCE(305);
      END_STATE();
    case 214:
      if (lookahead == '{') ADVANCE(305);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 215:
      if (lookahead == '{') ADVANCE(308);
      END_STATE();
    case 216:
      if (lookahead == '{') ADVANCE(308);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 217:
      if (lookahead == '{') ADVANCE(311);
      END_STATE();
    case 218:
      if (lookahead == '{') ADVANCE(311);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 219:
      if (lookahead == '{') ADVANCE(307);
      END_STATE();
    case 220:
      if (lookahead == '{') ADVANCE(307);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 221:
      if (lookahead == '{') ADVANCE(312);
      END_STATE();
    case 222:
      if (lookahead == '{') ADVANCE(312);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 223:
      if (lookahead == '{') ADVANCE(310);
      END_STATE();
    case 224:
      if (lookahead == '{') ADVANCE(310);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(295);
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(315);
      END_STATE();
    case 227:
      if (eof) ADVANCE(228);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == 'B') ADVANCE(212);
      if (lookahead == 'C') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'X') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_arg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_attention_literal);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_author_literal);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_bug_literal);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_change);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_changes);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_contact_literal);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPARENc_RPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_cvar);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_cvariable);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_deprecated_literal);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_group_literal);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_invariant_literal);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_ivar);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ivariable);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_kwarg);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_keyword);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_kwparam);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_license_literal);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_newfield_literal);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_note_literal);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_organization);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_param);
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_permission_literal);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_postcondition);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_postcond);
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_precondition);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_precond);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_raise);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_requirement);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_rtype);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_returntype);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_see);
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_seealso);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_since_literal);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_sort_literal);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_status_literal);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_summary_literal);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_todo_literal);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_type_literal);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_version_literal);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_warn);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(315);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_target);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_target);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == 'C') ADVANCE(298);
      if (lookahead == 'I') ADVANCE(299);
      if (lookahead == 'L') ADVANCE(300);
      if (lookahead == 'M') ADVANCE(301);
      if (lookahead == 'U') ADVANCE(302);
      if (lookahead == 'X') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_tag_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_M_LBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_I_LBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_X_LBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_L_LBRACE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_U_LBRACE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == 'B') ADVANCE(212);
      if (lookahead == 'C') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'X') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(315);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 227},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 227},
  [4] = {.lex_state = 227},
  [5] = {.lex_state = 227},
  [6] = {.lex_state = 227},
  [7] = {.lex_state = 227},
  [8] = {.lex_state = 227},
  [9] = {.lex_state = 227},
  [10] = {.lex_state = 227},
  [11] = {.lex_state = 227},
  [12] = {.lex_state = 227},
  [13] = {.lex_state = 227},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 227},
  [27] = {.lex_state = 227},
  [28] = {.lex_state = 227},
  [29] = {.lex_state = 227},
  [30] = {.lex_state = 227},
  [31] = {.lex_state = 227},
  [32] = {.lex_state = 227},
  [33] = {.lex_state = 227},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 225},
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
  [91] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_epytext] = STATE(71),
    [sym_para] = STATE(3),
    [sym_field] = STATE(43),
    [sym_field_literal] = STATE(51),
    [sym_ulist] = STATE(3),
    [sym_code_tag] = STATE(33),
    [sym_math_tag] = STATE(33),
    [sym_italic_tag] = STATE(33),
    [sym_bold_tag] = STATE(33),
    [sym_indexed_tag] = STATE(33),
    [sym_link_tag] = STATE(33),
    [sym_uri_tag] = STATE(33),
    [sym_tag] = STATE(12),
    [aux_sym_epytext_repeat1] = STATE(3),
    [aux_sym_epytext_repeat2] = STATE(43),
    [aux_sym_para_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_C_LBRACE] = ACTIONS(9),
    [anon_sym_M_LBRACE] = ACTIONS(11),
    [anon_sym_I_LBRACE] = ACTIONS(13),
    [anon_sym_B_LBRACE] = ACTIONS(15),
    [anon_sym_X_LBRACE] = ACTIONS(17),
    [anon_sym_L_LBRACE] = ACTIONS(19),
    [anon_sym_U_LBRACE] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [2] = {
    [sym_change_literal] = STATE(52),
    [sym_copyright_literal] = STATE(52),
    [sym_cvar_literal] = STATE(52),
    [sym_ivar_literal] = STATE(52),
    [sym_keyword_literal] = STATE(52),
    [sym_organization_literal] = STATE(52),
    [sym_param_literal] = STATE(52),
    [sym_postcondition_literal] = STATE(52),
    [sym_precondition_literal] = STATE(52),
    [sym_raise_literal] = STATE(52),
    [sym_requires_literal] = STATE(52),
    [sym_return_literal] = STATE(52),
    [sym_rtype_literal] = STATE(52),
    [sym_see_literal] = STATE(52),
    [sym_var_literal] = STATE(52),
    [sym_warning_literal] = STATE(52),
    [sym_attention_literal] = ACTIONS(25),
    [sym_author_literal] = ACTIONS(25),
    [sym_bug_literal] = ACTIONS(25),
    [anon_sym_change] = ACTIONS(27),
    [anon_sym_changes] = ACTIONS(29),
    [sym_contact_literal] = ACTIONS(25),
    [anon_sym_copyright] = ACTIONS(31),
    [anon_sym_LPARENc_RPAREN] = ACTIONS(31),
    [anon_sym_cvar] = ACTIONS(33),
    [anon_sym_cvariable] = ACTIONS(35),
    [sym_deprecated_literal] = ACTIONS(25),
    [sym_group_literal] = ACTIONS(25),
    [sym_invariant_literal] = ACTIONS(25),
    [anon_sym_ivar] = ACTIONS(37),
    [anon_sym_ivariable] = ACTIONS(39),
    [anon_sym_kwarg] = ACTIONS(41),
    [anon_sym_keyword] = ACTIONS(41),
    [anon_sym_kwparam] = ACTIONS(41),
    [sym_license_literal] = ACTIONS(25),
    [sym_newfield_literal] = ACTIONS(25),
    [sym_note_literal] = ACTIONS(25),
    [anon_sym_organization] = ACTIONS(43),
    [anon_sym_org] = ACTIONS(45),
    [anon_sym_param] = ACTIONS(47),
    [anon_sym_parameter] = ACTIONS(49),
    [anon_sym_arg] = ACTIONS(49),
    [sym_permission_literal] = ACTIONS(25),
    [anon_sym_postcondition] = ACTIONS(51),
    [anon_sym_postcond] = ACTIONS(53),
    [anon_sym_precondition] = ACTIONS(55),
    [anon_sym_precond] = ACTIONS(57),
    [anon_sym_raises] = ACTIONS(59),
    [anon_sym_raise] = ACTIONS(61),
    [anon_sym_except] = ACTIONS(61),
    [anon_sym_exception] = ACTIONS(59),
    [anon_sym_requires] = ACTIONS(63),
    [anon_sym_require] = ACTIONS(65),
    [anon_sym_requirement] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_returns] = ACTIONS(69),
    [anon_sym_rtype] = ACTIONS(71),
    [anon_sym_returntype] = ACTIONS(71),
    [anon_sym_see] = ACTIONS(73),
    [anon_sym_seealso] = ACTIONS(75),
    [sym_since_literal] = ACTIONS(25),
    [sym_sort_literal] = ACTIONS(25),
    [sym_status_literal] = ACTIONS(25),
    [sym_summary_literal] = ACTIONS(25),
    [sym_todo_literal] = ACTIONS(25),
    [sym_type_literal] = ACTIONS(25),
    [anon_sym_var] = ACTIONS(77),
    [anon_sym_variable] = ACTIONS(79),
    [sym_version_literal] = ACTIONS(25),
    [anon_sym_warning] = ACTIONS(81),
    [anon_sym_warn] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_DASH,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_field_literal,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(47), 2,
      sym_field,
      aux_sym_epytext_repeat2,
    STATE(9), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [59] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_li,
      aux_sym_ulist_repeat1,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(7), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
    ACTIONS(89), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [97] = 15,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(98), 1,
      anon_sym_C_LBRACE,
    ACTIONS(101), 1,
      anon_sym_M_LBRACE,
    ACTIONS(104), 1,
      anon_sym_I_LBRACE,
    ACTIONS(107), 1,
      anon_sym_B_LBRACE,
    ACTIONS(110), 1,
      anon_sym_X_LBRACE,
    ACTIONS(113), 1,
      anon_sym_L_LBRACE,
    ACTIONS(116), 1,
      anon_sym_U_LBRACE,
    ACTIONS(119), 1,
      sym_text,
    STATE(5), 2,
      sym_li,
      aux_sym_ulist_repeat1,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(7), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [153] = 13,
    ACTIONS(7), 1,
      anon_sym_DASH,
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
    ACTIONS(23), 1,
      sym_text,
    STATE(4), 2,
      sym_li,
      aux_sym_ulist_repeat1,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(7), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [203] = 5,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(9), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
    ACTIONS(124), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [237] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
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
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_AT,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(9), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [289] = 14,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_C_LBRACE,
    ACTIONS(140), 1,
      anon_sym_M_LBRACE,
    ACTIONS(143), 1,
      anon_sym_I_LBRACE,
    ACTIONS(146), 1,
      anon_sym_B_LBRACE,
    ACTIONS(149), 1,
      anon_sym_X_LBRACE,
    ACTIONS(152), 1,
      anon_sym_L_LBRACE,
    ACTIONS(155), 1,
      anon_sym_U_LBRACE,
    ACTIONS(158), 1,
      sym_text,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(9), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [341] = 13,
    ACTIONS(7), 1,
      anon_sym_DASH,
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
    ACTIONS(23), 1,
      sym_text,
    STATE(49), 1,
      sym_description,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(8), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [390] = 13,
    ACTIONS(7), 1,
      anon_sym_DASH,
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
    ACTIONS(23), 1,
      sym_text,
    STATE(65), 1,
      sym_description,
    STATE(12), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(8), 3,
      sym_para,
      sym_ulist,
      aux_sym_epytext_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [439] = 4,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
    ACTIONS(163), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [468] = 12,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      anon_sym_C_LBRACE,
    ACTIONS(172), 1,
      anon_sym_M_LBRACE,
    ACTIONS(175), 1,
      anon_sym_I_LBRACE,
    ACTIONS(178), 1,
      anon_sym_B_LBRACE,
    ACTIONS(181), 1,
      anon_sym_X_LBRACE,
    ACTIONS(184), 1,
      anon_sym_L_LBRACE,
    ACTIONS(187), 1,
      anon_sym_U_LBRACE,
    ACTIONS(190), 1,
      sym_text,
    ACTIONS(167), 2,
      anon_sym_AT,
      anon_sym_DASH,
    STATE(13), 2,
      sym_tag,
      aux_sym_para_repeat1,
    STATE(33), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [513] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(85), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [554] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(74), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [595] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(69), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [636] = 11,
    ACTIONS(209), 1,
      sym_tag_text,
    ACTIONS(212), 1,
      anon_sym_C_LBRACE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_M_LBRACE,
    ACTIONS(220), 1,
      anon_sym_I_LBRACE,
    ACTIONS(223), 1,
      anon_sym_B_LBRACE,
    ACTIONS(226), 1,
      anon_sym_X_LBRACE,
    ACTIONS(229), 1,
      anon_sym_L_LBRACE,
    ACTIONS(232), 1,
      anon_sym_U_LBRACE,
    STATE(17), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [677] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(82), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [718] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(81), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [759] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(70), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [800] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(79), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [841] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(78), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [882] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(77), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [923] = 11,
    ACTIONS(193), 1,
      sym_tag_text,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    STATE(73), 1,
      sym_tag_content,
    STATE(25), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [964] = 11,
    ACTIONS(195), 1,
      anon_sym_C_LBRACE,
    ACTIONS(197), 1,
      anon_sym_M_LBRACE,
    ACTIONS(199), 1,
      anon_sym_I_LBRACE,
    ACTIONS(201), 1,
      anon_sym_B_LBRACE,
    ACTIONS(203), 1,
      anon_sym_X_LBRACE,
    ACTIONS(205), 1,
      anon_sym_L_LBRACE,
    ACTIONS(207), 1,
      anon_sym_U_LBRACE,
    ACTIONS(235), 1,
      sym_tag_text,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_tag,
      aux_sym_tag_content_repeat1,
    STATE(35), 7,
      sym_code_tag,
      sym_math_tag,
      sym_italic_tag,
      sym_bold_tag,
      sym_indexed_tag,
      sym_link_tag,
      sym_uri_tag,
  [1005] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1021] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1037] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1053] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1069] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1085] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1101] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1117] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 10,
      anon_sym_AT,
      anon_sym_DASH,
      anon_sym_C_LBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
      sym_text,
  [1133] = 1,
    ACTIONS(253), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1145] = 1,
    ACTIONS(269), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1157] = 1,
    ACTIONS(257), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1169] = 1,
    ACTIONS(261), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1181] = 1,
    ACTIONS(241), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1193] = 1,
    ACTIONS(245), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1205] = 1,
    ACTIONS(249), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1217] = 1,
    ACTIONS(265), 9,
      sym_tag_text,
      anon_sym_C_LBRACE,
      anon_sym_RBRACE,
      anon_sym_M_LBRACE,
      anon_sym_I_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_X_LBRACE,
      anon_sym_L_LBRACE,
      anon_sym_U_LBRACE,
  [1229] = 5,
    ACTIONS(271), 1,
      sym_name,
    ACTIONS(273), 1,
      sym_target,
    STATE(88), 1,
      sym_link,
    STATE(89), 1,
      sym_named_link,
    STATE(90), 1,
      sym_primitive_link,
  [1245] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_field_literal,
    STATE(46), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1259] = 5,
    ACTIONS(271), 1,
      sym_name,
    ACTIONS(273), 1,
      sym_target,
    STATE(83), 1,
      sym_link,
    STATE(89), 1,
      sym_named_link,
    STATE(90), 1,
      sym_primitive_link,
  [1275] = 5,
    ACTIONS(271), 1,
      sym_name,
    ACTIONS(273), 1,
      sym_target,
    STATE(84), 1,
      sym_link,
    STATE(89), 1,
      sym_named_link,
    STATE(90), 1,
      sym_primitive_link,
  [1291] = 4,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_field_literal,
    STATE(46), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1305] = 4,
    ACTIONS(275), 1,
      anon_sym_AT,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_field_literal,
    STATE(46), 2,
      sym_field,
      aux_sym_epytext_repeat2,
  [1319] = 5,
    ACTIONS(271), 1,
      sym_name,
    ACTIONS(273), 1,
      sym_target,
    STATE(89), 1,
      sym_named_link,
    STATE(90), 1,
      sym_primitive_link,
    STATE(91), 1,
      sym_link,
  [1335] = 1,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [1340] = 1,
    ACTIONS(286), 2,
      sym_arg,
      anon_sym_COLON,
  [1345] = 2,
    ACTIONS(288), 1,
      sym_arg,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [1352] = 1,
    ACTIONS(292), 2,
      sym_arg,
      anon_sym_COLON,
  [1357] = 1,
    ACTIONS(294), 2,
      sym_arg,
      anon_sym_COLON,
  [1362] = 1,
    ACTIONS(296), 2,
      sym_arg,
      anon_sym_COLON,
  [1367] = 1,
    ACTIONS(298), 2,
      sym_arg,
      anon_sym_COLON,
  [1372] = 1,
    ACTIONS(300), 2,
      sym_arg,
      anon_sym_COLON,
  [1377] = 1,
    ACTIONS(302), 2,
      sym_arg,
      anon_sym_COLON,
  [1382] = 1,
    ACTIONS(304), 2,
      sym_arg,
      anon_sym_COLON,
  [1387] = 1,
    ACTIONS(306), 2,
      sym_arg,
      anon_sym_COLON,
  [1392] = 1,
    ACTIONS(308), 2,
      sym_arg,
      anon_sym_COLON,
  [1397] = 1,
    ACTIONS(310), 2,
      sym_arg,
      anon_sym_COLON,
  [1402] = 1,
    ACTIONS(312), 2,
      sym_arg,
      anon_sym_COLON,
  [1407] = 1,
    ACTIONS(314), 2,
      sym_arg,
      anon_sym_COLON,
  [1412] = 1,
    ACTIONS(316), 2,
      sym_arg,
      anon_sym_COLON,
  [1417] = 1,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [1422] = 1,
    ACTIONS(320), 2,
      sym_arg,
      anon_sym_COLON,
  [1427] = 1,
    ACTIONS(322), 2,
      sym_arg,
      anon_sym_COLON,
  [1432] = 1,
    ACTIONS(324), 2,
      sym_arg,
      anon_sym_COLON,
  [1437] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1441] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
  [1445] = 1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
  [1449] = 1,
    ACTIONS(332), 1,
      anon_sym_GT,
  [1453] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [1457] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
  [1461] = 1,
    ACTIONS(338), 1,
      sym_target,
  [1465] = 1,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1469] = 1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
  [1473] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
  [1477] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [1481] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
  [1485] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [1489] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
  [1493] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [1497] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1501] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1505] = 1,
    ACTIONS(360), 1,
      anon_sym_LT,
  [1509] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
  [1513] = 1,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
  [1517] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [1521] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [1525] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 237,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 468,
  [SMALL_STATE(14)] = 513,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 677,
  [SMALL_STATE(19)] = 718,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 800,
  [SMALL_STATE(22)] = 841,
  [SMALL_STATE(23)] = 882,
  [SMALL_STATE(24)] = 923,
  [SMALL_STATE(25)] = 964,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1021,
  [SMALL_STATE(28)] = 1037,
  [SMALL_STATE(29)] = 1053,
  [SMALL_STATE(30)] = 1069,
  [SMALL_STATE(31)] = 1085,
  [SMALL_STATE(32)] = 1101,
  [SMALL_STATE(33)] = 1117,
  [SMALL_STATE(34)] = 1133,
  [SMALL_STATE(35)] = 1145,
  [SMALL_STATE(36)] = 1157,
  [SMALL_STATE(37)] = 1169,
  [SMALL_STATE(38)] = 1181,
  [SMALL_STATE(39)] = 1193,
  [SMALL_STATE(40)] = 1205,
  [SMALL_STATE(41)] = 1217,
  [SMALL_STATE(42)] = 1229,
  [SMALL_STATE(43)] = 1245,
  [SMALL_STATE(44)] = 1259,
  [SMALL_STATE(45)] = 1275,
  [SMALL_STATE(46)] = 1291,
  [SMALL_STATE(47)] = 1305,
  [SMALL_STATE(48)] = 1319,
  [SMALL_STATE(49)] = 1335,
  [SMALL_STATE(50)] = 1340,
  [SMALL_STATE(51)] = 1345,
  [SMALL_STATE(52)] = 1352,
  [SMALL_STATE(53)] = 1357,
  [SMALL_STATE(54)] = 1362,
  [SMALL_STATE(55)] = 1367,
  [SMALL_STATE(56)] = 1372,
  [SMALL_STATE(57)] = 1377,
  [SMALL_STATE(58)] = 1382,
  [SMALL_STATE(59)] = 1387,
  [SMALL_STATE(60)] = 1392,
  [SMALL_STATE(61)] = 1397,
  [SMALL_STATE(62)] = 1402,
  [SMALL_STATE(63)] = 1407,
  [SMALL_STATE(64)] = 1412,
  [SMALL_STATE(65)] = 1417,
  [SMALL_STATE(66)] = 1422,
  [SMALL_STATE(67)] = 1427,
  [SMALL_STATE(68)] = 1432,
  [SMALL_STATE(69)] = 1437,
  [SMALL_STATE(70)] = 1441,
  [SMALL_STATE(71)] = 1445,
  [SMALL_STATE(72)] = 1449,
  [SMALL_STATE(73)] = 1453,
  [SMALL_STATE(74)] = 1457,
  [SMALL_STATE(75)] = 1461,
  [SMALL_STATE(76)] = 1465,
  [SMALL_STATE(77)] = 1469,
  [SMALL_STATE(78)] = 1473,
  [SMALL_STATE(79)] = 1477,
  [SMALL_STATE(80)] = 1481,
  [SMALL_STATE(81)] = 1485,
  [SMALL_STATE(82)] = 1489,
  [SMALL_STATE(83)] = 1493,
  [SMALL_STATE(84)] = 1497,
  [SMALL_STATE(85)] = 1501,
  [SMALL_STATE(86)] = 1505,
  [SMALL_STATE(87)] = 1509,
  [SMALL_STATE(88)] = 1513,
  [SMALL_STATE(89)] = 1517,
  [SMALL_STATE(90)] = 1521,
  [SMALL_STATE(91)] = 1525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ulist, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ulist, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ulist_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(6),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(24),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(23),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(14),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(42),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(48),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ulist_repeat1, 2), SHIFT_REPEAT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(6),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(24),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(15),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(16),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(23),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(14),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(42),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(48),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_epytext_repeat1, 2), SHIFT_REPEAT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_para, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_para_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(24),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(15),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(16),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(23),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(14),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(42),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(48),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_repeat1, 2), SHIFT_REPEAT(13),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(17),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(22),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(21),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(20),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(19),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(18),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(44),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_content_repeat1, 2), SHIFT_REPEAT(45),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_content, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_tag, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_tag, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_tag, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_tag, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_tag, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexed_tag, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_tag, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_tag, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_tag, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_tag, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri_tag, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri_tag, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_epytext_repeat2, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_epytext_repeat2, 2), SHIFT_REPEAT(2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_epytext, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtype_literal, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_literal, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_literal, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright_literal, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cvar_literal, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_literal, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_literal, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_organization_literal, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_literal, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcondition_literal, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_precondition_literal, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise_literal, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_literal, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_literal, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_literal, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_literal, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_link, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_link, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
