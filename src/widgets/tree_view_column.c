#include "gml.h"
#include "fmtout.h"
#include "tree_view_column.h" 

void tree_view_column_new(char *widget)
{
        this = syminst(TYPE_TREE_VIEW_COLUMN, widget, widget);

        putdef("GtkTreeViewColumn *", widget, "gtk_tree_view_column_new", 0);
}

void tree_view_column_add_renderer(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_pack_start"
             , 3
             , widget
             , setting
             , "TRUE");

        free(widget);
        free(setting);
}

void tree_view_column_add_attribute(char *cell_renderer
                                  , char *attribute
                                  , char *column)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);
  
        putfun("gtk_tree_view_column_add_attribute"
             , 4
             , widget
             , cell_renderer
             , attribute
             , column);
 
        free(widget);
        free(cell_renderer);
        free(attribute);
        free(column);
}

void tree_view_column_set_spacing(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_spacing", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_visible(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_visible", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_resizable(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_resizable", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_sizing(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_sizing", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_fixed_width(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_fixed_width", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_min_width(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_min_width", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_max_width(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_max_width", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_title(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_expand(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_expand", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_clickable(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_clickabl", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_widget(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_alignment(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_alignment", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_reorderable(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_reorderable", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_sort_column_id(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_sort_column_id", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_sort_indicator(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_sort_indicator", 2, widget, setting);

        free(widget);
        free(setting);
}

void tree_view_column_set_sort_order(char *setting)
{
        char *widget = wrptype("GTK_TREE_VIEW_COLUMN", this);

        putfun("gtk_tree_view_column_set_sort_order", 2, widget, setting);

        free(widget);
        free(setting);
}
