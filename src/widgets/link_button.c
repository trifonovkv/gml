#include "gml.h"
#include "fmtout.h"
#include "link_button.h" 

void link_button_new(char *widget)
{
        this = syminst(TYPE_LINK_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_link_button_new", 1, "\"\"");
}

void link_button_new_with_label(char *widget, char *setting)
{
        this = syminst(TYPE_LINK_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_link_button_new_with_label"
              , 2
              , "\"\""
              , setting);

        free(setting);
}

void link_button_set_uri(char *setting)
{
        char *widget = wrptype("GTK_LINK_BUTTON", this);

        putfun("gtk_link_button_set_uri", 2, widget, setting);

        free(widget);
        free(setting);
}

void link_button_set_visited(char *setting)
{
        char *widget = wrptype("GTK_LINK_BUTTON", this);

        putfun("gtk_link_button_set_visited", 2, widget, setting);

        free(widget);
        free(setting);
}

