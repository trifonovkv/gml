/*
 * Creates a new GtkCheckMenuItem.
 */
void check_menu_item_new(char *widget);

/* 
 * Creates a new GtkCheckMenuItem with a label.
 */
void check_menu_item_new_with_label(char *widget, char *setting);

/* 
 * Creates a new GtkCheckMenuItem containing a label. The label will be created
 * using gtk_label_new_with_mnemonic(), so underscores in label indicate the
 * mnemonic for the menu item.
 */
void check_menu_item_new_with_mnemonic(char *widget, char *setting);

/* 
 * Sets the active state of the menu item’s check box.
 */
void check_menu_item_set_active(char *setting);

/*  
 * If the user has selected a range of elements (such as some text or
 * spreadsheet cells) that are affected by a boolean setting, and the current
 * values in that range are inconsistent, you may want to display the check in
 * an “in between” state. This function turns on “in between” display. Normally
 * you would turn off the inconsistent state again if the user explicitly
 * selects a setting. This has to be done manually,
 * gtk_check_menu_item_set_inconsistent() only affects visual appearance, it
 * doesn’t affect the semantics of the widget.
 */
void check_menu_item_set_inconsistent(char *setting);

/*  
 * Sets whether check_menu_item is drawn like a GtkRadioMenuItem
 */
void check_menu_item_set_draw_as_radio(char *setting);

