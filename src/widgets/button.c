#include "gml.h"
#include "fmtout.h"
#include "button.h" 

void button_new_from_icon_name(char *widget, char *icon_name, char *size)
{
        this = syminst(TYPE_BUTTON, widget, widget);

        putdef( "GtkWidget *"
              , widget
              , "gtk_button_new_from_icon_name"
              , 2
              , icon_name
              , size);
}

void button_new(char *widget)
{
        this = syminst(TYPE_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_button_new", 0);
} 

void button_set_relief(char *setting)
{
        char *widget = wrptype("GTK_BUTTON", this);

        putfun("gtk_button_set_relief", 2, widget, setting);

        free(widget);
        free(setting);
}

void button_set_label(char *setting) 
{
        char *widget = wrptype("GTK_BUTTON", this);
        
        putfun("gtk_button_set_label", 2, widget, setting);

        free(widget);
        free(setting);
}

void button_set_use_underline(char *setting)
{
        char *widget = wrptype("GTK_BUTTON", this);
        
        putfun("gtk_button_set_use_underline", 2, widget, setting);

        free(widget);
        free(setting);
}

void button_set_focus_on_click(char *setting)
{
        char *widget = wrptype("GTK_BUTTON", this);

        putfun("gtk_button_set_focus_on_click", 2, widget, setting);

        free(widget);
        free(setting);
}

void button_set_image(char *setting)
{
        char *widget = wrptype("GTK_BUTTON", this);

        putfun("gtk_button_set_image", 2, widget, setting);

        free(widget);
        free(setting);
}

void button_set_image_position(char *setting)
{
        char *widget = wrptype("GTK_BUTTON", this);

        putfun("gtk_button_set_image_position", 2,widget, setting);

        free(widget);
        free(setting);
}

void button_set_always_show_image(char *setting)
{
        char *widget = wrptype("GTK_BUTTON", this);

        putfun("gtk_button_set_always_show_image", 2, widget, setting);

        free(widget);
        free(setting);
}

