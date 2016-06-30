#include"widget.h"

void widget_show_all(FILE *out, char *setting)
{
        tab_insert(out);
        fprintf(out, "gtk_widget_show_all(%s);\n", setting); 
}

void widget_set_size_request(FILE *out, int width, int height)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_size_request(%s, %d, %d);\n", 
                widget, width, height);
}

void widget_set_margin_bottom(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_margin_bottom(%s, %d);\n", 
                widget, setting);
}

void widget_set_margin_top(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_margin_top(%s, %d);\n", widget, setting);
}

void widget_set_margin_end(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_margin_end(%s, %d);\n", widget, setting);
}

void widget_set_margin_start(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_margin_start(%s, %d);\n", widget, setting);
}

void widget_set_valign(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_valign(%s, %s);\n", widget, setting);
}

void widget_set_halign(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_halign(%s, %s);\n", widget, setting);
}

void widget_set_vexpand_set(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_vexpand_set(%s, %s);\n", widget, setting);
}

void widget_set_vexpand(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_vexpand(%s, %s);\n", widget, setting);
}

void widget_set_hexpand_set(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_hexpand_set(%s, %s);\n", widget, setting);
}

void widget_set_hexpand(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_hexpand(%s, %s);\n", widget, setting);
}


void widget_set_receives_default(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_receives_default(%s, %s);\n", 
                widget, setting);
}

void widget_set_sensitive(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_sensitive(%s, %s);\n", widget, setting);
}

void widget_set_no_show_all(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_no_show_all(%s, %s);\n", widget, setting);
}

void widget_set_app_paintable(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_app_paintable(%s, %s);\n", 
                widget, setting);
}

void widget_set_can_default(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_can_default(%s, %s);\n", widget, setting);
}

void widget_set_can_focus(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_can_focus(%s, %s);\n", widget, setting);
}

void widget_set_visible(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_visible(%s, %s);\n", widget, setting);
}

void widget_set_events(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_events(%s, %d);\n", widget, setting);
}

/*
 *Installs an accelerator for this widget in accel_group that causes accel_
 *signal to be emitted if the accelerator is activated. The accel_group needs 
 *to be added to the widget’s toplevel via gtk_window_add_accel_group(), and 
 *the signal must be of type G_SIGNAL_ACTION. Accelerators added through this 
 *function are not user changeable during runtime. If you want to support 
 *accelerators that can be changed by the user, use gtk_accel_map_add_entry() 
 *and gtk_widget_set_accel_path() or gtk_menu_item_set_accel_path() instead.
 *
 *Parameters
 *
 *  widget widget to install an accelerator on
 *  accel_signal widget signal to emit on accelerator activation
 *  accel_group accel group for this widget, added to its toplevel
 *  accel_key GDK keyval of the accelerator
 *  accel_mods modifier key combination of the accelerator
 *  accel_flags flag accelerators, e.g. GTK_ACCEL_VISIBLE
 *
 * void 
 * {
 *         char *widget = getsymval("this");
 *         tab_insert(out); 
 *         fprintf(out, "gtk_widget_add_accelerator (GtkWidget *widget,
 *                             const gchar *accel_signal,
 *                             GtkAccelGroup *accel_group,
 *                             guint accel_key,
 *                             GdkModifierType accel_mods,
 *                             GtkAccelFlags accel_flags);
 * }
 */

void widget_set_opacity(FILE *out, float setting)
{
        char *widget = getsymval("this");                   
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_opacity(%s, %f);\n", widget, setting);
}

void widget_set_tooltip_markup(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_tooltip_markup(%s, %s);\n", 
                widget, setting);
}

void widget_set_has_tootip(FILE *out, char *settng)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_has_tooltip(%s, %s);\n", widget, settng);
}

void widget_set_tooltip_text(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_tooltip_text(%s, %s);\n", widget, setting);
}

void widget_set_name(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, "gtk_widget_set_name(%s, %s);\n", widget, setting);
}
