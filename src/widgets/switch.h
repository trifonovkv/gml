/*
 * Creates a new GtkSwitch widget.
 */
void switch_new(char *widget);

/* 
 * Changes the state of sw to the desired one.
 */
void switch_set_active(char *setting);

/* 
 * Sets the underlying state of the GtkSwitch.
 * Normally, this is the same as “active”, unless the switch is set up for
 * delayed state changes. This function is typically called from a “state-set”
 * signal handler.
 */
void switch_set_state(char *setting);

