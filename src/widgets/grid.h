/*
 * Creates a new grid widget.
 */
void grid_new (char *widget);

/* 
 * Adds a widget to the grid.
 * 
 * The position of child is determined by left and top . The number of “cells”
 * that child will occupy is determined by width and height .
 */
void grid_attach(char *child, char *left, char *top, char *width, char *height);

/*
 * Adds a widget to the grid.
 * 
 * The widget is placed next to sibling , on the side determined by side . When
 * sibling is NULL, the widget is placed in row (for left or right placement)
 * or column 0 (for top or bottom placement), at the end indicated by side .
 * 
 * Attaching widgets labeled [1], [2], [3] with sibling == NULL and side ==
 * GTK_POS_LEFT yields a layout of 3[1].
 */
void grid_attach_next_to(char *child
                        , char *sibling
                        , char *side
                        , char *width
                        , char *height);

/* 
 * Inserts a row or column at the specified position.
 * 
 * The new row or column is placed next to sibling , on the side determined by
 * side . If side is GTK_POS_TOP or GTK_POS_BOTTOM, a row is inserted. If side
 * is GTK_POS_LEFT of GTK_POS_RIGHT, a column is inserted.
 */
void grid_insert_next_to(char *sibling, char *side);

/* 
 * Sets whether all rows of grid will have the same height.
 */
void grid_set_row_homogeneous(char *setting);

/* 
 * Sets the amount of space between rows of grid.
 */
void grid_set_row_spacing(char *setting);

/* 
 * Sets whether all columns of grid will have the same width.
 */
void grid_set_column_homogeneous(char *setting);

/*
 * Sets the amount of space between columns of grid.
 */
void grid_set_column_spacing(char *setting);

/*
 * Sets which row defines the global baseline for the entire grid. Each row in
 * the grid can have its own local baseline, but only one of those is global,
 * meaning it will be the baseline in the parent of the grid.
 */
void grid_set_baseline_row(char *setting);

/* 
 * Sets how the baseline should be positioned on row of the grid, in case that
 * row is assigned more space than is requested.
 */
void grid_set_row_baseline_position(char *row, char *pos);

