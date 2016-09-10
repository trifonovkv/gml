#include "gml.h"
#include "fmtout.h"
#include "radio_button.h" 

void radio_button_new(char *widget)
{
        this = syminst(TYPE_RADIO_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_radio_button_new", 1, "NULL");
}

void radio_button_new_with_label(char *widget, char *setting)
{
        this = syminst(TYPE_RADIO_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_radio_button_new_with_label"
              , 2
              , "NULL"
              , setting);
}

void radio_button_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_RADIO_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_radio_button_new_with_mnemonic"
              , 2
              , "NULL"
              , setting);
}

void radio_button_join_group(char *setting)
{
        char *widget = wrptype("GTK_RADIO_BUTTON", this);

        putfun("gtk_radio_button_join_group"
              , 2
              , widget
              , wrptype("GTK_RADIO_BUTTON"
                       , setting));

        free(widget);
        free(setting);
}
