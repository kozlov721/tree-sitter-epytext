(text) @string.documentation.python
(tag_text) @string.documentation.python

(field
  (field_literal
    (type_literal))
  parameter: (arg)
  description: (description) @type.python
  (#set! "priority" 110)
)

(field
  (field_literal
    (rtype_literal))
  description: (description) @type.python
  (#set! "priority" 110)
)

(field
  (field_literal
    (raise_literal))
  parameter: (arg) @type.python
  (#set! "priority" 110)
)

parameter: (arg) @variable.python

(italic_tag (tag_content) @markup.italic)
(bold_tag (tag_content) @markup.strong)
(named_link (name) @markup.link.label)
(target) @markup.link

(field_literal) @keyword
