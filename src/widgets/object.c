#include "gml.h"
#include "fmtout.h"
#include "object.h" 

void object_set(char *name, char *value)
{
        char *widget = wrptype("G_OBJECT", this);

        putfun("g_object_set", 4, widget, name, value, "NULL");

        free(widget);
        free(name);
        free(value);
}

