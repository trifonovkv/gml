#include "gml.h"
#include "fmtout.h"
#include "file_chooser_button.h" 

void file_chooser_button_new(char *widget)
{
        this = syminst(TYPE_FILE_CHOOSER_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_file_chooser_button_new"
              , 2
              , "NULL"
              , "0");
}

void file_chooser_button_set_title(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER_BUTTON", this);

        putfun("gtk_file_chooser_button_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_button_set_width_chars(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER_BUTTON", this);

        putfun("gtk_file_chooser_button_set_width_chars", 2, widget, setting);

        free(widget);
        free(setting);
}

