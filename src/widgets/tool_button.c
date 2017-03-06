#include "gml.h"
#include "fmtout.h"
#include "tool_button.h" 

void tool_button_new(char *widget)
{
        this = syminst(TYPE_TOOL_BUTTON, widget, widget);

        putdef("GtkToolItem *"
             , widget
             , "gtk_tool_button_new"
             , 2
             , "NULL"
             , "NULL");
}

void tool_button_set_label(char *setting)
{
        char *widget = wrptype("GTK_TOOL_BUTTON", this);

        putfun("gtk_tool_button_set_label", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_button_set_use_underline(char *setting)
{
        char *widget = wrptype("GTK_TOOL_BUTTON", this);

        putfun("gtk_tool_button_set_use_underline", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_button_set_icon_name(char *setting)
{
        char *widget = wrptype("GTK_TOOL_BUTTON", this);

        putfun("gtk_tool_button_set_icon_name", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_button_set_icon_widget(char *setting)
{
        char *widget = wrptype("GTK_TOOL_BUTTON", this);

        putfun("gtk_tool_button_set_icon_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

void tool_button_set_label_widget(char *setting)
{
        char *widget = wrptype("GTK_TOOL_BUTTON", this);

        putfun("gtk_tool_button_set_label_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

