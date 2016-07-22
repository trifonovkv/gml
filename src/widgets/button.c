#include"button.h" 

void button_new(FILE *out, char *setting)
{
        syminst(TYPE_BUTTON, setting, setting);
        syminst(TYPE_BUTTON, "this", setting);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_button_new();\n", setting);
} 

void button_set_relief(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_relief(GTK_BUTTON(%s), %s);\n",
                widget, setting);
}

void button_set_label(FILE *out, char *setting) 
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_label(GTK_BUTTON(%s), %s);\n", 
                widget, setting);
}

void button_set_use_underline(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_use_underline(GTK_BUTTON(%s), %s);\n",
                widget, setting);
}

void button_set_focus_on_click(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_focus_on_click(GTK_BUTTON(%s), %s);\n",
                widget, setting);
}

void button_set_image(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_image(GTK_BUTTON(%s), %s);\n",
                widget, setting);
}

void button_set_image_position(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_image_position(GTK_BUTTON(%s), %s);\n",
                widget, setting);
}

void button_set_always_show_image(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_button_set_always_show_image(GTK_BUTTON(%s), %s);\n",
                widget, setting);
}

