#include "gml.h"
#include "fmtout.h"
#include "separator.h" 

void separator_new(char *widget, char *setting)
{
        putdef("GtkWidget *", widget, "gtk_separator_new", 1, setting);
}
