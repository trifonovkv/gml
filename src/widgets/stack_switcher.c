#include "gml.h"
#include "fmtout.h"
#include "stack_switcher.h"

void stack_switcher_new(char *widget)
{
        this = syminst(TYPE_STACK_SWITCHER, widget, widget);

        putdef("GtkWidget *", widget, "gtk_stack_switcher_new", 0);
}

void stack_switcher_set_stack(char *setting)
{
        char *widget = wrptype("GTK_STACK_SWITCHER", this);
        char *stack  = wrptype("GTK_STACK", setting);
        
        putfun("gtk_stack_switcher_set_stack"
              , 2
              , widget
              , stack);

        free(widget);
        free(stack);
}
