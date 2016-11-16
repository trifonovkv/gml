#include "gml.h"
#include "fmtout.h"
#include "frame.h" 

void frame_new(char *widget)
{
        this = syminst(TYPE_FRAME, widget, widget);

        putdef("GtkWidget *", widget, "gtk_frame_new", 1, "NULL");
}

/*
 *void frame_set_label(char *setting)
 *{
 *        char *widget = wrptype("GTK_FRAME", this);
 *
 *        putfun("gtk_frame_set_label", 2, widget, setting);
 *
 *        free(widget);
 *        free(setting);
 *}
 *
 */
void frame_set_label_widget(char *setting)
{
        char *widget = wrptype("GTK_FRAME", this);

        putfun("gtk_frame_set_label_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

void frame_set_label_align(char *xalign, char *yaling)
{
        char *widget = wrptype("GTK_FRAME", this);

        putfun("gtk_frame_set_label_align", 3, widget, xalign, yaling);

        free(widget);
        free(xalign);
        free(yaling);
}

void frame_set_shadow_type(char *setting)
{
        char *widget = wrptype("GTK_FRAME", this);

        putfun("gtk_frame_set_shadow_type", 2, widget, setting);

        free(widget);
        free(setting);
}
