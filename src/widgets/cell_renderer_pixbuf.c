#include "gml.h"
#include "fmtout.h"
#include "cell_renderer_pixbuf.h" 

void cell_renderer_pixbuf_new(char *widget)
{
        this = syminst(TYPE_CELL_RENDERER_PIXBUF, widget, widget);

        putdef("GtkCellRenderer *", widget, "gtk_cell_renderer_pixbuf_new", 0);
}

