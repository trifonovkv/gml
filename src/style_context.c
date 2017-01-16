#include "gml.h"
#include "fmtout.h"
#include "style_context.h" 

char *name = "context";

void style_context_add_class(char *setting)
{
        char *widget = wrptype("GTK_WIDGET", this);

        if(getsymval(name) == NULL) {
                syminst(TYPE_STYLE_CONTEXT, name, name);
                prtstr(3, "GtkStyleContext *", name,";\n");
        }
                
        putdef("", name, "gtk_widget_get_style_context", 1, widget);
        putfun("gtk_style_context_add_class", 2,  name, setting);

        free(widget); 
        free(setting);
}

