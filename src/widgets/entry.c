#include "gml.h"
#include "fmtout.h"
#include "entry.h" 

void entry_set_placeholder_text(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_placeholder_text", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_text(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_text", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_activates_default(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));
        
        putfun("gtk_entry_set_activates_default", 2, widget, setting);

        free(widget);
        free(setting);
}

void editable_set_editable(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_editable_set_editable", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_overwrite_mode(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_overwrite_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_has_frame(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_has_frame", 2, widget, setting);

        free(widget);
        free(setting);
}

/*
 * void entry_set_invisible_char(char *setting)
 * {
 *         char *widget = getsymval("this");
 *         putfun("gtk_entry_set_invisible_char(GTK_ENTRY(%s), '%c');\n",
 *                 widget, setting[1]);
 * }
 */

void entry_set_visibility(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_visibility", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_alignment(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_alignment", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_max_width_chars(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));
        
        putfun("gtk_entry_set_max_width_chars", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_input_purpose(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));

        putfun("gtk_entry_set_input_purpose", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_set_max_length(char *setting)
{
        char *widget = wrptype("GTK_ENTRY", getsymval("this"));
        
        putfun("gtk_entry_set_max_length", 2, widget, setting);

        free(widget);
        free(setting);
}

void entry_new(char *widget)
{
        syminst(TYPE_ENTRY, widget, widget);
        syminst(TYPE_ENTRY, "this", widget);

        putdef("GtkWidget *", widget, "gtk_entry_new", 0);
}

