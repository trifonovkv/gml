/*
 * Creates a new GtkInfoBar object.
 */
void info_bar_new(char *widget);

void info_bar_add_content_area(char *setting);

/* 
 * Add an activatable widget to the action area of a GtkInfoBar, connecting a
 * signal handler that will emit the “response” signal on the message area when
 * the widget is activated. The widget is appended to the end of the message
 * areas action area.
 */
void info_bar_add_action_widget(char *child, char *response_id);

/* 
 * Adds a button with the given text and sets things up so that clicking the
 * button will emit the “response” signal with the given response_id. The
 * button is appended to the end of the info bars's action area. The button
 * widget is returned, but usually you don't need it.
 */
void info_bar_add_button(char *button_text, char *response_id);

/* 
 * Calls gtk_widget_set_sensitive (widget, setting) for each widget in the info
 * bars’s action area with the given response_id. A convenient way to
 * sensitize/desensitize dialog buttons.
 */
void info_bar_set_response_sensitive(char *response_id, char *setting);

/* 
 * Sets the last widget in the info bar’s action area with the given
 * response_id as the default widget for the dialog. Pressing “Enter” normally
 * activates the default widget.
 * 
 * Note that this function currently requires info_bar to be added to a widget
 * hierarchy.
 */
void info_bar_set_default_response(char *setting);

/* 
 * Sets the message type of the message area.
 * 
 * GTK+ uses this type to determine how the message is displayed.
 */
void info_bar_set_message_type(char *setting);

/* 
 * If true, a standard close button is shown. When clicked it emits the
 * response GTK_RESPONSE_CLOSE.
 */
void info_bar_set_show_close_button(char *setting);

