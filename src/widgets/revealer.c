#include "gml.h"
#include "fmtout.h"
#include "revealer.h" 

void revealer_new(char *widget)
{
        this = syminst(TYPE_REVEALER, widget, widget);

        putdef("GtkWidget *", widget, "gtk_revealer_new", 0);
}

void revealer_set_reveal_child(char *setting)
{
        char *widget = wrptype("GTK_REVEALER", this);

        putfun("gtk_revealer_set_reveal_child", 2, widget, setting);

        free(widget);
        free(setting);
}

void revealer_set_transition_duration(char *setting)
{
        char *widget = wrptype("GTK_REVEALER", this);

        putfun("gtk_revealer_set_transition_duration", 2, widget, setting);

        free(widget);
        free(setting);
}

void revealer_set_transition_type(char *setting)
{
        char *widget = wrptype("GTK_REVEALER", this);

        putfun("gtk_revealer_set_transition_type", 2, widget, setting);

        free(widget);
        free(setting);
}

