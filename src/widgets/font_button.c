#include "gml.h"
#include "fmtout.h"
#include "font_button.h" 

void font_button_new(char *widget)
{
        this = syminst(TYPE_FONT_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_font_button_new", 0);
}

void font_button_set_font_name(char *setting)
{
        char *widget = wrptype("GTK_FONT_BUTTON", this);

        putfun("gtk_font_button_set_font_name", 2, widget, setting);

        free(widget);
        free(setting);
}

void font_button_set_show_style(char *setting)
{
        char *widget = wrptype("GTK_FONT_BUTTON", this);

        putfun("gtk_font_button_set_show_style", 2, widget, setting);

        free(widget);
        free(setting);
}

void font_button_set_show_size(char *setting)
{
        char *widget = wrptype("GTK_FONT_BUTTON", this);

        putfun("gtk_font_button_set_show_size", 2, widget, setting);

        free(widget);
        free(setting);
}

void font_button_set_use_font(char *setting)
{
        char *widget = wrptype("GTK_FONT_BUTTON", this);

        putfun("gtk_font_button_set_use_font", 2, widget, setting);

        free(widget);
        free(setting);
}

void font_button_set_use_size(char *setting)
{
        char *widget = wrptype("GTK_FONT_BUTTON", this);

        putfun("gtk_font_button_set_use_size", 2, widget, setting);

        free(widget);
        free(setting);
}

void font_button_set_title(char *setting)
{
        char *widget = wrptype("GTK_FONT_BUTTON", this);

        putfun("gtk_font_button_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}
