#include "gml.h"
#include "fmtout.h"
#include "color_button.h" 

void color_button_new(char *widget)
{
        this = syminst(TYPE_COLOR_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_color_button_new", 0);
}

void color_button_new_with_rgba(char *widget, char *setting)
{
        char *rgba = "rgba";
        char *prgba = "prgba";

        if(getsymval(rgba) == NULL) {          
                this = syminst(TYPE_STRING, rgba, rgba);
                prtstr(3, "GdkRGBA ", rgba, ";");
                prtstr(5, "GdkRGBA *", prgba, " = &", rgba, ";");
        }

        putfun("gdk_rgba_parse", 2, prgba, setting);
      
        /*
         *prtstr(6
         *      , "gdk_rgba_parse(" 
         *      , "&"
         *      , rgba
         *      , " ,"
         *      , setting
         *      , ");");
         */

        this = syminst(TYPE_COLOR_BUTTON, widget, widget);

       
        putdef("GtkWidget *"
              , widget
              , "gtk_color_button_new_with_rgba"
              , 1
              , prgba);
       
       
        /*
         *prtstr(5
         *      , "GtkWidget *"
         *      , widget
         *      , " = "
         *      , "gtk_color_button_new_with_rgba,"
         *      , " &"
         *      , rgba);
         */
        
}

void color_button_set_title(char *setting)
{
        char *widget = wrptype("GTK_COLOR_BUTTON", this);

        putfun("gtk_color_button_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}


