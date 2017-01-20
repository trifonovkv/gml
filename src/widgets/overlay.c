#include "gml.h"
#include "fmtout.h"
#include "overlay.h" 

void overlay_new(char *widget)
{
        this = syminst(TYPE_OVERLAY, widget, widget);

        putdef("GtkWidget *", widget, "gtk_overlay_new", 0);
}

void overlay_add_overlay(char *setting)
{
        char *widget = wrptype("GTK_OVERLAY", this);

        putfun("gtk_overlay_add_overlay", 2, widget, setting);

        free(widget);
        free(setting);
}

void overlay_set_overlay_pass_through(char *child, char *pass_through)
{
        char *widget = wrptype("GTK_OVERLAY", this);

        putfun("gtk_overlay_set_overlay_pass_through"
             , 3
             , widget
             , child
             , pass_through);

        free(widget);
        free(child);
        free(pass_through);
}

