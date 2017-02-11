/*
 * Creates a new GtkListBox container.
 */
void list_box_new(char *widget);

/* 
 * Sets how selection works in the listbox. See GtkSelectionMode for details.
 */
void list_box_set_selection_mode(char *setting);

/* 
 * If single is TRUE, rows will be activated when you click on them, otherwise
 * you need to double-click.
 */
void list_box_set_activate_on_single_click(char *setting);

/* 
 * Sets the adjustment (if any) that the widget uses to for vertical scrolling.
 * For instance, this is used to get the page size for PageUp/Down key
 * handling.
 * 
 * In the normal case when the box is packed inside a GtkScrolledWindow the
 * adjustment from that will be picked up automatically, so there is no need to
 * manually do that.
 */
void list_box_set_adjustment(char *setting);

/* 
 * Sets the placeholder widget that is shown in the list when it doesn't
 * display any visible children.
 */
void list_box_set_placeholder(char *setting);

/*
 * By setting a header function on the box one can dynamically add headers in
 * front of rows, depending on the contents of the row and its position in
 * the list. For instance, one could use it to add headers in front of the
 * first item of a new kind, in a list sorted by the kind.
 * 
 * The update_header can look at the current header widget using
 * gtk_list_box_row_get_header() and either update the state of the widget as
 * needed, or set a new one using gtk_list_box_row_set_header(). If no header
 * is needed, set the header to NULL.
 * 
 * Note that you may get many calls update_header to this for a particular
 * row when e.g. changing things that don’t affect the header. In this case
 * it is important for performance to not blindly replace an existing header
 * with an identical one.
 * 
 * The update_header function will be called for each row after the call, and
 * it will continue to be called each time a row changes (via
 * gtk_list_box_row_changed()) and when the row before changes (either by
 * gtk_list_box_row_changed() on the previous row, or when the previous row
 * becomes a different row). It is also called for all rows when
 * gtk_list_box_invalidate_headers() is called.
 */
void list_box_set_header_func(char *update_header
                            , char *user_data
                            , char *destroy);

/* 
 * Creates a new GtkListBoxRow, to be used as a child of a GtkListBox.
 */
void list_box_row_new(char *setting);

/* 
 * Sets the current header of the row . This is only allowed to be called from
 * a GtkListBoxUpdateHeaderFunc. It will replace any existing header in the
 * row, and be shown in front of the row in the listbox.
 */
void list_box_row_set_header(char *setting);

/* 
 * Set the “activatable” property for this row.
 */
void list_box_row_set_activatable(char *setting);

/* 
 * Set the “selectable” property for this row.
 */
void list_box_row_set_selectable(char *setting);

