#include "gml.h"
#include "fmtout.h"
#include "separator_menu_item.h" 

void separator_menu_item_new(char *widget)
{
        this = syminst(TYPE_MENU_ITEM, widget, widget);

        putdef("GtkWidget *", widget, "gtk_separator_menu_item_new", 0);
}

