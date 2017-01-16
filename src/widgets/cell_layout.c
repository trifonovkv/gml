#include "gml.h"
#include "fmtout.h"
#include "cell_layout.h" 

void cell_layout_pack_start(char *widget, char *setting)
{
        char *layout = wrptype("GTK_CELL_LAYOUT", this);
        char *renderer = wrptype("GTK_CELL_RENDERER", widget);

        putfun("gtk_cell_layout_pack_start", 3, layout, renderer, setting);

        free(layout);
        free(renderer);
        free(setting);
}

void cell_layout_pack_end(char *widget, char *setting)
{
        char *layout = wrptype("GTK_CELL_LAYOUT", this);
        char *renderer = wrptype("GTK_CELL_RENDERER", widget);

        putfun("gtk_cell_layout_pack_end", 3, layout, renderer, setting);

        free(layout);
        free(renderer);
        free(setting);
}

void cell_layout_set_attribute(char *widget, char *setting, char *column)
{
        char *layout = wrptype("GTK_CELL_LAYOUT", this);
        char *renderer = wrptype("GTK_CELL_RENDERER", widget);

        putfun("gtk_cell_layout_set_attributes"
             , 5
             , layout
             , renderer
             , setting
             , column
             , "NULL");

        free(layout);
        free(renderer);
        free(setting);
        free(column);
}

void cell_layout_add_attribute(char *widget, char *setting, char *column)
{
        char *layout = wrptype("GTK_CELL_LAYOUT", this);
        char *renderer = wrptype("GTK_CELL_RENDERER", widget);

        putfun("gtk_cell_layout_add_attribute"
             , 4
             , layout
             , renderer
             , setting
             , column);

        free(layout);
        free(renderer);
        free(setting);
        free(column);
}
