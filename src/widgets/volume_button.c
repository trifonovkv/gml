#include "gml.h"
#include "fmtout.h"
#include "volume_button.h" 

void volume_button_new(char *widget)
{
        this = syminst(TYPE_VOLUME_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_volume_button_new", 0);
} 

