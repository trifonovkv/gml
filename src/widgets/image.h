/* 
 * Creates a new empty GtkImage widget.
 */
void image_new(char *widget);

/* 
 * Creates a new GtkImage displaying the file filename . If the file isn’t
 * found or can’t be loaded, the resulting GtkImage will display a “broken
 * image” icon. This function never returns NULL, it always returns a valid
 * GtkImage widget.
 */
void image_set_from_file(char *setting);

/*  
 * Creates a GtkImage displaying an icon from the current icon theme. If the
 * icon name isn’t known, a “broken image” icon will be displayed instead. If
 * the current icon theme is changed, the icon will be updated appropriately.
 */
void image_set_from_icon_name(char *icon_name, char *size);

/* 
 * Creates a new GtkImage displaying the resource file resource_path . If the
 * file isn’t found or can’t be loaded, the resulting GtkImage will display a
 * “broken image” icon. This function never returns NULL, it always returns a
 * valid GtkImage widget.
 */
void image_set_from_resource(char *setting);

/* 
 * Sets the pixel size to use for named icons. If the pixel size is set to a
 * value != -1, it is used instead of the icon size set by
 * gtk_image_set_from_icon_name().
 */
void image_set_pixel_size(char *setting);

