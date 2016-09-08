#include "gml.h"
#include "fmtout.h"
#include "stack.h"

void stack_new(char *widget)
{
        this = syminst(TYPE_STACK, widget, widget);

        putdef("GtkWidget *", widget, "gtk_stack_new", 0);
}

void stack_add_titled(char *child, char *name, char *title)
{
        char *widget = wrptype("GTK_STACK", this);

        putfun("gtk_stack_add_titled", 4, widget, child, name, title);

        free(widget);
        free(name);
        free(title);
}

void stack_set_homogeneous(char *setting)
{
        char *widget = wrptype("GTK_STACK", this);

        putfun("gtk_stack_set_homogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}

void stack_set_hhomogeneous(char *setting)
{
        char *widget = wrptype("GTK_STACK", this);

        putfun("gtk_stack_set_hhomogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}

void stack_set_vhomogeneous(char *setting)
{
        char *widget = wrptype("GTK_STACK", this);

        putfun("gtk_stack_set_vhomogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}
 
void stack_set_transition_duration(char *setting)
{
        char *widget = wrptype("GTK_STACK", this);

        putfun("gtk_stack_set_transition_duration", 2, widget, setting);

        free(widget);
        free(setting);
}

void stack_set_transition_type(char *setting)
{
        char *widget = wrptype("GTK_STACK", this);

        putfun("gtk_stack_set_transition_type", 2, widget, setting);

        free(widget);
        free(setting);
}
