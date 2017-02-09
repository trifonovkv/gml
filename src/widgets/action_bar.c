#include "gml.h"
#include "fmtout.h"
#include "action_bar.h" 

void action_bar_new(char *widget)
{
        this = syminst(TYPE_ACTION_BAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_action_bar_new", 0);
}

void action_bar_pack_start(char *setting)
{
        char *widget = wrptype("GTK_ACTION_BAR", this);

        putfun("gtk_action_bar_pack_start", 2, widget, setting);

        free(widget);
        free(setting);
}

void action_bar_pack_end(char *setting)
{
        char *widget = wrptype("GTK_ACTION_BAR", this);

        putfun("gtk_action_bar_pack_end", 2, widget, setting);

        free(widget);
        free(setting);
}

void action_bar_set_center_widget(char *setting)
{
        char *widget = wrptype("GTK_ACTION_BAR", this);

        putfun("gtk_action_bar_set_center_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

