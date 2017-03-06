#include "gml.h"
#include "fmtout.h"
#include "menu_bar.h" 

void menu_bar_new(char *widget)
{
        this = syminst(TYPE_MENU_BAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_menu_bar_new", 0);
}

void menu_bar_new_from_model(char *widget, char *setting)
{
        this = syminst(TYPE_MENU_BAR, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_menu_bar_new_from_model"
             , 1
             , setting);

        free(setting);
}

void menu_bar_set_pack_direction(char *setting)
{
        char *widget = wrptype("GTK_MENU_BAR", this);

        putfun("gtk_menu_bar_set_pack_direction", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_bar_set_child_pack_direction(char *setting)
{
        char *widget = wrptype("GTK_MENU_BAR", this);

        putfun("gtk_menu_bar_set_child_pack_direction", 2, widget, setting);

        free(widget);
        free(setting);
}

