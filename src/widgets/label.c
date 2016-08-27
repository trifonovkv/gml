#include "gml.h"
#include "fmtout.h"
#include "label.h" 

void label_new(char *widget)
{
        syminst(TYPE_LABEL, widget, widget);
        syminst(TYPE_LABEL, "this", widget);

        putdef("GtkWidget *", widget, "gtk_label_new", 1, "\"\"");
}

void label_set_text(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_text", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_pattern(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_pattern", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_justify(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_justify", 2, widget, setting);

        free(widget);
        free(setting);
}


void label_set_xalign(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_xalign", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_yalign(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_yalign", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_ellipsize(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_ellipsize", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_width_chars(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_width_chars", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_max_width_chars(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_max_width_chars", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_line_wrap(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_line_wrap", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_line_wrap_mode(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_line_wrap_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_lines(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_lines", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_select_region(char *start_offset, char *end_offset)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_select_region", 3, widget, start_offset, end_offset);

        free(widget);
        free(start_offset);
        free(end_offset);
}

void label_set_selectable(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_selectable", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_text_with_mnemonic(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_text_with_mnemonic", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_label(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_label", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_use_markup(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_use_markup", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_use_underline(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_use_underline", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_single_line_mode(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_single_line_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_angle(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_angle", 2, widget, setting);

        free(widget);
        free(setting);
}

void label_set_track_visited_links(char *setting)
{
        char *widget = wrptype("GTK_LABEL", getsymval("this"));

        putfun("gtk_label_set_track_visited_links", 2, widget, setting);

        free(widget);
        free(setting);
}

