#include "gml.h"
#include "fmtout.h"
#include "combo_box.h"

void combo_box_new(char *widget)
{
        this = syminst(TYPE_COMBO_BOX, widget, widget);
        
        putdef("GtkWidget *", widget, "gtk_combo_box_new", 0);
}

void combo_box_new_with_entry(char *widget)
{
        this = syminst(TYPE_COMBO_BOX_ENTRY, widget, widget);
        
        putdef("GtkWidget *", widget, "gtk_combo_box_new_with_entry", 0);
}

void combo_box_set_wrap_width(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_wrap_width", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_row_span_column(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_row_span_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_column_span_column(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_column_span_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_active(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_active", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_id_column(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_id_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_active_id(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_active_id", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_model(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_model", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_focus_on_click(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_focus_on_click", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_button_sensitivity(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_button_sensitivity", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_entry_text_column(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_entry_text_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void combo_box_set_popup_fixed_width(char *setting)
{
        char *widget = wrptype("GTK_COMBO_BOX", this);

        putfun("gtk_combo_box_set_popup_fixed_width", 2, widget, setting);

        free(widget);
        free(setting);
}
