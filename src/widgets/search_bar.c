#include "gml.h"
#include "fmtout.h"
#include "search_bar.h" 

void search_bar_new(char *widget)
{
        this = syminst(TYPE_SEARCH_BAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_search_bar_new", 0);
}

void search_bar_connect_entry(char *setting)
{
        char *widget = wrptype("GTK_SEARCH_BAR", this);
        char *entry = wrptype("GTK_ENTRY", setting);

        putfun("gtk_search_bar_connect_entry", 2, widget, entry);

        free(widget);
        free(setting);
}

void search_bar_set_search_mode(char *setting)
{
        char *widget = wrptype("GTK_SEARCH_BAR", this);

        putfun("gtk_search_bar_set_search_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void search_bar_set_show_close_button(char *setting)
{
        char *widget = wrptype("GTK_SEARCH_BAR", this);

        putfun("gtk_search_bar_set_show_close_button", 2, widget, setting);

        free(widget);
        free(setting);
}

