#include "gml.h"
#include "fmtout.h"
#include "tool_item.h" 

void tool_item_new(char *widget)
{
        this = syminst(TYPE_TOOL_ITEM, widget, widget);

        putdef("GtkToolItem *", widget, "gtk_tool_item_new", 0);

}

void tool_item_set_homogeneous(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_homogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_expand(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_expand", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_tooltip_text(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_tooltip_text", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_tooltip_markup(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_tooltip_markup", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_use_drag_window(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_use_drag_window", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_visible_horizontal(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_visible_horizontal", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_visible_vertical(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_visible_vertical", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_is_important(char *setting)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_is_important", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_item_set_proxy_menu_item(char *menu_item_id, char *menu_item)
{
        char *widget = wrptype("GTK_TOOL_ITEM", this);

        putfun("gtk_tool_item_set_proxy_menu_item"
             , 3
             , widget
             , menu_item_id
             , menu_item);

        free(widget);
        free(menu_item);
        free(menu_item_id);
}

