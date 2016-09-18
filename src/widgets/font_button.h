/*
 * Creates a new font picker widget.
 */
void font_button_new(char *widget);

/* 
 * Sets or updates the currently-displayed font in font picker dialog.
 */
void font_button_set_font_name(char *setting);

/* 
 * If show_style is TRUE, the font style will be displayed along with name of
 * the selected font.
 */
void font_button_set_show_style(char *setting);

/* 
 * If show_size is TRUE, the font size will be displayed along with the name of
 * the selected font.
 */
void font_button_set_show_size(char *setting);

/* 
 * If use_font is TRUE, the font name will be written using the selected font.
 */
void font_button_set_use_font(char *setting);

/* 
 * If use_size is TRUE, the font name will be written using the selected size.
 */
void font_button_set_use_size(char *setting);

/* 
 * Sets the title for the font chooser dialog.
 */
void font_button_set_title(char *setting);

