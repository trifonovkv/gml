/*
 * Creates a new dialog box.
 */
void dialog_new(char *widget);

/*    
 * Adds a button with the given text and sets things up so that clicking the
 * button will emit the “response” signal with the given response_id.
 */
void dialog_add_button(char *button_text, char *response_id);

/*
 * Adds an activatable widget to the action area of a GtkDialog, connecting a
 * signal handler that will emit the “response” signal on the dialog when the
 * widget is activated. The widget is appended to the end of the dialog’s
 * action area. If you want to add a non-activatable widget, simply pack it
 * into the action_area field of the GtkDialog struct.
 */
void dialog_add_action_widget(char *child, char *response_id);

/*    
 * Sets the last widget in the dialog’s action area with the given response_id
 * as the default widget for the dialog. Pressing “Enter” normally activates
 * the default widget.
 */
void dialog_set_default_response(char *setting);

/*    
 * Calls gtk_widget_set_sensitive (widget, @setting) for each widget in the
 * dialog’s action area with the given response_id . A convenient way to
 * sensitize/desensitize dialog buttons.
 */
void dialog_set_response_sensitive(char *response_id, char *setting);

