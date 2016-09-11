#include "gml.h"
#include "fmtout.h"
#include "spinner.h" 

void spinner_new(char *widget)
{
        this = syminst(TYPE_SPINER, widget, widget);

        putdef("GtkWidget *", widget, "gtk_spinner_new", 0);
}

void spinner_start()
{
        char *widget = wrptype("GTK_SPINNER", this);

        putfun("gtk_spinner_start", 1, widget);

        free(widget);
}

void spinner_stop()
{
        char *widget = wrptype("GTK_SPINNER", this);

        putfun("gtk_spinner_stop", 1, widget);

        free(widget);
}

