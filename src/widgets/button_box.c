#include "gml.h"
#include "fmtout.h"
#include "button_box.h"

void hbutton_box_new(char *widget)
{
        syminst(TYPE_BUTTON_BOX, widget, widget);
        syminst(TYPE_BUTTON_BOX, "this", widget);
        char *setting = "GTK_ORIENTATION_HORIZONTAL";

        putdef("GtkWidget *", widget, "gtk_button_box_new", 1, setting);
}

void vbutton_box_new(char *widget)
{
        syminst(TYPE_BUTTON_BOX, widget, widget);
        syminst(TYPE_BUTTON_BOX, "this", widget);
        char *setting = "GTK_ORIENTATION_VERTICAL";

        putdef("GtkWidget *", widget, "gtk_button_box_new", 1, setting);
}

void button_box_set_layout(char *setting)
{
        char *widget = wrptype("GTK_BUTTON_BOX", getsymval("this"));

        putfun("gtk_button_box_set_layout", 2, widget, setting);
}

void button_box_set_child_secondary(char *child, char *setting)
{
        char *widget = wrptype("GTK_BUTTON_BOX", getsymval("this"));

        putfun("gtk_button_box_set_child_secondary", 3, widget, child, setting);
}

void button_box_set_child_non_homogeneous(char *child, char *setting)
{
        char *widget = wrptype("GTK_BUTTON_BOX", getsymval("this"));

        putfun("gtk_button_box_set_child_non_homogeneous"
              ,3
              ,widget
              ,child
              ,setting);
}

