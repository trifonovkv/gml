/*
 * Packs the cell into the beginning of cell_layout . If expand is FALSE, then
 * the cell is allocated no more space than it needs. Any unused space is
 * divided evenly between cells for which expand is TRUE.
 * Note that reusing the same cell renderer is not supported.
 */
void cell_layout_pack_start(char *widget, char *setting);

/*
 * Adds the cell to the end of cell_layout . If expand is FALSE, then the cell
 * is allocated no more space than it needs. Any unused space is divided evenly
 * between cells for which expand is TRUE.
 * Note that reusing the same cell renderer is not supported.
 */
void cell_layout_pack_end(char *widget, char *setting);

/* 
 * Sets the attribute in list as the attributes of cell_layout.
 * All existing attribute are removed, and replaced with the new attribute.
 */
void cell_layout_set_attribute(char *widget, char *setting, char *column);

/* 
 * Adds an attribute mapping to the list in cell_layout.
 * The column is the column of the model to get a value from, and the attribute
 * is the parameter on cell to be set from the value. So for example if column
 * 2 of the model contains strings, you could have the “text” attribute of a
 * GtkCellRendererText get its values from column 2.
 */
void cell_layout_add_attribute(char *widget, char *setting, char *column);
