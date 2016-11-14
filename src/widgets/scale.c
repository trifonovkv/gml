#include "gml.h"
#include "fmtout.h"
#include "scale.h" 

void scale_new(char *widget, char *orientation, char *adjustment)
{
        this = syminst(TYPE_SCALE, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_scale_new"
              , 2
              , orientation
              , adjustment);
}

void scale_set_digits(char *setting)
{
        char *widget = wrptype("GTK_SCALE", this);

        putfun("gtk_scale_set_digits", 2, widget, setting);

        free(widget);
        free(setting);
}

void scale_set_draw_value(char *setting)
{
        char *widget = wrptype("GTK_SCALE", this);

        putfun("gtk_scale_set_draw_value", 2, widget, setting);

        free(widget);
        free(setting);
}

void scale_set_has_origin(char *setting)
{
        char *widget = wrptype("GTK_SCALE", this);

        putfun("gtk_scale_set_has_origin", 2, widget, setting);

        free(widget);
        free(setting);
}

void scale_set_value_pos(char *setting)
{
        char *widget = wrptype("GTK_SCALE", this);

        putfun("gtk_scale_set_value_pos", 2, widget, setting);

        free(widget);
        free(setting);
}

void scale_add_mark(char *value, char *position, char *markup)
{
        char *widget = wrptype("GTK_SCALE", this);

        putfun("gtk_scale_add_mark", 4, widget, value, position, markup);

        free(widget);
        free(value);
        free(position);
        free(markup);
}

