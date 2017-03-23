#include "gml.h"
#include "fmtout.h"
#include "widget.h"

void widget_show()
{
        char *widget = this;

        putfun("gtk_widget_show", 1, widget);
}

void widget_hide()
{
        char *widget = this;

        putfun("gtk_widget_hide", 1, widget);
}

void widget_set_focus_on_click(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_focus_on_click", 2, widget, setting);

        free(setting);
}

void widget_show_all()
{
        char *widget = this;

        putfun("gtk_widget_show_all", 1, widget); 
}

void widget_set_size_request(char *width, char *height)
{
        char *widget = this;

        putfun("gtk_widget_set_size_request", 3, widget, width, height);

        free(width);
        free(height);
}

void widget_set_margin_bottom(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_margin_bottom", 2, widget, setting);

        free(setting);
}

void widget_set_margin_top(char *setting)
{
        char *widget = this;
                              
        putfun("gtk_widget_set_margin_top", 2, widget, setting);

        free(setting);
}

void widget_set_margin_end(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_margin_end", 2, widget, setting);

        free(setting);
}

void widget_set_margin_start(char *setting)
{
        char *widget = this;
                                 
        putfun("gtk_widget_set_margin_start", 2, widget, setting);

        free(setting);
}

void widget_set_valign(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_valign", 2, widget, setting);

        free(setting);
}

void widget_set_halign(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_halign", 2, widget, setting);

        free(setting);
}

void widget_set_vexpand_set(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_vexpand_set", 2, widget, setting);

        free(setting);
}

void widget_set_vexpand(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_vexpand", 2, widget, setting);

        free(setting);
}

void widget_set_hexpand_set(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_hexpand_set", 2, widget, setting);

        free(setting);
}

void widget_set_hexpand(char *setting)
{
        char *widget = this;
                                
        putfun("gtk_widget_set_hexpand", 2, widget, setting);

        free(setting);
}


void widget_set_receives_default(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_receives_default", 2, widget, setting);

        free(setting);
}

void widget_set_sensitive(char *setting)
{
        char *widget = wrptype("GTK_WIDGET", this);

        putfun("gtk_widget_set_sensitive", 2, widget, setting);

        free(setting);
}

void widget_set_no_show_all(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_no_show_all", 2, widget, setting);

        free(setting);
}

void widget_set_app_paintable(char *setting)
{
        char *widget = this;
                                
        putfun("gtk_widget_set_app_paintable", 2, widget, setting);

        free(setting);
}

void widget_set_can_default(char *setting)
{
        char *widget = this;
                              
        putfun("gtk_widget_set_can_default", 2, widget, setting);

        free(setting);
}

void widget_set_can_focus(char *setting)
{
        char *widget = this;

        putfun("gtk_widget_set_can_focus", 2, widget, setting);

        free(setting);
}

void widget_set_visible(char *setting)
{
        char *widget = this;
                                  
        putfun("gtk_widget_set_visible", 2, widget, setting);

        free(setting);
}

void widget_set_events(char *setting)
{
        char *widget = this;                                      

        putfun("gtk_widget_set_events", 2, widget, setting);

        free(setting);
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
 *         char *widget = this;
 *         putfun("gtk_widget_add_accelerator (GtkWidget *widget,
 *                             const gchar *accel_signal,
 *                             GtkAccelGroup *accel_group,
 *                             guint accel_key,
 *                             GdkModifierType accel_mods,
 *                             GtkAccelFlags accel_flags);
 * }
 */

void widget_set_opacity(char *setting)
{
        char *widget = this; 
                  
        putfun("gtk_widget_set_opacity", 2, widget, setting);

        free(setting);
}

void widget_set_tooltip_markup(char *setting)
{
        char *widget = this;  
                                    
        putfun("gtk_widget_set_tooltip_markup", 2, widget, setting);

        free(setting);
}

void widget_set_has_tootip(char *setting)
{
        char *widget = this;                                      

        putfun("gtk_widget_set_has_tooltip", 2, widget, setting);

        free(setting);
}

void widget_set_tooltip_text(char *setting)
{
        char *widget = this;      
                                
        putfun("gtk_widget_set_tooltip_text", 2, widget, setting);

        free(setting);
}

void widget_set_name(char *setting)
{
        char *widget = this;                                      

        putfun("gtk_widget_set_name", 2, widget, setting);

        free(setting);
}
