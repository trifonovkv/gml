/*
 * Creates a new GtkRadioMenuItem.
 */
void radio_menu_item_new(char *widget);

/*
 * Creates a new GtkRadioMenuItem whose child is a simple GtkLabel.
 */
void radio_menu_item_new_with_label(char *widget, char *setting);

/* 
 * Creates a new GtkRadioMenuItem containing a label. The label will be created
 * using gtk_label_new_with_mnemonic(), so underscores in label indicate the
 * mnemonic for the menu item.
 */
void radio_menu_item_new_with_mnemonic(char *widget, char *setting);

/*
 * Joins a GtkRadioMenuItem object to the group of another GtkRadioMenuItem
 * object.
 * 
 * This function should be used by language bindings to avoid the memory
 * manangement of the opaque GSList of gtk_radio_menu_item_get_group() and
 * gtk_radio_menu_item_set_group().
 * 
 * A common way to set up a group of GtkRadioMenuItem instances is:
 */
void radio_menu_item_join_group(char *setting);

