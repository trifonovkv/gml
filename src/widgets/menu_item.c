#include "gml.h"
#include "fmtout.h"
#include "menu_item.h" 

void menu_item_new(char *widget)
{
        this = syminst(TYPE_MENU_ITEM, widget, widget);

        putdef("GtkWidget *", widget, "gtk_menu_item_new", 0);
}

void menu_item_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_MENU_ITEM, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_menu_item_new_with_mnemonic"
             , 1
             , setting);

        free(setting);
}

void menu_item_set_label(char *setting)
{
        char *widget = wrptype("GTK_MENU_ITEM", this);

        putfun("gtk_menu_item_set_label", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_item_set_use_underline(char *setting)
{
        char *widget = wrptype("GTK_MENU_ITEM", this);

        putfun("gtk_menu_item_set_use_underline", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_item_set_submenu(char *setting)
{
        char *widget = wrptype("GTK_MENU_ITEM", this);
        char *menu = wrptype("GTK_WIDGET", setting);

        putfun("gtk_menu_item_set_submenu", 2, widget, menu);

        free(menu);
        free(widget);
        free(setting);
}

void menu_item_set_accel_path(char *setting)
{
        char *widget = wrptype("GTK_MENU_ITEM", this);

        putfun("gtk_menu_item_set_accel_path", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_item_set_reserve_indicator(char *setting)
{
        char *widget = wrptype("GTK_MENU_ITEM", this);

        putfun("gtk_menu_item_set_reserve_indicator", 2, widget, setting);

        free(widget);
        free(setting);
}

