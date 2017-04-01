#include "gml.h"
#include "fmtout.h"
#include "message_dialog.h" 

void message_dialog_new(char *widget
                      , char *parent
                      , char *flags
                      , char *type
                      , char *buttons
                      , char *text)
{
        this = syminst(TYPE_MESSAGE_DIALOG, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_message_dialog_new"
             , 6
             , parent
             , flags
             , type
             , buttons
             , "\"%s\""
             , text);

        free(parent);
        free(flags);
        free(type);
        free(buttons);
        free(text);
}

void message_dialog_set_markup(char *setting)
{
        char *widget = wrptype("GTK_MESSAGE_DIALOG", this);

        putfun("gtk_message_dialog_set_markup", 2, widget, setting);

        free(widget);
        free(setting);
}

void message_dialog_set_secondary_text(char *setting)
{
        char *widget = wrptype("GTK_MESSAGE_DIALOG", this);

        putfun("gtk_message_dialog_format_secondary_text"
             , 3
             , widget
             , "\"%s\""
             , setting);

        free(widget);
        free(setting);
}

void message_dialog_set_secondary_markup(char *setting)
{
        char *widget = wrptype("GTK_MESSAGE_DIALOG", this);

        putfun("gtk_message_dialog_format_secondary_markup"
             , 3
             , widget
             , "\"%s\""
             , setting);

        free(widget);
        free(setting);
}
