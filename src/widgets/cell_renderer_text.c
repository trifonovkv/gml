#include "gml.h"
#include "fmtout.h"
#include "cell_renderer_text.h" 

void cell_renderer_text_new(char *widget)
{
        this = syminst(TYPE_CELL_RENDERER_TEXT, widget, widget);

        putdef("GtkCellRenderer *", widget, "gtk_cell_renderer_text_new", 0);
}

void cell_renderer_text_set_fixed_height_from_font(char *setting)
{
        char *widget = wrptype("GTK_CELL_RENDERER_TEXT", this);

        putfun("gtk_cell_renderer_text_set_fixed_height_from_font"
             , 2
             , widget
             , setting);

        free(widget);
        free(setting);
}
