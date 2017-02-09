#include "gml.h"
#include "fmtout.h"
#include "menu.h" 

void menu_new(char *menu)
{
        this = syminst(TYPE_MENU, menu, menu);

        if (getsymval("item") == NULL) {
                syminst(TYPE_ITER, "item", "item");
                prtstr(2, "GMenuItem * ", "item;\n");
        }

        putdef("GMenu *", menu, "g_menu_new", 0);
}

void menu_append_new_item(char *label, char *detailed_action)
{
        char *menu = wrptype("G_MENU", this);

        putdef("", "item", "g_menu_item_new", 2, label, detailed_action);
        putfun("g_menu_append_item", 2, menu, "item");

        free(menu);
        free(label);
        free(detailed_action);
}

void menu_append_new_section(char *label, char *section)
{
        char *menu = wrptype("G_MENU", this);
        char *model = wrptype("G_MENU_MODEL", section);

        putdef("", "item", "g_menu_item_new_section", 2, label, model);
        putfun("g_menu_append_item", 2, menu, "item");

        free(menu);
        free(label);
        free(model);
        free(section);
}

void menu_append_new_submenu(char *label, char *submenu)
{
        char *menu = wrptype("G_MENU", this);
        char *model = wrptype("G_MENU_MODEL", submenu);

        putdef("", "item", "g_menu_item_new_submenu", 2, label, model);
        putfun("g_menu_append_item", 2, menu, "item");

        free(menu);
        free(label);
        free(model);
        free(submenu);
}

void menu_item_set_attribute(char *attribute, char *format_string)
{
        putfun("g_menu_item_set_attribute"
             , 4
             , "item"
             , attribute
             , "\"s\""
             , format_string);
                
        free(attribute);
        free(format_string);
}
 
