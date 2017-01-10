/*
 * Creates a new GtkTreeViewColumn.
 */
void tree_view_column_new(char *widget);

/*
 * Add cell renderer
 */
void tree_view_column_add_renderer(char *setting);

/*
 * Adds an attribute mapping to the list in tree_column . The column is the
 * column of the model to get a value from, and the attribute is the parameter
 * on cell_renderer to be set from the value. So for example if column 2 of the
 * model contains strings, you could have the “text” attribute of a
 * GtkCellRendererText get its values from column 2.
 */
void tree_view_column_add_attribute(char *cell_renderer
                                  , char *attribute
                                  , char *column);

/*  
 * Sets the spacing field of tree_column , which is the number of pixels to
 * place between cell renderers packed into it.
 */
void tree_view_column_set_spacing(char *setting);


/*  
 * Sets the visibility of tree_column.
 */
void tree_view_column_set_visible(char *setting);

/*  
 * If resizable is TRUE, then the user can explicitly resize the column by
 * grabbing the outer edge of the column button. If resizable is TRUE and
 * sizing mode of the column is GTK_TREE_VIEW_COLUMN_AUTOSIZE, then the sizing
 * mode is changed to GTK_TREE_VIEW_COLUMN_GROW_ONLY.
 */
void tree_view_column_set_resizable(char *setting);

/*  
 * Sets the growth behavior of tree_column to type.
 */
void tree_view_column_set_sizing(char *setting);

/*  
 * If fixed_width is not -1, sets the fixed width of tree_column; otherwise
 * unsets it. The effective value of fixed_width is clamped between the minimum
 * and maximum width of the column; however, the value stored in the
 * “fixed-width” property is not clamped. If the column sizing is
 * GTK_TREE_VIEW_COLUMN_GROW_ONLY or GTK_TREE_VIEW_COLUMN_AUTOSIZE, setting a
 * fixed width overrides the automatically calculated width. Note that
 * fixed_width is only a hint to GTK+; the width actually allocated to the
 * column may be greater or less than requested.
 * 
 * Along with “expand”, the “fixed-width” property changes when the column is
 * resized by the user.
 */
void tree_view_column_set_fixed_width(char *setting);

/*  
 * Sets the minimum width of the tree_column. If min_width is -1, then the
 * minimum width is unset.
 */
void tree_view_column_set_min_width(char *setting);

/*  
 * Sets the maximum width of the tree_column. If max_width is -1, then the
 * maximum width is unset. Note, the column can actually be wider than max
 * width if it’s the last column in a view. In this case, the column expands to
 * fill any extra space.
 */
void tree_view_column_set_max_width(char *setting);

/*  
 * Sets the title of the tree_column. If a custom widget has been set, then
 * this value is ignored.
 */
void tree_view_column_set_title(char *setting);

/*  
 * Sets the column to take available extra space. This space is shared equally
 * amongst all columns that have the expand set to TRUE. If no column has this
 * option set, then the last column gets all extra space. By default, every
 * column is created with this FALSE.
 * 
 * Along with “fixed-width”, the “expand” property changes when the column is
 * resized by the user.
 */
void tree_view_column_set_expand(char *setting);

/* 
 * Sets the header to be active if clickable is TRUE. When the header is
 * active, then it can take keyboard focus, and can be clicked.
 */
void tree_view_column_set_clickable(char *setting);

/*  
 * Sets the widget in the header to be widget. If widget is NULL, then the
 * header button is set with a GtkLabel set to the title of tree_column.
 */
void tree_view_column_set_widget(char *setting);

/* 
 * Sets the alignment of the title or custom widget inside the column header.
 * The alignment determines its location inside the button -- 0.0 for left, 0.5
 * for center, 1.0 for right.
 */
void tree_view_column_set_alignment(char *setting);

/*  
 * If reorderable is TRUE, then the column can be reordered by the end user
 * dragging the header.
 */
void tree_view_column_set_reorderable(char *setting);

/*  
 * Sets the logical sort_column_id that this column sorts on when this column
 * is selected for sorting. Doing so makes the column header clickable.
 */
void tree_view_column_set_sort_column_id(char *setting);

/*  
 * Call this function with a setting of TRUE to display an arrow in the header
 * button indicating the column is sorted. Call
 * gtk_tree_view_column_set_sort_order() to change the direction of the arrow.
 */
void tree_view_column_set_sort_indicator(char *setting);

/*  
 * Changes the appearance of the sort indicator.
 * 
 * This does not actually sort the model. Use
 * gtk_tree_view_column_set_sort_column_id() if you want automatic sorting
 * support. This function is primarily for custom sorting behavior, and should
 * be used in conjunction with gtk_tree_sortable_set_sort_column_id() to do
 * that. For custom models, the mechanism will vary.
 * 
 * The sort indicator changes direction to indicate normal sort or reverse
 * sort. Note that you must have the sort indicator enabled to see anything
 * when calling this function; see gtk_tree_view_column_set_sort_indicator().
 */
void tree_view_column_set_sort_order(char *setting);

