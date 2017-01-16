/*
 * Creates a new empty GtkComboBox.
 */
void combo_box_new(char *widget);

/*
 * Creates a new empty GtkComboBox with an entry.
 */
void combo_box_new_with_entry(char *widget);

/*
 * Add render into GtkComboBox
 */
void combo_box_add_renderer(char *setting);

/*
 * Sets the wrap width of combo_box to be width . The wrap width is basically
 * the preferred number of columns when you want the popup to be layed out in a
 * table.
 */
void combo_box_set_wrap_width(char *setting);

/* 
 * Sets the column with row span information for combo_box to be row_span . The
 * row span column contains integers which indicate how many rows an item
 * should span.
 */
void combo_box_set_row_span_column(char *setting);

/* 
 * Sets the column with column span information for combo_box to be column_span
 * . The column span column contains integers which indicate how many columns
 * an item should span.
 */
void combo_box_set_column_span_column(char *setting);

/* 
 * Sets the active item of combo_box to be the item at index .
 */
void combo_box_set_active(char *setting);

/* 
 * Sets the model column which combo_box should use to get string IDs for
 * values from. The column id_column in the model of combo_box must be of type
 * G_TYPE_STRING.
 */
void combo_box_set_id_column(char *setting);

/* 
 * Changes the active row of combo_box to the one that has an ID equal to
 * active_id , or unsets the active row if active_id is NULL. Rows having a
 * NULL ID string cannot be made active by this function.
 * 
 * If the “id-column” property of combo_box is unset or if no row has the given
 * ID then the function does nothing and returns FALSE.
 */
void combo_box_set_active_id(char *setting);

/* 
 * Sets the model used by combo_box to be model . Will unset a previously set
 * model (if applicable). If model is NULL, then it will unset the model.
 * 
 * Note that this function does not clear the cell renderers, you have to call
 * gtk_cell_layout_clear() yourself if you need to set up different cell
 * renderers for the new model.
 */
void combo_box_set_model(char *setting);

/* 
 * Sets whether the dropdown button of the combo box should be always sensitive
 * (GTK_SENSITIVITY_ON), never sensitive (GTK_SENSITIVITY_OFF) or only if there
 * is at least one item to display (GTK_SENSITIVITY_AUTO).
 */
void combo_box_set_button_sensitivity(char *setting);

/* 
 * Sets the model column which combo_box should use to get strings from to be
 * text_column. The column text_column in the model of combo_box must be of
 * type G_TYPE_STRING.
 * 
 * This is only relevant if combo_box has been created with “has-entry” as TRUE.
 */
void combo_box_set_entry_text_column(char *setting);

/* 
 * Specifies whether the popup’s width should be a fixed width matching the
 * allocated width of the combo box.
 */
void combo_box_set_popup_fixed_width(char *setting);
