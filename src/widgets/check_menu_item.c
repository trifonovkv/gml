#include "gml.h"
#include "fmtout.h"
#include "check_menu_item.h" 

void check_menu_item_new(char *widget)
{
        this = syminst(TYPE_CHECK_MENU_ITEM, widget, widget);

        putdef("GtkWidget *", widget, "gtk_check_menu_item_new", 0);
}

void check_menu_item_new_with_label(char *widget, char *setting)
{
        this = syminst(TYPE_CHECK_MENU_ITEM, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_check_menu_item_new_with_label"
             , 1
             , setting);
        
        free(setting);
}

void check_menu_item_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_CHECK_MENU_ITEM, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_check_menu_item_new_with_mnemonic"
             , 1
             , setting);
      
        free(setting);
}

void check_menu_item_set_active(char *setting)
{
        char *widget = wrptype("GTK_CHECK_MENU_ITEM", this);

        putfun("gtk_check_menu_item_set_active", 2, widget, setting);

        free(widget);
        free(setting);
}

void check_menu_item_set_inconsistent(char *setting)
{
        char *widget = wrptype("GTK_CHECK_MENU_ITEM", this);

        putfun("gtk_check_menu_item_set_inconsistent", 2, widget, setting);

        free(widget);
        free(setting);
}

void check_menu_item_set_draw_as_radio(char *setting)
{
        char *widget = wrptype("GTK_CHECK_MENU_ITEM", this);

        putfun("gtk_check_menu_item_set_draw_as_radio", 2, widget, setting);

        free(widget);
        free(setting);
}

