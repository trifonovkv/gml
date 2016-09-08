#include "gml.h"
#include "fmtout.h"
#include "style_context.h" 

char *name = "context";

void style_context_add_class(char *class_name)
{
        char *widget = this;

        char *context_name = getsymval(name);
      
        if(context_name == NULL) {
                this = syminst(TYPE_STRING, name, name);
                context_name = name;
                putdef("GtkStyleContext *"
                      , context_name
                      , "gtk_widget_get_style_context"
                      , 1
                      , widget);
        } else {
                prtstr(5
                      ,context_name
                      ,"="
                      , "gtk_widget_get_style_context("
                      , widget
                      , ");");
        }
                
        putfun("gtk_style_context_add_class", 2,  context_name, class_name);
 
        free(class_name);
}

