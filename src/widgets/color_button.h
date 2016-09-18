/*
 * Creates a new color button.
 * This returns a widget in the form of a small button containing a swatch
 * representing the current selected color. When the button is clicked, a
 * color-selection dialog will open, allowing the user to select a color. The
 * swatch will be updated to reflect the new color when the user finishes.
 */
void color_button_new(char *widget);

/*
 *Creates a new color button.
 */
void color_button_new_with_rgba(char *widget, char *setting);

/* 
 * Sets the title for the color selection dialog.
 */
void color_button_set_title(char *setting);

