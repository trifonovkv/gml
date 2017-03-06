#include "gml.h"
#include "fmtout.h"
#include "search_entry.h" 

void search_entry_new(char *widget)
{
        this = syminst(TYPE_SEARCH_ENTRY, widget, widget);

        putdef("GtkWidget *", widget, "gtk_search_entry_new", 0);

}

