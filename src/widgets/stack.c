#include"stack.h"

void stack_new(FILE *out, char *widget)
{
        syminst(TYPE_STACK, widget, widget);
        syminst(TYPE_STACK, "this", widget);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_stack_new();\n", widget);
}

void stack_add_titled(FILE *out, char *child, char *name, char *title)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_stack_add_titled(GTK_STACK(%s), %s, %s, %s);\n",
                widget, child, name, title);
}

void stack_set_homogeneous(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_stack_set_homogeneous(GTK_STACK(%s), %s);\n",
                widget, setting);
}

void stack_set_hhomogeneous(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_stack_set_hhomogeneous(GTK_STACK(%s), %s);\n",
                widget, setting);
}

void stack_set_vhomogeneous(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_stack_set_vhomogeneous(GTK_STACK(%s), %s);\n",
                widget, setting);
}
 
void stack_set_transition_duration(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_stack_set_transition_duration(GTK_STACK(%s), %d);\n",
                widget, setting);
}

void stack_set_transition_type(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_stack_set_transition_type(GTK_STACK(%s), %s);\n",
                widget, setting);
}
