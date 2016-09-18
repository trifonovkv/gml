/* 
 * Creates a new button containing an icon from the current icon theme.
 * 
 * If the icon name isn’t known, a “broken image” icon will be displayed
 * instead. If the current icon theme is changed, the icon will be updated
 * appropriately.
 * 
 * This function is a convenience wrapper around gtk_button_new() and
 * gtk_button_set_image().
 */
void button_new_from_icon_name(char *widget, char *icon_name, char *size);

/*
 * Creates a new GtkButton widget. To add a child widget to the button, 
 * use gtk_container_add().
 */
void button_new(char *setting);

/*
 * Sets the relief style of the edges of the given GtkButton widget. Two styles 
 * exist, GTK_RELIEF_NORMAL and GTK_RELIEF_NONE. The default style is, as one 
 * can guess, GTK_RELIEF_NORMAL. The deprecated value GTK_RELIEF_HALF behaves 
 * the same as GTK_RELIEF_NORMAL.
 */
void button_set_relief(char *setting);

/* 
 * Sets the text of the label of the button to str . This text is also used 
 * to select the stock item if gtk_button_set_use_stock() is used.
 * 
 * This will also clear any previously set labels.
 */
void button_set_label(char *setting);

/* 
 * If true, an underline in the text of the button label indicates the next 
 * character should be used for the mnemonic accelerator key.
 */
void button_set_use_underline(char *setting);

/* 
 * Set the image of button to the given widget. The image will be displayed if 
 * the label text is NULL or if “always-show-image” is TRUE. You don’t have to 
 * call gtk_widget_show() on image yourself.
 */
void button_set_image(char *setting);

/* 
 * Sets the position of the image relative to the text inside the button.
 */
void button_set_image_position(char *setting);

/* 
 * If TRUE, the button will ignore the “gtk-button-images” setting and always 
 * show the image, if available.
 * 
 * Use this property if the button would be useless or hard to use without 
 * the image.
 */
void button_set_always_show_image(char *setting);
