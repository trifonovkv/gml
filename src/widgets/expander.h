/*
 * Creates a new expander using label as the text of the label.
 */
void expander_new(char *widget);

/*
 * Creates a new expander using label as the text of the label. If characters
 * in label are preceded by an underscore, they are underlined. If you need a
 * literal underscore character in a label, use “__” (two underscores). The
 * first underlined character represents a keyboard accelerator called a
 * mnemonic. Pressing Alt and that key activates the button.
 */
void expander_new_with_mnemonic(char *widget, char *setting);

/*
 * Sets the state of the expander. Set to TRUE, if you want the child widget to
 * be revealed, and FALSE if you want the child widget to be hidden.
 */
void expander_set_expanded(char *setting);

/*
 * Sets the text of the label of the expander to label.
 * This will also clear any previously set labels.
 */
void expander_set_label(char *setting);

/*
 * If true, an underline in the text of the expander label indicates the next
 * character should be used for the mnemonic accelerator key.
 */
void expander_set_use_underline(char *setting);

/*
 * Sets whether the text of the label contains markup in Pango’s text markup
 * language. See gtk_label_set_markup().
 */
void expander_set_use_markup(char *setting);

/*
 * Set the label widget for the expander. This is the widget that will appear
 * embedded alongside the expander arrow.
 */
void expander_set_label_widget(char *setting);

/*
 * Sets whether the label widget should fill all available horizontal space
 * allocated to expander.
 */
void expander_set_label_fill(char *setting);

/*
 * Sets whether the expander will resize the toplevel widget containing the
 * expander upon resizing and collpasing.
 */
void expander_set_resize_toplevel(char *setting);
