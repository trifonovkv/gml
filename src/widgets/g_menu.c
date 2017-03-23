#include "gml.h"
#include "fmtout.h"
#include "g_menu.h" 

void g_menu_new(char *menu)
{
        this = syminst(TYPE_G_MENU, menu, menu);

        if (getsymval("item") == NULL) {
                syminst(TYPE_ITER, "item", "item");
                prtstr(2, "GMenuItem * ", "item;\n");
        }

        putdef("GMenu *", menu, "g_menu_new", 0);
}

void g_menu_item_new(char *widget)
{
        this = syminst(TYPE_G_MENU_ITEM, widget, widget);

        putdef("GMenuItem *", widget, "g_menu_item_new", 2, "NULL", "NULL");
}

void g_menu_append_item(char *setting)
{
        char *widget = wrptype("G_MENU", this);

        putfun("g_menu_append_item", 2, widget, setting);

        free(widget);
        free(setting);
}

void g_menu_item_set_detailed_action(char *setting)
{
        char *widget = wrptype("G_MENU_ITEM", this);

        putfun("g_menu_item_set_detailed_action", 2, widget, setting);

        free(widget);
        free(setting);
}

void g_menu_item_set_label(char *setting)
{
        char *widget = wrptype("G_MENU_ITEM", this);

        putfun("g_menu_item_set_label", 2, widget, setting);

        free(widget);
        free(setting);
}

void g_menu_item_set_icon(char *setting)
{
        char *widget = wrptype("G_MENU_ITEM", this);

        putfun("g_menu_item_set_icon", 2, widget, setting);

        free(widget);
        free(setting);
}

void g_menu_item_set_section(char *setting)
{
        char *widget = wrptype("G_MENU_ITEM", this);
        char *menu_model = wrptype("G_MENU_MODEL", setting);

        putfun("g_menu_item_set_section", 2, widget, menu_model);

        free(setting);
        free(menu_model);
}

void g_menu_item_set_submenu(char *setting)
{
        char *widget = wrptype("G_MENU_ITEM", this);
        char *menu_model = wrptype("G_MENU_MODEL", setting);

        putfun("g_menu_item_set_submenu", 2, widget, menu_model);

        free(setting);
        free(menu_model);
}

void g_menu_item_set_attribute(char *attribute
                             , char *format_string
                             , char *value)
{
        char *widget = wrptype("G_MENU_ITEM", this);

        putfun("g_menu_item_set_attribute"
             , 4
             , widget
             , attribute
             , format_string
             , value);

        free(attribute);
        free(format_string);
        free(value);
}

void g_menu_item_set_link(char *link, char *model)
{
        char *widget = wrptype("G_MENU_ITEM", this);

        putfun("g_menu_item_set_link", 2, link, model);

        free(link);
        free(model);
}

void g_menu_item_set_accelerator_label(char *accelerator_key
                                     , char *accelerator_mods)
{
        char *widget = wrptype("GTK_BIN", this);
        char *accel_label_var = wrptype("GTK_ACCEL_LABEL", "accel_label");

        if (getsymval("accel_label") == NULL) {
                syminst(TYPE_ITER, "accel_label", "accel_label");
                prtstr(2, "GtkWidget *", "accel_label;\n");
        }

        putdef("", "accel_label", "gtk_bin_get_child", 1, widget);

        putfun("gtk_accel_label_set_accel"
             , 3
             , accel_label_var
             , accelerator_key
             , accelerator_mods);

        free(accel_label_var);
        free(accelerator_key);
        free(accelerator_mods);
}

