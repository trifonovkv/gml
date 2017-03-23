#include "gml.h"
#include "fmtout.h"
#include "statusbar.h" 

void statusbar_new(char *widget)
{
        this = syminst(TYPE_STATUSBAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_statusbar_new", 0);

}

