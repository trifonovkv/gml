#include "gml.h"
#include "fmtout.h"
#include "toolbar.h" 

void toolbar_new(char *widget)
{
        this = syminst(TYPE_TOOLBAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_toolbar_new", 0);

}

void toolbar_set_show_arrow(char *setting)
{
        char *widget = wrptype("GTK_TOOLBAR", this);

        putfun("gtk_toolbar_set_show_arrow", 2, widget, setting);

        free(widget);
        free(setting);
}

void toolbar_set_style(char *setting)
{
        char *widget = wrptype("GTK_TOOLBAR", this);

        putfun("gtk_toolbar_set_style", 2, widget, setting);

        free(widget);
        free(setting);
}

void toolbar_set_icon_size(char *setting)
{
        char *widget = wrptype("GTK_TOOLBAR", this);

        putfun("gtk_toolbar_set_icon_size", 2, widget, setting);

        free(widget);
        free(setting);
}

