#include "gml.h"
#include "fmtout.h"
#include "container.h" 

void container_add(char *widget)
{
        char *container = wrptype("GTK_CONTAINER", this);

        putfun("gtk_container_add", 2, container, widget);
        
        free(container);
}

void container_set_focus_vadjustment(char *setting)
{
        char *container = wrptype("GTK_CONTAINER", this);

        putfun("gtk_container_set_focus_vadjustment", 2, container, setting);

        free(container);
        free(setting);
}

void container_set_focus_hadjustment(char *setting)
{
        char *container = wrptype("GTK_CONTAINER", this);

        putfun("gtk_container_set_focus_hadjustment", 2, container, setting);

        free(container);
        free(setting);
}

void container_set_border_width(char *setting)
{
        char *container = wrptype("GTK_CONTAINER", this);

        putfun("gtk_container_set_border_width", 2, container, setting);

        free(container);
        free(setting);
}

