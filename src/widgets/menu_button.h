/*
 * Creates a new GtkMenuButton widget with downwards-pointing arrow as the only
 * child. You can replace the child widget with another GtkWidget should you
 * wish to.
 */
void menu_button_new(char *widget);

/* 
 * Sets the GtkMenu that will be popped up when the button is clicked, or NULL
 * to disable the button. If “menu-model” or “popover” are set, they will be
 * set to NULL.
 */
void menu_button_set_popup(char *setting);

/* 
 * Sets the GtkPopover that will be popped up when the button is clicked, or
 * NULL to disable the button. If “menu-model” or “popup” are set, they will be
 * set to NULL.
 */
void menu_button_set_popover(char *setting);

/* 
 * Sets the GMenuModel from which the popup will be constructed, or NULL to
 * disable the button.
 * 
 * Depending on the value of “use-popover”, either a GtkMenu will be created
 * with gtk_menu_new_from_model(), or a GtkPopover with
 * gtk_popover_new_from_model(). In either case, actions will be connected as
 * documented for these functions.
 * 
 * If “popup” or “popover” are already set, their content will be lost and
 * replaced by the newly created popup.
 */
void menu_button_set_menu_model(char *setting);

/* 
 * Sets whether to construct a GtkPopover instead of GtkMenu when
 * gtk_menu_button_set_menu_model() is called. Note that this property is only
 * consulted when a new menu model is set.
 */
void menu_button_set_use_popover(char *setting);

/* 
 * Sets the direction in which the popup will be popped up, as well as changing
 * the arrow’s direction. The child will not be changed to an arrow if it was
 * customized.
 * 
 * If the does not fit in the available space in the given direction, GTK+ will
 * its best to keep it inside the screen and fully visible.
 * 
 * If you pass GTK_ARROW_NONE for a direction , the popup will behave as if you
 * passed GTK_ARROW_DOWN (although you won’t see any arrows).
 */
void menu_button_set_direction(char *setting);

/* 
 * Sets the GtkWidget to use to line the menu with when popped up. Note that
 * the align_widget must contain the GtkMenuButton itself.
 * 
 * Setting it to NULL means that the menu will be aligned with the button
 * itself.
 * 
 * Note that this property is only used with menus currently, and not for
 * popovers.
 */
void menu_button_set_align_widget(char *setting);

