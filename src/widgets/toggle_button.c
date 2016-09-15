#include "gml.h"
#include "fmtout.h"
#include "toggle_button.h" 

void toggle_button_new(char *widget)
{
        this = syminst(TYPE_TOGGLE_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_toggle_button_new", 0);
}
 
void toggle_button_new_with_label(char *widget, char *setting)
{
        this = syminst(TYPE_TOGGLE_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_toggle_button_new_with_label"
              , 1
              , setting);

        free(setting);
}

void toggle_button_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_TOGGLE_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_toggle_button_new_with_mnemonic"
              , 1
              , setting);

        free(setting);
}

void toggle_button_set_mode(char *setting)
{
        char *widget = wrptype("GTK_TOGGLE_BUTTON", this);

        putfun("gtk_toggle_button_set_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void toggle_button_set_active(char *setting)
{
        char *widget = wrptype("GTK_TOGGLE_BUTTON", this);

        putfun("gtk_toggle_button_set_active", 2, widget, setting);

        free(widget);
        free(setting);
}

void toggle_button_set_inconsistent(char *setting)
{
        char *widget = wrptype("GTK_TOGGLE_BUTTON", this);

        putfun("gtk_toggle_button_set_inconsistent", 2, widget, setting);

        free(widget);
        free(setting);
}
