#include "gml.h"
#include "fmtout.h"
#include "paned.h"

void paned_new(char *widget, char *setting)
{
        this = syminst(TYPE_PANED, widget, widget);

        putdef("GtkWidget *", widget, "gtk_paned_new", 1, setting);
}

void paned_pack1(char *child, char *resize, char *shrink)
{
        char *widget = wrptype("GTK_PANED", this);
        
        putfun("gtk_paned_pack1", 4, widget, child, resize, shrink);
        
        free(widget);
        free(child);
        free(resize);
        free(shrink);
}

void paned_pack2(char *child, char *resize, char *shrink)
{
        char *widget = wrptype("GTK_PANED", this);
        
        putfun("gtk_paned_pack2", 4, widget, child, resize, shrink);
        
        
        free(widget);
        free(child);
        free(resize);
        free(shrink);
}

void paned_set_position(char *setting)
{
        char *widget = wrptype("GTK_PANED", this);
        
        putfun("gtk_paned_set_position", 2, widget, setting);
        
        free(widget);
        free(setting);
}

void paned_set_wide_handle(char *setting)
{
        char *widget = wrptype("GTK_PANED", this);
        
        putfun("gtk_paned_set_wide_handle", 2, widget, setting);
        
        free(widget);
        free(setting);
}

