#include "gml.h"
#include "fmtout.h"
#include "tree_view.h" 

void tree_view_new(char *widget)
{
        this = syminst(TYPE_TREE_VIEW, widget, widget);

        putdef("GtkWidget *", widget, "gtk_tree_view_new", 0);
}

void tree_view_set_level_indentation(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_level_indentation", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_show_expanders(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_show_expanders", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_model(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_model", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_headers_visible(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_headers_visible", 2, widget, setting);

        free(widget);
        free(setting);
}

/*
 *void tree_view_columns_autosize(char *setting)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_columns_autosize", 2, widget, setting);
 *
 *        free(widget);
 *        free(setting);
 *}
 */

void tree_view_set_headers_clickable(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_headers_clickable", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_activate_on_single_click(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_activate_on_single_click"
              , 2
              , widget
              , setting);

        free(widget);
        free(setting);
}

void tree_view_set_expander_column(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_expander_column", 2, widget, setting);

        free(widget);
        free(setting);
}

/*
 *void tree_view_set_column_drag_function(char *func
 *                                      , char *user_data
 *                                      , char *destroy)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_set_column_drag_function"
 *              , 2
 *              , widget
 *              , func
 *              , user_data
 *              , destroy);
 *
 *        free(widget);
 *        free(func);
 *        free(user_data);
 *        free(destroy);
 *}
 */

/*
 *void tree_view_scroll_to_point(char *tree_x, char *tree_y)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_scroll_to_point", 3, widget, tree_x, tree_y);
 *
 *        free(widget);
 *        free(tree_x);
 *        free(tree_y);
 *}
 *
 *void tree_view_scroll_to_cell(char *path
 *                            , char *column
 *                            , char *use_align
 *                            , char *row_align
 *                            , char *col_align)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_scroll_to_cell"
 *             , 6
 *             , widget
 *             , path
 *             , column
 *             , use_align
 *             , row_align
 *             , col_align);
 *
 *        free(widget);
 *        free(path);
 *        free(column);
 *        free(use_align);
 *        free(row_align);
 *        free(col_align);
 *}
 */

/*
 *void tree_view_set_cursor(char *path, char *focus_column, char *start_editing)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_set_cursor"
 *             , 4 
 *             , widget
 *             , path
 *             , focus_column
 *             , start_editing);
 *
 *        free(widget);
 *        free(path);
 *        free(focus_column);
 *        free(start_editing);
 *}
 */

/*
 *void tree_view_set_cursor_on_cell(char *path
 *                                , char *focus_column
 *                                , char *focus_cell
 *                                , char *start_editing)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_set_cursor_on_cell"
 *             , 5
 *             , widget
 *             , path
 *             , focus_column
 *             , focus_cell
 *             , start_editing);
 *
 *        free(widget);
 *        free(path);
 *        free(focus_column);
 *        free(focus_cell);
 *        free(start_editing);
 *}
 */

/*
 *void tree_view_row_activated(char *path, char *column)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_row_activated", 3, widget, path, column);
 *
 *        free(widget);
 *        free(path);
 *        free(column);
 *}
 */

/*
 *void tree_view_expand_all(char *setting)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_expand_all", 2, widget, setting);
 *
 *        free(widget);
 *        free(setting);
 *}
 */

/*
 *void tree_view_collapse_all(char *setting)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_collapse_all", 2, widget, setting);
 *
 *        free(widget);
 *        free(setting);
 *}
 */

/*
 *void tree_view_expand_to_path(char *setting)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_expand_to_path", 2, widget, setting);
 *
 *        free(widget);
 *        free(setting);
 *}
 */

/*
 *void tree_view_map_expanded_rows(char *func, char *data)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_map_expanded_rows", 3, widget, func, data);
 *
 *        free(widget);
 *        free(func);
 *        free(data);
 *}
 */

void tree_view_set_reorderable(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_reorderable", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_enable_search(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_enable_search", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_search_column(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_search_column ", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_search_entry(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_search_entry", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_fixed_height_mode(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_fixed_height_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_hover_selection(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_hover_selection", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_hover_expand(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_hover_expand", 2, widget, setting);

        free(widget);
        free(setting);
}

/*
 *void tree_view_set_row_separator_func(char *func, char *data, char *destroy)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_set_row_separator"
 *             , 4
 *             , widget
 *             , func
 *             , data
 *             , destroy);
 *
 *        free(widget);
 *        free(func);
 *        free(data);
 *        free(destroy);
 *}
 */

void tree_view_set_rubber_banding(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_rubber_banding", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_enable_tree_lines(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_enable_tree_lines", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_set_grid_lines(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_grid_lines", 2, widget, setting);

        free(widget);
        free(setting);
}

/*
 *void tree_view_set_tooltip_row(char *tooltip, char *path)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_set_tooltip_row", 3, widget, tooltip, path);
 *
 *        free(widget);
 *        free(tooltip);
 *        free(path);
 *}
 */

/*
 *void tree_view_set_tooltip_cell(char *tooltip
 *                              , char *path
 *                              , char *column
 *                              , char *cell)
 *{
 *        char *widget = wrptype("GTK_TREE_VIEW", this);
 *
 *        putfun("gtk_tree_view_set_tooltip_cell"
 *             , 5
 *             , widget
 *             , tooltip
 *             , path
 *             , column
 *             , cell);
 *
 *        free(widget);
 *        free(tooltip);
 *        free(path);
 *        free(column);
 *        free(cell);
 *}
 */

void tree_view_set_tooltip_column(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW", this);

        putfun("gtk_tree_view_set_tooltip_column", 2, widget, setting);

        free(widget);
        free(setting);
}

