#include "gml.h"
#include "fmtout.h"
#include "button_box.h"

void hbutton_box_new(char *widget)
{
        this = syminst(TYPE_BUTTON_BOX, widget, widget);
        char *setting = "GTK_ORIENTATION_HORIZONTAL";

        putdef("GtkWidget *", widget, "gtk_button_box_new", 1, setting);
}

void vbutton_box_new(char *widget)
{
        this = syminst(TYPE_BUTTON_BOX, widget, widget);
        char *setting = "GTK_ORIENTATION_VERTICAL";

        putdef("GtkWidget *", widget, "gtk_button_box_new", 1, setting);
}

void button_box_set_layout(char *setting)
{
        char *widget = wrptype("GTK_BUTTON_BOX", this);

        putfun("gtk_button_box_set_layout", 2, widget, setting);

        free(widget);
        free(setting);
}

void button_box_set_child_secondary(char *child, char *setting)
{
        char *widget = wrptype("GTK_BUTTON_BOX", this);

        putfun("gtk_button_box_set_child_secondary", 3, widget, child, setting);

        free(widget);
        free(setting);
}

void button_box_set_child_non_homogeneous(char *child, char *setting)
{
        char *widget = wrptype("GTK_BUTTON_BOX", this);

        putfun("gtk_button_box_set_child_non_homogeneous"
              , 3
              , widget
              , child
              , setting);

        free(widget);
        free(setting);
}

