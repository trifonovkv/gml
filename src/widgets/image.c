#include "gml.h"
#include "fmtout.h"
#include "image.h" 

void image_new(char *widget)
{
        this = syminst(TYPE_IMAGE, widget, widget);

        putdef("GtkWidget *", widget, "gtk_image_new", 0);
}

void image_set_from_file(char *setting)
{
        char *widget = wrptype("GTK_IMAGE", this);

        putfun("gtk_image_set_from_file", 2, widget, setting);

        free(widget);
        free(setting);
}

void image_set_from_icon_name(char *icon_name, char *size)
{
        char *widget = wrptype("GTK_IMAGE", this);

        putfun("gtk_image_set_from_icon_name", 3, widget, icon_name, size);

        free(widget);
        free(icon_name);
        free(size);
}

void image_set_from_resource(char *setting)
{
        char *widget = wrptype("GTK_IMAGE", this);

        putfun("gtk_image_set_from_resource", 2, widget, setting);

        free(widget);
        free(setting);
}

void image_set_pixel_size(char *setting)
{
        char *widget = wrptype("GTK_IMAGE", this);

        putfun("gtk_image_set_pixel_size", 2, widget, setting);

        free(widget);
        free(setting);
}
