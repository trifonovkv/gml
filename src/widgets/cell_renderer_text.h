/*
 * Creates a new GtkCellRendererText. Adjust how text is drawn using object
 * properties. Object properties can be set globally (with g_object_set()).
 * Also, with GtkTreeViewColumn, you can bind a property to a value in a
 * GtkTreeModel. For example, you can bind the “text” property on the cell
 * renderer to a string value in the model, thus rendering a different string
 * in each row of the GtkTreeView
 */
void cell_renderer_text_new(char *widget);

/*
 * Sets the height of a renderer to explicitly be determined by the “font” and
 * “y_pad” property set on it. Further changes in these properties do not
 * affect the height, so they must be accompanied by a subsequent call to this
 * function. Using this function is unflexible, and should really only be used
 * if calculating the size of a cell is too slow (ie, a massive number of cells
 * displayed). If number_of_rows is -1, then the fixed height is unset, and the
 * height is determined by the properties again.
 */
void cell_renderer_text_set_fixed_height_from_font(char *setting);

