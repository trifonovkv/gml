#include "gml.h"
#include "fmtout.h"
#include "info_bar.h" 

void info_bar_new(char *widget)
{
        this = syminst(TYPE_INFO_BAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_info_bar_new", 0);
}

void info_bar_add_content_area(char *setting)
{
        char *container;
        char *widget = wrptype("GTK_INFO_BAR", this);
        char *content = concatv(2, this, "_content_area");

        putdef("GtkWidget *"
             , content
             , "gtk_info_bar_get_content_area"
             , 1
             , widget);
        
        container = wrptype("GTK_CONTAINER", content);

        putfun("gtk_container_add", 2, container, setting);

        free(widget);
        free(content);
        free(container);
        free(setting);
}

void info_bar_add_action_widget(char *child, char *response_id)
{
        char *widget = wrptype("GTK_INFO_BAR", this);

        putfun("gtk_info_bar_add_action_widget", 2, widget, child, response_id);

        free(widget);
        free(child);
        free(response_id);
}

void info_bar_add_button(char *button_text, char *response_id)
{
        char *widget = wrptype("GTK_INFO_BAR", this);

        putfun("gtk_info_bar_add_button", 3, widget, button_text, response_id);

        free(widget);
        free(button_text);
        free(response_id);
}

void info_bar_set_response_sensitive(char *response_id, char *setting)
{
        char *widget = wrptype("GTK_INFO_BAR", this);

        putfun("gtk_info_bar_set_response_sensitive"
             , 3
             , widget
             , response_id
             , setting);

        free(widget);
        free(response_id);
        free(setting);
}

void info_bar_set_default_response(char *setting)
{
        char *widget = wrptype("GTK_INFO_BAR", this);

        putfun("gtk_info_bar_set_default_response", 2, widget, setting);

        free(widget);
        free(setting);
}

void info_bar_set_message_type(char *setting)
{
        char *widget = wrptype("GTK_INFO_BAR", this);

        putfun("gtk_info_bar_set_message_type", 2, widget, setting);

        free(widget);
        free(setting);
}

void info_bar_set_show_close_button(char *setting)
{
        char *widget = wrptype("GTK_INFO_BAR", this);

        putfun("gtk_info_bar_set_show_close_button", 2, widget, setting);

        free(widget);
        free(setting);
}
