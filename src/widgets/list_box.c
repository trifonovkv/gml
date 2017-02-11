#include "gml.h"
#include "fmtout.h"
#include "list_box.h" 

void list_box_new(char *widget)
{
        this = syminst(TYPE_LIST_BOX, widget, widget);

        putdef("GtkWidget *", widget, "gtk_list_box_new", 0);
}

void list_box_set_selection_mode(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX", this);
        
        putfun("gtk_list_box_set_selection_mode", 2, widget, setting);

        free(setting);
}

void list_box_set_activate_on_single_click(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX", this);
        
        putfun("gtk_list_box_set_activate_on_single_click", 2, widget, setting);

        free(setting);
}

void list_box_set_adjustment(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX", this);
        
        putfun("gtk_list_box_set_adjustment", 2, widget, setting);

        free(setting);
}

void list_box_set_placeholder(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX", this);
        
        putfun("gtk_list_box_set_placeholder", 2, widget, setting);

        free(setting);
}

void list_box_set_header_func(char *update_header
                            , char *user_data
                            , char *destroy)
{
        char *widget = wrptype("GTK_LIST_BOX", this);
        
        putfun("gtk_list_box_set_header_func"
             , 4
             , widget
             , update_header
             , user_data
             , destroy);

        free(widget);
        free(update_header);
        free(user_data);
        free(destroy);
}

void list_box_row_new(char *widget)
{
        this = syminst(TYPE_LIST_BOX_ROW, widget, widget);

        putdef("GtkWidget *", widget, "gtk_list_box_row_new", 0);
}

void list_box_row_set_header(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX_ROW", this);
        
        putfun("gtk_list_box_row_set_header", 2, widget, setting);

        free(setting);
}

void list_box_row_set_activatable(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX_ROW", this);
        
        putfun("gtk_list_box_row_set_activatable", 2, widget, setting);

        free(setting);
}

void list_box_row_set_selectable(char *setting)
{
        char *widget = wrptype("GTK_LIST_BOX_ROW", this);
        
        putfun("gtk_list_box_row_set_selectable", 2, widget, setting);

        free(setting);
}


