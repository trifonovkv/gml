/*
 * Creates a new GtkPaned widget.
 */
void paned_new(char *widget, char *setting);

/*  
 * Adds a child to the top or left pane.
 */
void paned_pack1(char *child, char *resize, char *shrink);

/*  
 * Adds a child to the bottom or right pane.
 */
void paned_pack2(char *child, char *resize, char *shrink);

/*  
 * Sets the position of the divider between the two panes.
 */
void paned_set_position(char *setting);

/*  
 * Sets the “wide-handle” property.
 */
void paned_set_wide_handle(char *setting);

