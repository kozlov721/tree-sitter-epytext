(text) @string.documentation
(tag_text) @string.documentation

(field
  (field_literal
    (type_literal))
  parameter: (arg)
  description: (docstring) @type
  (#set! "priority" 110)
)

(field
  (field_literal
    (rtype_literal))
  description: (docstring) @type
  (#set! "priority" 110)
)

(field
  (field_literal
    (raise_literal))
  parameter: (arg) @type
  (#set! "priority" 110)
)

parameter: (arg) @variable

(italic_tag (tag_content) @markup.italic)
(bold_tag (tag_content) @markup.strong)
(link_name) @markup.link.label
(primitive_link) @markup.link
(link_url) @markup.link

(field_literal) @keyword
