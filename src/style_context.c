#include "gml.h"
#include "fmtout.h"
#include "style_context.h" 

void widget_get_style_context(char *widget, char *context_name)
{
        putdef("GtkStyleContext *"
              , context_name
              , "gtk_widget_get_style_context"
              , 1
              , widget);
}

void style_context_add_class(char *class_name)
{
        char *context_name = "context";
        char *widget = getsymval("this");

        widget_get_style_context(widget, context_name);
        putfun("gtk_style_context_add_class", 2,  context_name, class_name);
 
        free(class_name);
}

