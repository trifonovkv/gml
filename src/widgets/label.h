/*
 * Creates a new label with the given text inside it. You can pass NULL to get
 * an empty label widget.
 */
void label_new(char *widget);

/* 
 * Sets the text within the GtkLabel widget. It overwrites any text that was
 * there before.
 * 
 * This will also clear any previously set mnemonic accelerators.
 */
void label_set_text(char *setting);

/*
 * The pattern of underlines you want under the existing text within the
 * GtkLabel widget. For example if the current text of the label says
 * “FooBarBaz” passing a pattern of “___ ___” will underline “Foo” and “Baz”
 * but not “Bar”.
 */
void label_set_pattern(char *setting);

/*
 * Sets the alignment of the lines in the text of the label relative to each
 * other. GTK_JUSTIFY_LEFT is the default value when the widget is first
 * created with gtk_label_new(). If you instead want to set the alignment of
 * the label as a whole, use gtk_widget_set_halign() instead.
 * gtk_label_set_justify() has no effect on labels containing only a single
 * line.
 */
void label_set_justify(char *setting);

/*
 * Sets the “xalign” property for label .
 */
void label_set_xalign(char *setting);

/* 
 * Sets the “yalign” property for label .
 */
void label_set_yalign(char *setting);

/* 
 * Sets the mode used to ellipsize (add an ellipsis: "...") to the text if
 * there is not enough space to render the entire string.
 */
void label_set_ellipsize(char *setting);

/* 
 * Sets the desired width in characters of label to n_chars .
 */
void label_set_width_chars(char *setting);

/* 
 * Sets the desired maximum width in characters of label to n_chars .
 */
void label_set_max_width_chars(char *setting);

/* 
 * Toggles line wrapping within the GtkLabel widget. TRUE makes it break lines
 * if text exceeds the widget’s size. FALSE lets the text get cut off by the
 * edge of the widget if it exceeds the widget size.
 * 
 * Note that setting line wrapping to TRUE does not make the label wrap at its
 * parent container’s width, because GTK+ widgets conceptually can’t make their
 * requisition depend on the parent container’s size. For a label that wraps at
 * a specific position, set the label’s width using
 * gtk_widget_set_size_request().
 */
void label_set_line_wrap(char *setting);

/*
 * If line wrapping is on (see gtk_label_set_line_wrap()) this controls how the
 * line wrapping is done. The default is PANGO_WRAP_WORD which means wrap on
 * word boundaries.
 */
void label_set_line_wrap_mode(char *setting);

/* 
 * Sets the number of lines to which an ellipsized, wrapping label should be
 * limited. This has no effect if the label is not wrapping or ellipsized. Set
 * this to -1 if you don’t want to limit the number of lines.
 */
void label_set_lines(char *setting);

/* 
 * Selects a range of characters in the label, if the label is selectable. See
 * gtk_label_set_selectable(). If the label is not selectable, this function
 * has no effect. If start_offset or end_offset are -1, then the end of the
 * label will be substituted.
 */
void label_select_region(char *start_offset, char *end_offset);

/*
 * Selectable labels allow the user to select text from the label, for
 * copy-and-paste.
 */
void label_set_selectable(char *setting);

/*
 * Sets the label’s text from the string str . If characters in str are
 * preceded by an underscore, they are underlined indicating that they
 * represent a keyboard accelerator called a mnemonic. The mnemonic key can be
 * used to activate another widget, chosen automatically, or explicitly using
 * gtk_label_set_mnemonic_widget().
 */
void label_set_text_with_mnemonic(char *setting);

/*
 * Sets the text of the label. The label is interpreted as including embedded
 * underlines and/or Pango markup depending on the values of the
 * “use-underline”" and “use-markup” properties.
 */
void label_set_label(char *setting);

/*
 * Sets whether the text of the label contains markup in Pango’s text markup
 * language. See gtk_label_set_markup().
 */
void label_set_use_markup(char *setting);

/*
 * If true, an underline in the text indicates the next character should be
 * used for the mnemonic accelerator key.
 */
void label_set_use_underline(char *setting);

/*
 * Sets whether the label is in single line mode.
 */
void label_set_single_line_mode(char *setting);

/* 
 * Sets the angle of rotation for the label. An angle of 90 reads from from
 * bottom to top, an angle of 270, from top to bottom. The angle setting for
 * the label is ignored if the label is selectable, wrapped, or ellipsized.
 */
void label_set_angle(char *setting);

/* 
 * Sets whether the label should keep track of clicked links (and use a
 * different color for them).
 */
void label_set_track_visited_links(char *setting);

