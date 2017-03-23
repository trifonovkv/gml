/*
 * Creates a new GtkApplication instance.
 */
void application_new(char *widget, char *application_id, char *flags);

/* 
 * Adds a window to application.
 */
void application_add_window(char *setting);

/* 
 * Sets or unsets the application menu for application.
 */
void application_set_app_menu(char *setting);

/* 
 * Sets or unsets the menubar for windows of application.
 * This is a menubar in the traditional sense.
 */
void application_set_menubar(char *setting);

/* 
 * Sets zero or more keyboard accelerators that will trigger the given action.
 * The first item in accels will be the primary accelerator, which may be
 * displayed in the UI.
 */
void application_set_accels_for_action(char *detailed_action_name, 
                                       char *accels);
