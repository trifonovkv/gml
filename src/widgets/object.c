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

void object_set_data(char *key, char *data)
{
        char *widget = wrptype("G_OBJECT", this);

        putfun("g_object_set_data", 3, widget, key, data);

        free(widget);
        free(key);
        free(data);
}

