/*
 * Creates a new message dialog, which is a simple dialog with some text the
 * user may want to see. When the user clicks a button a “response” signal is
 * emitted with response IDs from GtkResponseType. See GtkDialog for more
 * details.
 */
void message_dialog_new(char *widget
                      , char *parent
                      , char *flags
                      , char *type
                      , char *buttons
                      , char *text);

/*
 * Sets the text of the message dialog to be str , which is marked up with the
 * Pango text markup language.
 */
void message_dialog_set_markup(char *setting);

/*
 * Sets the secondary text of the message dialog.
 */
void message_dialog_set_secondary_text(char *setting);

/*
 * Sets the secondary text of the message dialog.
 */
void message_dialog_set_secondary_markup(char *setting);

