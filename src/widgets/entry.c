#include"entry.h" 

void entry_set_placeholder_text(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_placeholder_text(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

void entry_set_text(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_text(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

void entry_set_activates_default(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_activates_default(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

void editable_set_editable(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_editable_set_editable(GTK_EDITABLE(%s), %s);\n",
                widget, setting);
}

void entry_set_overwrite_mode(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_overwrite_mode(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

void entry_set_has_frame(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_has_frame(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

/*
 * void entry_set_invisible_char(FILE *out, char *setting)
 * {
 *         char *widget = getsymval("this");
 *         tab_insert(out);
 *         fprintf(out, "gtk_entry_set_invisible_char(GTK_ENTRY(%s), '%c');\n",
 *                 widget, setting[1]);
 * }
 */

void entry_set_visibility(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_visibility(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

void entry_set_alignment(FILE *out, float setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_alignment(GTK_ENTRY(%s), %.2f);\n",
                widget, setting);
}

void entry_set_max_width_chars(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_max_width_chars(GTK_ENTRY(%s), %d);\n",
                widget, setting);
}

void entry_set_input_purpose(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_input_purpose(GTK_ENTRY(%s), %s);\n",
                widget, setting);
}

void entry_set_max_length(FILE *out, int setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_entry_set_max_length(GTK_ENTRY(%s), %d);\n",
                widget, setting);
}

void entry_new(FILE *out, char *widget)
{
        syminst(GTK_ENTRY, widget, widget);
        syminst(GTK_ENTRY, "this", widget);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_entry_new();\n", widget);
}

