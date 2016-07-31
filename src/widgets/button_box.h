/*
 * Creates a new horizontal GtkButtonBox.
 */
void hbutton_box_new(char *widget);

/*
 * Creates a new vertical GtkButtonBox.
 */
void vbutton_box_new(char *widget);

/* 
 * Changes the way buttons are arranged in their container.
 */
void button_box_set_layout(char *setting);

/* 
 * Sets whether child should appear in a secondary group of children. A typical
 * use of a secondary child is the help button in a dialog.
 * 
 * This group appears after the other children if the style is
 * GTK_BUTTONBOX_START, GTK_BUTTONBOX_SPREAD or GTK_BUTTONBOX_EDGE, and before
 * the other children if the style is GTK_BUTTONBOX_END. For horizontal button
 * boxes, the definition of before/after depends on direction of the widget
 * (see gtk_widget_set_direction()). If the style is GTK_BUTTONBOX_START or
 * GTK_BUTTONBOX_END, then the secondary children are aligned at the other end
 * of the button box from the main children. For the other styles, they appear
 * immediately next to the main children.
 */
void button_box_set_child_secondary(char *child, char *setting);

/* 
 * Sets whether the child is exempted from homogeous sizing.
 */ 
void button_box_set_child_non_homogeneous(char *child, char *setting);
