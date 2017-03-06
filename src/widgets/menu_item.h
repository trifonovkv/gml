/*
 * Creates a new GtkMenuItem.
 */
void menu_item_new(char *widget);

/*
 * Creates a new GtkMenuItem containing a label.
 */
void menu_item_new_with_mnemonic(char *widget, char *setting);

/* 
 * Sets text on the menu_item label
 */
void menu_item_set_label(char *setting);

/* 
 * If true, an underline in the text indicates the next character should be
 * used for the mnemonic accelerator key.
 */
void menu_item_set_use_underline(char *setting);

/* 
 * Sets or replaces the menu item’s submenu, or removes it when a NULL submenu
 * is passed.
 */
void menu_item_set_submenu(char *setting);

/*
 * Set the accelerator path on menu_item , through which runtime changes of the
 * menu item’s accelerator caused by the user can be identified and saved to
 * persistent storage (see gtk_accel_map_save() on this). To set up a default
 * accelerator for this menu item, call gtk_accel_map_add_entry() with the same
 * accel_path . See also gtk_accel_map_add_entry() on the specifics of
 * accelerator paths, and gtk_menu_set_accel_path() for a more convenient
 * variant of this function.
 * 
 * This function is basically a convenience wrapper that handles calling
 * gtk_widget_set_accel_path() with the appropriate accelerator group for the
 * menu item.
 * 
 * Note that you do need to set an accelerator on the parent menu with
 * gtk_menu_set_accel_group() for this to work.
 * 
 * Note that accel_path string will be stored in a GQuark. Therefore, if you
 * pass a static string, you can save some memory by interning it first with
 * g_intern_static_string().
 */
void menu_item_set_accel_path(char *setting);

/*  
 * Sets whether the menu_item should reserve space for the submenu indicator,
 * regardless if it actually has a submenu or not.
 * 
 * There should be little need for applications to call this functions.
 */
void menu_item_set_reserve_indicator(char *setting);

