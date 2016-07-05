#include"text_view.h"

void text_view_new(FILE *out, char *widget)
{
        syminst(GTK_TEXT_VIEW, widget, widget);
        syminst(GTK_TEXT_VIEW, "this", widget);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_text_view_new();\n", widget);
}

void text_view_set_border_window_size(FILE *out, char *type, int size)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
"gtk_text_view_set_border_window_size(GTK_TEXT_VIEW(%s), %s, %d);\n", 
                widget, type, size);
}

void text_view_set_wrap_mode(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_editable(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_editable(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_cursor_visible(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_overwrite(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_overwrite(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_pixels_above_lines(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
"gtk_text_view_set_pixels_above_lines(GTK_TEXT_VIEW(%s), %d);\n", 
                widget, setting);
}

void text_view_set_pixels_below_lines(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
"gtk_text_view_set_pixels_below_lines(GTK_TEXT_VIEW(%s), %d);\n", 
                widget, setting);
}

void text_view_set_pixels_inside_wrap(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
"gtk_text_view_set_pixels_inside_wrap(GTK_TEXT_VIEW(%s), %d);\n", 
                widget, setting);
}

void text_view_set_justification(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_text_view_set_justification(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_left_margin(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_left_margin(GTK_TEXT_VIEW(%s), %d);\n", 
                widget, setting);
}

void text_view_set_right_margin(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_text_view_set_right_margin(GTK_TEXT_VIEW(%s), %d);\n", 
                widget, setting);
}

void text_view_set_indent(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_indent(GTK_TEXT_VIEW(%s), %d);\n", 
                widget, setting);
}

void text_view_set_accepts_tab(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_accepts_tab(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_input_purpose(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_text_view_set_input_purpose(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}

void text_view_set_input_hints(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_text_view_set_input_hints(GTK_TEXT_VIEW(%s), %s);\n", 
                widget, setting);
}
