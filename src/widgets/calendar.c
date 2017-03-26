#include "gml.h"
#include "fmtout.h"
#include "calendar.h" 

void calendar_new(char *widget)
{
        this = syminst(TYPE_CALENDAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_calendar_new", 0);
}

void calendar_set_display_options(char *setting)
{
        char *widget = wrptype("GTK_CALENDAR", this);

        putfun("gtk_calendar_set_display_options", 2, widget, setting);

        free(widget);
        free(setting);
}

void calendar_set_detail_func(char *func, char *data, char *destroy)
{
        char *widget = wrptype("GTK_CALENDAR", this);

        putfun("gtk_calendar_set_detail_func", 4, widget, func, data, destroy);

        free(widget);
        free(func);
        free(data);
        free(destroy);
}

void calendar_set_detail_width_chars(char *setting)
{
        char *widget = wrptype("GTK_CALENDAR", this);

        putfun("gtk_calendar_set_detail_width_chars", 2, widget, setting);

        free(widget);
        free(setting);
}

void calendar_set_detail_height_rows(char *setting)
{
        char *widget = wrptype("GTK_CALENDAR", this);

        putfun("gtk_calendar_set_detail_height_rows", 2, widget, setting);

        free(widget);
        free(setting);
}

