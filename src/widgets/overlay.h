/*
 * Creates a new GtkOverlay.
 */
void overlay_new(char *widget);

/* 
 * Adds widget to overlay.
 * 
 * The widget will be stacked on top of the main widget added with
 * gtk_container_add().
 * 
 * The position at which widget is placed is determined from its “halign” and
 * “valign” properties.
 */
void overlay_add_overlay(char *setting);

/*
 * Convenience function to set the value of the “pass-through” child property
 * for widget.
 */
void overlay_set_overlay_pass_through(char *child, char *pass_through);

