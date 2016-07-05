#include"header_bar.h"

void header_bar_new(FILE *out, char *widget) 
{
        syminst(GTK_HEADER_BAR, widget, widget);
        syminst(GTK_HEADER_BAR, "this", widget);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_header_bar_new();\n", widget);
}

void header_bar_set_title(FILE *out, char *string)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_header_bar_set_title(GTK_HEADER_BAR(%s), %s);\n", 
                widget, string);
}
 
void header_bar_set_subtitle(FILE *out, char *string)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_header_bar_set_subtitle(GTK_HEADER_BAR(%s), %s);\n",
                widget, string);
}
 
void header_bar_set_has_subtitle(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_header_bar_set_has_subtitle(GTK_HEADER_BAR(%s), %s);\n", 
                widget, setting);
}

void header_bar_set_custom_title(FILE *out, char *title_widget)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_header_bar_set_custom_title(GTK_HEADER_BAR(%s), %s);\n", 
                widget, title_widget);
}

void header_bar_pack_start(FILE *out, char *child)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_header_bar_pack_start(GTK_HEADER_BAR(%s), %s);\n",
                widget, child);
}

void header_bar_pack_end(FILE *out, char *child)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_header_bar_pack_end(GTK_HEADER_BAR(%s), %s);\n",
                widget, child);
}

void header_bar_set_show_close_button(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
              "gtk_header_bar_set_show_close_button(GTK_HEADER_BAR(%s), %s);\n",
              widget, setting);
}

void header_bar_set_decoration_layout(FILE *out, char *string)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
              "gtk_header_bar_set_decoration_layout(GTK_HEADER_BAR(%s), %s);\n",
              widget, string);
}
