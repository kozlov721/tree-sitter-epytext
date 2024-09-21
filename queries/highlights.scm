(field (field_literal (type_literal)) @type parameter: (arg)  description: (description) @type)
(field (field_literal (rtype_literal)) @type description: (description) @type)
parameter: (arg) @parameter
;
(text) @string

(italic_tag (tag_content) @italic)
(bold_tag (tag_content) @bold)
(code_tag (tag_content) @code)
(tag) @comment
(field_literal) @keyword

(code_tag (tag_content) @injection.content) (#set! injection.language "python")
