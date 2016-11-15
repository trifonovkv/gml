#include "gml.h"
#include "fmtout.h"
#include "orientation.h" 

void orientable_set_orientation(char *setting)
{
        char *widget = wrptype("GTK_ORIENTABLE", this);

        putfun("gtk_orientable_set_orientation", 2, widget, setting);

        free(widget);
        free(setting);
}
