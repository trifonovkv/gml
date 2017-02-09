#include "gml.h"
#include "fmtout.h"
#include "menu_button.h" 

void menu_button_new(char *widget)
{
        this = syminst(TYPE_MENU_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_menu_button_new", 0);
}

void menu_button_set_popup(char *setting)
{
        char *widget = wrptype("GTK_MENU_BUTTON", this);

        putfun("gtk_menu_button_set_popup", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_button_set_popover(char *setting)
{
        char *widget = wrptype("GTK_MENU_BUTTON", this);

        putfun("gtk_menu_button_set_popover", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_button_set_menu_model(char *setting)
{
        char *widget = wrptype("GTK_MENU_BUTTON", this);
        char *model = wrptype("G_MENU_MODEL", setting);

        putfun("gtk_menu_button_set_menu_model", 2, widget, model);

        free(widget);
        free(model);
        free(setting);
}

void menu_button_set_use_popover(char *setting)
{
        char *widget = wrptype("GTK_MENU_BUTTON", this);

        putfun("gtk_menu_button_set_use_popover", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_button_set_direction(char *setting)
{
        char *widget = wrptype("GTK_MENU_BUTTON", this);

        putfun("gtk_menu_button_set_direction", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_button_set_align_widget(char *setting)
{
        char *widget = wrptype("GTK_MENU_BUTTON", this);

        putfun("gtk_menu_button_set_align_widget", 2, widget, setting);

        free(widget);
        free(setting);
}
