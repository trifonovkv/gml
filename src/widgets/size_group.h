/*
 * Create a new GtkSizeGroup.
 */
void size_group_new(char *widget);

/*
 * Sets the GtkSizeGroupMode of the size group. The mode of the size group
 * determines whether the widgets in the size group should all have the same
 * horizontal requisition (GTK_SIZE_GROUP_HORIZONTAL) all have the same
 * vertical requisition (GTK_SIZE_GROUP_VERTICAL), or should all have the same
 * requisition in both directions (GTK_SIZE_GROUP_BOTH).
 */
void size_group_set_mode(char *setting);

/*  
 * Adds a widget to a GtkSizeGroup. In the future, the requisition of the
 * widget will be determined as the maximum of its requisition and the
 * requisition of the other widgets in the size group. Whether this applies
 * horizontally, vertically, or in both directions depends on the mode of the
 * size group. See gtk_size_group_set_mode().
 * 
 * When the widget is destroyed or no longer referenced elsewhere, it will be
 * removed from the size group.
 */
void size_group_add_widget(char *setting);

