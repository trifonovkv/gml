#include "gml.h"
#include "fmtout.h"
#include "file_chooser.h" 

void file_chooser_set_action(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_action", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_local_only(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_local_only", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_select_multiple(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_select_multiple", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_show_hidden(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_show_hidden", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_do_overwrite_confirmation(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_do_overwrite_confirmation"
              , 2
              , widget
              , setting);

        free(widget);
        free(setting);
}

void file_chooser_set_create_folders(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_create_folders", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_current_name(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_current_name", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_filename(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_filename", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_current_folder(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_current_folder", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_uri(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_uri", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_current_folder_uri(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_current_folder_uri", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_preview_widget(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_preview_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

void file_chooser_set_preview_widget_active(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_preview_widget_active"
              , 2
              , widget
              , setting);

        free(widget);
        free(setting);
}


void file_chooser_set_use_preview_label(char *setting)
{
        char *widget = wrptype("GTK_FILE_CHOOSER", this);

        putfun("gtk_file_chooser_set_use_preview_label", 2, widget, setting);

        free(widget);
        free(setting);
}

