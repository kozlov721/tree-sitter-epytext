(text) @string.documentation
(tag_text) @string.documentation

(field
  (field_literal
    (type_literal))
  parameter: (arg)
  description: (description) @type
  (#set! "priority" 110)
)

(field
  (field_literal
    (rtype_literal))
  description: (description) @type
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
(named_link (name) @markup.link.label)
(target) @markup.link

(field_literal) @keyword
