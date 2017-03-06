#include "gml.h"
#include "fmtout.h"
#include "radio_menu_item.h" 

void radio_menu_item_new(char *widget)
{
        this = syminst(TYPE_RADIO_MENU_ITEM, widget, widget);

        putdef("GtkWidget *", widget, "gtk_radio_menu_item_new", 1, "NULL");
}

void radio_menu_item_new_with_label(char *widget, char *setting)
{
        this = syminst(TYPE_RADIO_MENU_ITEM, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_radio_menu_item_new_with_label"
             , 2
             , "NULL"
             , setting);
        
        free(setting);
}

void radio_menu_item_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_RADIO_MENU_ITEM, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_radio_menu_item_new_with_mnemonic"
             , 2
             , "NULL"
             , setting);

        free(setting);
}

void radio_menu_item_join_group(char *setting)
{
        char *widget = wrptype("GTK_RADIO_MENU_ITEM", this);

        putfun("gtk_radio_menu_item_join_group", 2, widget, setting);

        free(widget);
        free(setting);
}

