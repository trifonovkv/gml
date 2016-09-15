/*
 * Creates a new toggle button. A widget should be packed into the button, as
 * in gtk_button_new().
 */
void toggle_button_new(char *widget);

/* 
 * Creates a new toggle button with a text label.
 */
void toggle_button_new_with_label(char *widget, char *setting);

/* 
 * Creates a new GtkToggleButton containing a label. The label will be created
 * using gtk_label_new_with_mnemonic(), so underscores in label indicate the
 * mnemonic for the button.
 */
void toggle_button_new_with_mnemonic(char *widget, char *setting);

/*
 * Sets whether the button is displayed as a separate indicator and label. You
 * can call this function on a checkbutton or a radiobutton with draw_indicator
 * = FALSE to make the button look like a normal button
 * 
 * This function only affects instances of classes like GtkCheckButton and
 * GtkRadioButton that derive from GtkToggleButton, not instances of
 * GtkToggleButton itself.
 */
void toggle_button_set_mode(char *setting);

/*
 * Sets the status of the toggle button. Set to TRUE if you want the
 * GtkToggleButton to be “pressed in”, and FALSE to raise it. This action
 * causes the “toggled” signal and the “clicked” signal to be emitted.
 */
void toggle_button_set_active(char *setting);

/*
 * If the user has selected a range of elements (such as some text or
 * spreadsheet cells) that are affected by a toggle button, and the current
 * values in that range are inconsistent, you may want to display the toggle in
 * an “in between” state. This function turns on “in between” display. Normally
 * you would turn off the inconsistent state again if the user toggles the
 * toggle button. This has to be done manually,
 * gtk_toggle_button_set_inconsistent() only affects visual appearance, it
 * doesn’t affect the semantics of the button.
 */
void toggle_button_set_inconsistent(char *setting);
