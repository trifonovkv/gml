#include"stack_switcher.h"

void stack_switcher_new(FILE *out, char *widget)
{
        syminst(GTK_STACK_SWITCHER, widget, widget);
        syminst(GTK_STACK_SWITCHER, "this", widget);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_stack_switcher_new();\n", widget);
}

void stack_switcher_set_stack(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
"gtk_stack_switcher_set_stack(GTK_STACK_SWITCHER(%s), GTK_STACK(%s));\n",
                widget, setting);
}
