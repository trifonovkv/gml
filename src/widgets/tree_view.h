/*
 * Creates a new GtkTreeView widget.
 */
void tree_view_new(char *widget);

/*
 * Sets the amount of extra indentation for child levels to use in tree_view in
 * addition to the default indentation. The value should be specified in
 * pixels, a value of 0 disables this feature and in this case only the default
 * indentation will be used. This does not have any visible effects for lists.
 */
void tree_view_set_level_indentation(char *setting);

/* 
 * Sets whether to draw and enable expanders and indent child rows in tree_view.
 * When disabled there will be no expanders visible in trees and there will be
 * no way to expand and collapse rows by default. Also note that hiding the
 * expanders will disable the default indentation. You can set a custom
 * indentation in this case using gtk_tree_view_set_level_indentation(). This
 * does not have any visible effects for lists.
 */
void tree_view_set_show_expanders(char *setting);

/* 
 * Sets the model for a GtkTreeView. If the tree_view already has a model set,
 * it will remove it before setting the new model. If model is NULL, then it
 * will unset the old model.
 */
void tree_view_set_model(char *setting);

/* 
 * Sets the visibility state of the headers.
 */
void tree_view_set_headers_visible(char *setting);

/*  
 * Resizes all columns to their optimal width. Only works after the treeview
 * has been realized.
 */
/*
 *void tree_view_columns_autosize(char *setting);
 */

/*  
 * Allow the column title buttons to be clicked.
 */
void tree_view_set_headers_clickable(char *setting);

/*  
 * Cause the “row-activated” signal to be emitted on a single click instead of
 * a double click.
 */
void tree_view_set_activate_on_single_click(char *setting);

/* 
 * Sets the column to draw the expander arrow at. It must be in tree_view. If
 * column is NULL, then the expander arrow is always at the first visible
 * column.
 * If you do not want expander arrow to appear in your tree, set the expander
 * column to a hidden column.
 */
void tree_view_set_expander_column(char *setting);

/*  
 * Sets a user function for determining where a column may be dropped when
 * dragged. This function is called on every column pair in turn at the
 * beginning of a column drag to determine where a drop can take place. The
 * arguments passed to func are: the tree_view , the GtkTreeViewColumn being
 * dragged, the two GtkTreeViewColumn s determining the drop spot, and
 * user_data . If either of the GtkTreeViewColumn arguments for the drop spot
 * are NULL, then they indicate an edge. If func is set to be NULL, then
 * tree_view reverts to the default behavior of allowing all columns to be
 * dropped everywhere.
 * 
 * func       A function to determine which columns are reorderable, or NULL.
 * user_data  User data to be passed to func, or NULL.
 * destroy    Destroy notifier for user_data, or NULL.
 */
/*
 *void tree_view_set_column_drag_function(char *func
 *                                      , char *user_data
 *                                      , char *destroy);
 */

/*
 * Scrolls the tree view such that the top-left corner of the visible area is
 * tree_x , tree_y , where tree_x and tree_y are specified in tree coordinates.
 * The tree_view must be realized before this function is called. If it isn't,
 * you probably want to be using gtk_tree_view_scroll_to_cell().
 * If either tree_x or tree_y are -1, then that direction isn’t scrolled.
 * 
 * tree_x   X coordinate of new top-left pixel of visible area, or -1
 * tree_y   Y coordinate of new top-left pixel of visible area, or -1
 */
/*
 *void tree_view_scroll_to_point(char *tree_x, char *tree_y);
 */

/*  
 * Moves the alignments of tree_view to the position specified by column and
 * path . If column is NULL, then no horizontal scrolling occurs. Likewise, if
 * path is NULL no vertical scrolling occurs. At a minimum, one of column or
 * path need to be non-NULL. row_align determines where the row is placed, and
 * col_align determines where column is placed. Both are expected to be between
 * 0.0 and 1.0. 0.0 means left/top alignment, 1.0 means right/bottom alignment,
 * 0.5 means center.
 * 
 * If use_align is FALSE, then the alignment arguments are ignored, and the
 * tree does the minimum amount of work to scroll the cell onto the screen.
 * This means that the cell will be scrolled to the edge closest to its current
 * position. If the cell is currently visible on the screen, nothing is done.
 * 
 * This function only works if the model is set, and path is a valid row on the
 * model. If the model changes before the tree_view is realized, the centered
 * path will be modified to reflect this change.
 * 
 * path       The path of the row to move to, or NULL.
 * column     The GtkTreeViewColumn to move horizontally to, or NULL.
 * use_align  whether to use alignment arguments, or FALSE.
 * row_align  The vertical alignment of the row specified by path.
 * col_align  The horizontal alignment of the column specified by column.
 */
/*
 *void tree_view_scroll_to_cell(char *path
 *                            , char *column
 *                            , char *use_align
 *                            , char *row_align
 *                            , char *col_align);
 */

/*  
 * Sets the current keyboard focus to be at path , and selects it. This is
 * useful when you want to focus the user’s attention on a particular row. If
 * focus_column is not NULL, then focus is given to the column specified by it.
 * Additionally, if focus_column is specified, and start_editing is TRUE, then
 * editing should be started in the specified cell. This function is often
 * followed by gtk_widget_grab_focus (tree_view ) in order to give keyboard
 * focus to the widget. Please note that editing can only happen when the
 * widget is realized.
 * 
 * If path is invalid for model , the current cursor (if any) will be unset and
 * the function will return without failing.
 * 
 * path             A GtkTreePath
 * focus_column     A GtkTreeViewColumn, or NULL.
 * start_editing    TRUE if the specified cell should start being edited.
 */
/*
 *void tree_view_set_cursor(char *path, char *focus_column, char *start_editing);
 */


/*  
 * Sets the current keyboard focus to be at path , and selects it. This is
 * useful when you want to focus the user’s attention on a particular row. If
 * focus_column is not NULL, then focus is given to the column specified by it.
 * If focus_column and focus_cell are not NULL, and focus_column contains 2 or
 * more editable or activatable cells, then focus is given to the cell
 * specified by focus_cell . Additionally, if focus_column is specified, and
 * start_editing is TRUE, then editing should be started in the specified cell.
 * This function is often followed by gtk_widget_grab_focus (tree_view ) in
 * order to give keyboard focus to the widget. Please note that editing can
 * only happen when the widget is realized.
 * 
 * If path is invalid for model , the current cursor (if any) will be unset and
 * the function will return without failing.
 * 
 * path             A GtkTreePath
 * focus_column     A GtkTreeViewColumn, or NULL.
 * focus_cell       A GtkCellRenderer, or NULL.
 * start_editing    TRUE if the specified cell should start being edited.
 */
/*
 *void tree_view_set_cursor_on_cell(char *path
 *                                , char *focus_column
 *                                , char *focus_cell
 *                                , char *start_editing);
 */

/* 
 * Activates the cell determined by path and column.
 * 
 * path     The GtkTreePath to be activated.
 * column   The GtkTreeViewColumn to be activated.
 */
/*
 *void tree_view_row_activated(char *path, char *column);
 */

/*  
 * Recursively expands all nodes in the tree_view.
 */
/*
 *void tree_view_expand_all(char *setting);
 */

/*  
 * Recursively collapses all visible, expanded nodes in tree_view.
 */
/*
 *void tree_view_collapse_all(char *setting);
 */

/*  
 * Expands the row at path . This will also expand all parent rows of path as
 * necessary.
 */
/*
 *void tree_view_expand_to_path(char *setting);
 */

/* 
 * Calls func on all expanded rows.
 * func   A function to be called.
 * data   User data to be passed to the function.
 */
/*
 *void tree_view_map_expanded_rows(char *func, char *data);
 */

/* 
 * This function is a convenience function to allow you to reorder models that
 * support the GtkTreeDragSourceIface and the GtkTreeDragDestIface. Both
 * GtkTreeStore and GtkListStore support these. If reorderable is TRUE, then
 * the user can reorder the model by dragging and dropping rows. The developer
 * can listen to these changes by connecting to the model’s “row-inserted” and
 * “row-deleted” signals. The reordering is implemented by setting up the tree
 * view as a drag source and destination. Therefore, drag and drop can not be
 * used in a reorderable view for any other purpose.
 * 
 * This function does not give you any degree of control over the order -- any
 * reordering is allowed. If more control is needed, you should probably handle
 * drag and drop manually.
 */
void tree_view_set_reorderable(char *setting);

/* 
 * If enable_search is set, then the user can type in text to search through
 * the tree interactively (this is sometimes called "typeahead find").
 * 
 * Note that even if this is FALSE, the user can still initiate a search using
 * the “start-interactive-search” key binding.
 */
void tree_view_set_enable_search(char *setting);

/* 
 * Sets column as the column where the interactive search code should search in
 * for the current model.
 * 
 * If the search column is set, users can use the “start-interactive-search”
 * key binding to bring up search popup. The enable-search property controls
 * whether simply typing text will also start an interactive search.
 * 
 * Note that column refers to a column of the current model. The search column
 * is reset to -1 when the model is changed.
 */
void tree_view_set_search_column(char *setting);

/* 
 * Sets the entry which the interactive search code will use for this tree_view.
 * This is useful when you want to provide a search entry in our interface at
 * all time at a fixed position. Passing NULL for entry will make the
 * interactive search code use the built-in popup entry again.
 */
void tree_view_set_search_entry(char *setting);

/* 
 * Enables or disables the fixed height mode of tree_view. Fixed height mode
 * speeds up GtkTreeView by assuming that all rows have the same height. Only
 * enable this option if all rows are the same height and all columns are of
 * type GTK_TREE_VIEW_COLUMN_FIXED.
 */
void tree_view_set_fixed_height_mode(char *setting);

/* 
 * Enables or disables the hover selection mode of tree_view . Hover selection
 * makes the selected row follow the pointer. Currently, this works only for
 * the selection modes GTK_SELECTION_SINGLE and GTK_SELECTION_BROWSE.
 */
void tree_view_set_hover_selection(char *setting);

/* 
 * Enables or disables the hover expansion mode of tree_view. Hover expansion
 * makes rows expand or collapse if the pointer moves over them.
 */
void tree_view_set_hover_expand(char *setting);

/* 
 * Sets the row separator function, which is used to determine whether a row
 * should be drawn as a separator. If the row separator function is NULL, no
 * separators are drawn. This is the default value.
 * 
 * func     a GtkTreeViewRowSeparatorFunc.
 * data     user data to pass to func, or NULL.
 * destroy  destroy notifier for data, or NULL.
 */
/*
 *void tree_view_set_row_separator_func(char *func
 *                                    , char *data
 *                                    , char *destroy);
 */

/*
 * Appends column to the list of columns. If tree_view has “fixed_height” mode
 * enabled, then column must have its “sizing” property set to be
 * GTK_TREE_VIEW_COLUMN_FIXED.
 */
void tree_view_append_column(char *setting);

/* 
 * Enables or disables rubber banding in tree_view . If the selection mode is
 * GTK_SELECTION_MULTIPLE, rubber banding will allow the user to select
 * multiple rows by dragging the mouse.
 */
void tree_view_set_rubber_banding(char *setting);

/* 
 * Sets whether to draw lines interconnecting the expanders in tree_view. This
 * does not have any visible effects for lists.
 */
void tree_view_set_enable_tree_lines(char *setting);

/* 
 * Sets which grid lines to draw in tree_view.
 */
void tree_view_set_grid_lines(char *setting);

/* 
 * Sets the tip area of tooltip to be the area covered by the row at path . See
 * also gtk_tree_view_set_tooltip_column() for a simpler alternative. See also
 * gtk_tooltip_set_tip_area().
 * 
 * tooltip    a GtkTooltip
 * path       a GtkTreePath
 */
/*
 *void tree_view_set_tooltip_row(char *tooltip, char *path);
 */

/* 
 * Sets the tip area of tooltip to the area path , column and cell have in
 * common. For example if path is NULL and column is set, the tip area will be
 * set to the full area covered by column . See also
 * gtk_tooltip_set_tip_area().
 * 
 * Note that if path is not specified and cell is set and part of a column
 * containing the expander, the tooltip might not show and hide at the correct
 * position. In such cases path must be set to the current node under the mouse
 * cursor for this function to operate correctly.
 * 
 * See also gtk_tree_view_set_tooltip_column() for a simpler alternative.
 * 
 * tooltip    a GtkTooltip
 * path       a GtkTreePath or NULL.
 * column     a GtkTreeViewColumn or NULL.
 * cell       a GtkCellRenderer or NULL.
 */
/*
 *void tree_view_set_tooltip_cell(char *tooltip
 *                              , char *path
 *                              , char *colum
 *                              , char *cell);
 */

/* 
 * If you only plan to have simple (text-only) tooltips on full rows, you can
 * use this function to have GtkTreeView handle these automatically for you.
 * column should be set to the column in tree_view ’s model containing the
 * tooltip texts, or -1 to disable this feature.
 * 
 * When enabled, “has-tooltip” will be set to TRUE and tree_view will connect a
 * “query-tooltip” signal handler.
 * 
 * Note that the signal handler sets the text with gtk_tooltip_set_markup(), so
 * &, <, etc have to be escaped in the text.
 */
void tree_view_set_tooltip_column(char *setting);

