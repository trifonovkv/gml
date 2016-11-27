#include "gml.h"
#include "fmtout.h"
#include "cell_renderer_toggle.h" 

void cell_renderer_toggle_new(char *widget)
{
        this = syminst(TYPE_CELL_RENDERER_TOGGLE, widget, widget);

        putdef("GtkCellRenderer *", widget, "gtk_cell_renderer_toggle_new", 0);
}

void cell_renderer_toggle_set_radio(char *setting)
{
        char *widget = wrptype("GTK_CELL_RENDERER_TOGGLE", this);

        putfun("gtk_cell_renderer_toggle_set_radio", 2, widget, setting);

        free(widget);
        free(setting);
}

void cell_renderer_toggle_set_active(char *setting)
{
        char *widget = wrptype("GTK_CELL_RENDERER_TOGGLE", this);

        putfun("gtk_cell_renderer_toggle_set_active", 2, widget, setting);

        free(widget);
        free(setting);
}

void cell_renderer_toggle_set_activatable(char *setting)
{
        char *widget = wrptype("GTK_CELL_RENDERER_TOGGLE", this);

        putfun("gtk_cell_renderer_toggle_set_activatable", 2, widget, setting);

        free(widget);
        free(setting);
}

