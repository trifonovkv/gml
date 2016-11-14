#include "gml.h"
#include "fmtout.h"
#include "level_bar.h" 

void level_bar_new(char *widget)
{
        this = syminst(TYPE_LEVEL_BAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_level_bar_new", 0);
}

void level_bar_set_mode(char *setting)
{
        char *widget = wrptype("GTK_LEVEL_BAR", this);

        putfun("gtk_level_bar_set_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void level_bar_set_value(char *setting)
{
        char *widget = wrptype("GTK_LEVEL_BAR", this);

        putfun("gtk_level_bar_set_value", 2, widget, setting);

        free(widget);
        free(setting);
}

void level_bar_set_min_value(char *setting)
{
        char *widget = wrptype("GTK_LEVEL_BAR", this);

        putfun("gtk_level_bar_set_min_value", 2, widget, setting);

        free(widget);
        free(setting);
}

void level_bar_set_max_value(char *setting)
{
        char *widget = wrptype("GTK_LEVEL_BAR", this);

        putfun("gtk_level_bar_set_max_value", 2, widget, setting);

        free(widget);
        free(setting);
}

void level_bar_set_inverted(char *setting)
{
        char *widget = wrptype("GTK_LEVEL_BAR", this);

        putfun("gtk_level_bar_set_inverted", 2, widget, setting);

        free(widget);
        free(setting);
}

void level_bar_add_offset_value(char *name, char *value)
{
        char *widget = wrptype("GTK_LEVEL_BAR", this);

        putfun("gtk_level_bar_add_offset_value", 3, widget, name, value);

        free(widget);
        free(name);
        free(value);
}
