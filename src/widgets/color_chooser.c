#include "gml.h"
#include "fmtout.h"
#include "color_chooser.h" 

void color_chooser_set_rgba(char *setting)
{
        char *widget = wrptype("GTK_COLOR_CHOOSER", this);
        
        if (getsymval("rgba") == NULL) {
                syminst(TYPE_STRING, "rgba", "rgba");
                prtstr(1, "GdkRGBA rgba;\n");
        }
        
        prtstr(3, "gdk_rgba_parse(&rgba, ", setting, ");\n");

        putfun("gtk_color_chooser_set_rgba", 2, widget, "&rgba");

        free(widget);
        free(setting);
}

void color_chooser_set_use_alpha(char *setting)
{
        char *widget = wrptype("GTK_COLOR_CHOOSER", this);
        
        putfun("gtk_color_chooser_set_use_alpha", 2, widget, setting);

        free(widget);
        free(setting);
}
 
