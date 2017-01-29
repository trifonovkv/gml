#include "handlers.h"
#include <stdio.h>
#include <glib/gi18n.h>

#define EPSILON (1e-10)

gint pulse_time = 250;
gint pulse_entry_mode = 0;

void on_scale_button_value_changed (GtkScaleButton *button,
                                    gdouble         value,
                                    gpointer        user_data) 
{
        gtk_widget_trigger_tooltip_query (GTK_WIDGET (button));
}

gboolean on_scale_button_query_tooltip (GtkWidget  *button,
                                        gint        x,
                                        gint        y,
                                        gboolean    keyboard_mode,
                                        GtkTooltip *tooltip,
                                        gpointer    user_data)
{
        GtkScaleButton *scale_button = GTK_SCALE_BUTTON (button);
        GtkAdjustment *adjustment;
        gdouble val;
        gchar *str;
        AtkImage *image;

        image = ATK_IMAGE (gtk_widget_get_accessible (button));

        adjustment = gtk_scale_button_get_adjustment (scale_button);
        val = gtk_scale_button_get_value (scale_button);

        if (val < (gtk_adjustment_get_lower (adjustment) + EPSILON)) {
                str = g_strdup (_("Muted"));
        } else if (val >= (gtk_adjustment_get_upper (adjustment) - EPSILON)) {
                str = g_strdup (_("Full Volume"));
        } else {
                gint percent;

                percent = (gint) (100. * val / (gtk_adjustment_get_upper (adjustment) - gtk_adjustment_get_lower (adjustment)) + .5);

                str = g_strdup_printf (C_("volume percentage", "%d %%"), percent);
        }

        gtk_tooltip_set_text (tooltip, str);
        atk_image_set_image_description (image, str);
        g_free (str);

        return TRUE;
}

char *scale_format_value_blank (GtkScale *scale, gdouble value)
{
        return g_strdup (" ");
}

char *scale_format_value (GtkScale *scale, gdouble value)
{
        return g_strdup_printf ("%0.*f", 1, value);
}

void button_show(GtkWidget *widget, 
                 GdkEvent  *event, 
                 gpointer   user_data)
{
        GtkWidget *image;

        image = gtk_image_new_from_icon_name("window-close-symbolic"
                                            , GTK_ICON_SIZE_BUTTON);
        gtk_container_add(GTK_CONTAINER(widget), image);
        gtk_widget_show_all(widget);
}

void remove_pulse(gpointer pulse_id)
{
        g_source_remove(GPOINTER_TO_UINT(pulse_id));
}


gboolean pulse_it(GtkWidget *widget)
{
        guint pulse_id;

        if (GTK_IS_ENTRY(widget))
                gtk_entry_progress_pulse(GTK_ENTRY(widget));
        else
                gtk_progress_bar_pulse(GTK_PROGRESS_BAR (widget));

        pulse_id = g_timeout_add(pulse_time, (GSourceFunc)pulse_it, widget);
        g_object_set_data_full(G_OBJECT(widget)
                              , "pulse_id"
                              , GUINT_TO_POINTER(pulse_id)
                              , remove_pulse);

        return G_SOURCE_REMOVE;
}

void on_entry_icon_release(GtkEntry            *entry,
                           GtkEntryIconPosition icon_pos,
                           GdkEvent            *event,
                           gpointer             user_data)
{
        if (icon_pos != GTK_ENTRY_ICON_SECONDARY)
                return;

        pulse_entry_mode++;

        if (pulse_entry_mode % 3 == 0) {
                g_object_set_data(G_OBJECT(entry), "pulse_id", NULL);
                gtk_entry_set_progress_fraction(entry, 0);
        }
        else if (pulse_entry_mode % 3 == 1)
                gtk_entry_set_progress_fraction(entry, 0.25);
        else if (pulse_entry_mode % 3 == 2) {
                if (pulse_time - 50 < 400) {
                        gtk_entry_set_progress_pulse_step(entry, 0.1);
                        pulse_it(GTK_WIDGET(entry));
                }
       }
}

gboolean entry_show(GtkWidget *widget, 
                    GdkEvent  *event, 
                    gpointer   user_data)
{
        gtk_entry_set_icon_from_icon_name(GTK_ENTRY(widget),
                                          GTK_ENTRY_ICON_SECONDARY,
                                          "view-refresh-symbolic");
        gtk_entry_set_placeholder_text(GTK_ENTRY(widget),
                                       "Click icon to change mode");
}

gboolean combobox3_show(GtkWidget *widget, 
                        GdkEvent  *event, 
                        gpointer   user_data)
{
        static int i = 0;

        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget), NULL, "Andrea");
        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget), NULL, "Otto");
        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget), NULL, "Orville");
        
        gtk_combo_box_set_active (GTK_COMBO_BOX(widget), i++);
}

gboolean combobox2_show(GtkWidget *widget, 
                        GdkEvent  *event, 
                        gpointer   user_data)
{
        static int i = 0;

        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget), NULL, "Left");
        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget), NULL, "Middle");
        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget), NULL, "Right");
        
        gtk_combo_box_set_active (GTK_COMBO_BOX(widget), i++);
}

gboolean combobox_show(GtkWidget *widget, 
                       GdkEvent  *event, 
                       gpointer   user_data)
{
        GtkWidget *child = gtk_bin_get_child(GTK_BIN(widget));

        gtk_entry_set_text(GTK_ENTRY(child), "comboboxentry");

        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget)
                                 , NULL
                                 , "Donald Duck");
        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget)
                                 , NULL
                                 , "Mickey Mouse");
        gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(widget)
                                 , NULL
                                 , "Jet McQuack");
}
