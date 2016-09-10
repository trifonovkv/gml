#include "gml.h"
#include "fmtout.h"
#include "grid.h" 

void grid_new (char *widget)
{
        this = syminst(TYPE_GRID, widget, widget);

        putdef("GtkWidget *", widget, "gtk_grid_new", 0);
}

void grid_attach(char *child, char *left, char *top, char *width, char *height)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_attach", 6, widget, child, left, top, width, height);

        free(widget);
        free(child);
        free(left);
        free(top);
        free(width);
        free(height);
}

void grid_attach_next_to(char *child
                        , char *sibling
                        , char *side
                        , char *width
                        , char *height)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_attach_next_to"
              , 6
              , widget
              , child
              , sibling
              , side
              , width
              , height);

        free(widget);
        free(child);
        free(sibling);
        free(side);
        free(width);
        free(height);
}

void grid_set_row_homogeneous(char *setting)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_set_row_homogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}

void grid_set_row_spacing(char *setting)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_set_row_spacing", 2, widget, setting); 

        free(widget);
        free(setting);
}

void grid_set_column_homogeneous(char *setting)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_set_column_homogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}

void grid_set_column_spacing(char *setting)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_set_column_spacing", 2, widget, setting); 

        free(widget);
        free(setting);
}

void grid_set_baseline_row(char *setting)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_set_baseline_row", 2, widget, setting);

        free(widget);
        free(setting);
}

void grid_set_row_baseline_position(char *row, char *pos)
{
        char *widget = wrptype("GTK_GRID", this);

        putfun("gtk_grid_set_row_baseline_position", 3, widget, row, pos);

        free(widget);
        free(row);
        free(pos);
}

