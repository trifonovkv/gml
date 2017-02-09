/*
 * Creates a new GtkActionBar widget.
 */
void action_bar_new(char *widget);

/*
 * Adds child to action_bar, packed with reference to the start of the
 * action_bar.
 */
void action_bar_pack_start(char *setting);

/* 
 * Adds child to action_bar, packed with reference to the end of the action_bar.
 */
void action_bar_pack_end(char *setting);

/* 
 * Sets the center widget for the GtkActionBar.
 */
void action_bar_set_center_widget(char *setting);

