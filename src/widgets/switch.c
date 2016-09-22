#include "gml.h"
#include "fmtout.h"
#include "switch.h" 

void switch_new(char *widget)
{
        this = syminst(TYPE_SWITCH, widget, widget);

        putdef("GtkWidget *", widget, "gtk_switch_new", 0);
}

void switch_set_active(char *setting)
{
        char *widget = wrptype("GTK_SWITCH", this);

        putfun("gtk_switch_set_active", 2, widget, setting);

        free(widget);
        free(setting);
}

void switch_set_state(char *setting)
{
        char *widget = wrptype("GTK_SWITCH", this);

        putfun("gtk_switch_set_state", 2, widget, setting);

        free(widget);
        free(setting);
}

