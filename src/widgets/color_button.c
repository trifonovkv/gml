#include "gml.h"
#include "fmtout.h"
#include "color_button.h" 

void color_button_new(char *widget)
{
        this = syminst(TYPE_COLOR_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_color_button_new", 0);
}

void color_button_set_title(char *setting)
{
        char *widget = wrptype("GTK_COLOR_BUTTON", this);

        putfun("gtk_color_button_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}


