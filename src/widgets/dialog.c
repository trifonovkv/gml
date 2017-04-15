#include "gml.h"
#include "fmtout.h"
#include "dialog.h" 

void dialog_new(char *widget)
{
        this = syminst(TYPE_DIALOG, widget, widget);

        putdef("GtkWidget *", widget, "gtk_dialog_new", 0);
}

void dialog_add_button(char *button_text, char *response_id)
{
        char *widget = wrptype("GTK_DIALOG", this);

        putfun("gtk_dialog_add_button", 3, widget, button_text, response_id);

        free(widget);
        free(button_text);
        free(response_id);
}

void dialog_add_action_widget(char *child, char *response_id)
{
        char *widget = wrptype("GTK_DIALOG", this);

        putfun("gtk_dialog_add_action_widget", 3, widget, child, response_id);

        free(widget);
        free(child);
        free(response_id);
}

void dialog_set_default_response(char *setting)
{
        char *widget = wrptype("GTK_DIALOG", this);

        putfun("gtk_dialog_set_default_response", 2, widget, setting);

        free(widget);
        free(setting);
}

void dialog_set_response_sensitive(char *response_id, char *setting)
{
        char *widget = wrptype("GTK_DIALOG", this);

        putfun("gtk_dialog_set_response_sensitive"
             , 3
             , widget
             , response_id
             , setting);

        free(widget);
        free(response_id);
        free(setting);
}
