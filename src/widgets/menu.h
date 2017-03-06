/*
 * Creates a new GtkMenu
 */
void menu_new(char *widget);

/* 
 * Creates a GtkMenu and populates it with menu items and submenus according to
 * model.
 * 
 * The created menu items are connected to actions found in the
 * GtkApplicationWindow to which the menu belongs - typically by means of being
 * attached to a widget (see gtk_menu_attach_to_widget()) that is contained
 * within the GtkApplicationWindows widget hierarchy.
 * 
 * Actions can also be added using gtk_widget_insert_action_group() on the
 * menu's attach widget or on any of its parent widgets.
 */
void menu_new_from_model(char *widget, char *setting);

/* 
 * Sets the GdkScreen on which the menu will be displayed.
 */
void menu_set_screen(char *setting);

/*  
 * Adds a new GtkMenuItem to a (table) menu. The number of “cells” that an item
 * will occupy is specified by left_attach , right_attach , top_attach and
 * bottom_attach . These each represent the leftmost, rightmost, uppermost and
 * lower column and row numbers of the table. (Columns and rows are indexed
 * from zero).
 * 
 * Note that this function is not related to gtk_menu_detach().
 */
void menu_attach(char *child, char *left, char *right, char *top, char *bottom);

/* 
 * Set the GtkAccelGroup which holds global accelerators for the menu. This
 * accelerator group needs to also be added to all windows that this menu is
 * being used in with gtk_window_add_accel_group(), in order for those windows
 * to support all the accelerators contained in this group.
 */
void menu_set_accel_group(char *setting);

/* 
 * Sets an accelerator path for this menu from which accelerator paths for its
 * immediate children, its menu items, can be constructed. The main purpose of
 * this function is to spare the programmer the inconvenience of having to call
 * gtk_menu_item_set_accel_path() on each menu item that should support runtime
 * user changable accelerators. Instead, by just calling
 * gtk_menu_set_accel_path() on their parent, each menu item of this menu, that
 * contains a label describing its purpose, automatically gets an accel path
 * assigned.
 *
 * Assigning accel paths to menu items then enables the user to change their
 * accelerators at runtime. More details about accelerator paths and their
 * default setups can be found at gtk_accel_map_add_entry().
 * 
 * Note that accel_path string will be stored in a GQuark. Therefore, if you
 * pass a static string, you can save some memory by interning it first with
 * g_intern_static_string().
 */
void menu_set_accel_path(char *setting);

/*
 * Informs GTK+ on which monitor a menu should be popped up. See
 * gdk_monitor_get_geometry().
 * 
 * This function should be called from a GtkMenuPositionFunc if the menu should
 * not appear on the same monitor as the pointer. This information can’t be
 * reliably inferred from the coordinates returned by a GtkMenuPositionFunc,
 * since, for very long menus, these coordinates may extend beyond the monitor
 * boundaries or even the screen boundaries.
 */
void menu_set_monitor(char *setting);

/*
 * Sets whether the menu should reserve space for drawing toggles or icons,
 * regardless of their actual presence.
 */
void menu_set_reserve_toggle_size(char *setting);

/*  
 * Selects the specified menu item within the menu. This is used by the
 * GtkComboBox and should not be used by anyone else.
 */
void menu_set_active(char *setting);

/*
 * Attaches the menu to the widget and provides a callback function that will
 * be invoked when the menu calls gtk_menu_detach() during its destruction.
 * 
 * If the menu is attached to the widget then it will be destroyed when the
 * widget is destroyed, as if it was a child widget. An attached menu will also
 * move between screens correctly if the widgets moves between screens.
 */
void menu_attach_to_widget(char *attach_widget, char *detacher);

