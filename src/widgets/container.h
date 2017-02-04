/*
 * Adds widget to container . Typically used for simple containers such as
 * GtkWindow, GtkFrame, or GtkButton; for more complicated layout containers
 * such as GtkBox or GtkGrid, this function will pick default packing
 * parameters that may not be correct. So consider functions such as
 * gtk_box_pack_start() and gtk_grid_attach() as an alternative to
 * gtk_container_add() in those cases. A widget may be added to only one
 * container at a time; you can’t place the same widget inside two different
 * containers.
 * 
 * Note that some containers, such as GtkScrolledWindow or GtkListBox, may add
 * intermediate children between the added widget and the container.
 */
void container_add(char *widget);

/*
 * Hooks up an adjustment to focus handling in a container, so when a child of
 * the container is focused, the adjustment is scrolled to show that widget.
 * This function sets the vertical alignment. See
 * gtk_scrolled_window_get_vadjustment() for a typical way of obtaining the
 * adjustment and gtk_container_set_focus_hadjustment() for setting the
 * horizontal adjustment.
 * 
 * The adjustments have to be in pixel units and in the same coordinate system
 * as the allocation for immediate children of the container.
 */
void container_set_focus_vadjustment(char *setting);

/*
 * Hooks up an adjustment to focus handling in a container, so when a child of
 * the container is focused, the adjustment is scrolled to show that widget.
 * This function sets the horizontal alignment. See
 * gtk_scrolled_window_get_hadjustment() for a typical way of obtaining the
 * adjustment and gtk_container_set_focus_vadjustment() for setting the
 * vertical adjustment.
 * 
 * The adjustments have to be in pixel units and in the same coordinate system
 * as the allocation for immediate children of the container.
 */
void container_set_focus_hadjustment(char *setting);

/* 
 * Sets the border width of the container.
 * 
 * The border width of a container is the amount of space to leave around the
 * outside of the container. The only exception to this is GtkWindow; because
 * toplevel windows can’t leave space outside, they leave the space inside. The
 * border is added on all sides of the container. To add space to only one
 * side, use a specific “margin” property on the child widget, for example
 * “margin-top”.
 */
void container_set_border_width(char *setting);

/*
 * Sets a child property for child and container.
 */
void container_child_set_property(char *child, char *name, char *value);

