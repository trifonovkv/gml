/*
 * Creates a new GtkMenuBar
 */
void menu_bar_new(char *widget);

/*
 * Creates a new GtkMenuBar and populates it with menu items and submenus
 * according to model.
 * 
 * The created menu items are connected to actions found in the
 * GtkApplicationWindow to which the menu bar belongs - typically by means of
 * being contained within the GtkApplicationWindows widget hierarchy.
 */
void menu_bar_new_from_model(char *widget, char *setting);

/* 
 * Sets how items should be packed inside a menubar.
 */
void menu_bar_set_pack_direction(char *setting);

/* 
 * Sets how widgets should be packed inside the children of a menubar.
 */
void menu_bar_set_child_pack_direction(char *setting);

