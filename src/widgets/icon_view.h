/*
 * Creates a new GtkIconView widget
 */
void icon_view_new(char *widget);

/*
 * Creates a new GtkIconView widget using the specified area to layout cells
 * inside the icons.
 */
void icon_view_new_with_area(char *widget, char *setting);

/*
 * Sets the model for a GtkIconView. If the icon_view already has a model set,
 * it will remove it before setting the new model. If model is NULL, then it
 * will unset the old model.
 */
void icon_view_set_model(char *setting);

/*
 * Sets the column with text for icon_view to be column. The text column must
 * be of type G_TYPE_STRING.
 */
void icon_view_set_text_column(char *setting);

/*
 * Sets the column with markup information for icon_view to be column . The
 * markup column must be of type G_TYPE_STRING. If the markup column is set to
 * something, it overrides the text column set by
 * gtk_icon_view_set_text_column().
 */
void icon_view_set_markup_column(char *setting);

/*
 * Sets the column with pixbufs for icon_view to be column . The pixbuf column
 * must be of type GDK_TYPE_PIXBUF
 */
void icon_view_set_pixbuf_column(char *setting);

/*
 * Sets the selection mode of the icon_view .
 */
void icon_view_set_selection_mode(char *setting);

/*
 * Sets the ::item-orientation property which determines whether the labels are
 * drawn beside the icons instead of below.
 */
void icon_view_set_item_orientation(char *setting);

/*
 * Sets the ::columns property which determines in how many columns the icons
 * are arranged. If columns is -1, the number of columns will be chosen
 * automatically to fill the available area.
 */
void icon_view_set_columns(char *setting);

/*
 * Sets the ::item-width property which specifies the width to use for each
 * item. If it is set to -1, the icon view will automatically determine a
 * suitable item size.
 */
void icon_view_set_item_width(char *setting);

/*
 * Sets the ::spacing property which specifies the space which is inserted
 * between the cells (i.e. the icon and the text) of an item.
 */
void icon_view_set_spacing(char *setting);

/*
 * Sets the ::row-spacing property which specifies the space which is inserted
 * between the rows of the icon view.
 */
void icon_view_set_row_spacing(char *setting);

/*
 * Sets the ::column-spacing property which specifies the space which is
 * inserted between the columns of the icon view.
 */
void icon_view_set_column_spacing(char *setting);

/*
 * Sets the ::margin property which specifies the space which is inserted at
 * the top, bottom, left and right of the icon view.
 */
void icon_view_set_margin(char *setting);

/*
 * Sets the “item-padding” property which specifies the padding around each of
 * the icon view’s items.
 */
void icon_view_set_item_padding(char *setting);

/*
 * Causes the “item-activated” signal to be emitted on a single click instead
 * of a double click.
 */
void icon_view_set_activate_on_single_click(char *setting);

/*
 * If you only plan to have simple (text-only) tooltips on full items, you can
 * use this function to have GtkIconView handle these automatically for you.
 * column should be set to the column in icon_view ’s model containing the
 * tooltip texts, or -1 to disable this feature.
 * 
 * When enabled, “has-tooltip” will be set to TRUE and icon_view will connect a
 * “query-tooltip” signal handler.
 * 
 * Note that the signal handler sets the text with gtk_tooltip_set_markup(), so
 * &, <, etc have to be escaped in the text.
 */
void icon_view_set_tooltip_column(char *setting);

/*
 * This function is a convenience function to allow you to reorder models that
 * support the GtkTreeDragSourceIface and the GtkTreeDragDestIface. Both
 * GtkTreeStore and GtkListStore support these. If reorderable is TRUE, then
 * the user can reorder the model by dragging and dropping rows. The developer
 * can listen to these changes by connecting to the model's row_inserted and
 * row_deleted signals. The reordering is implemented by setting up the icon
 * view as a drag source and destination. Therefore, drag and drop can not be
 * used in a reorderable view for any other purpose.
 * 
 * This function does not give you any degree of control over the order -- any
 * reordering is allowed. If more control is needed, you should probably handle
 * drag and drop manually.
 */
void icon_view_set_reorderable(char *setting);

