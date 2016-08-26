#include "handlers.h"
#include <stdio.h>

gint pulse_time = 250;
gint pulse_entry_mode = 0;

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

void hbox_show(GtkWidget *widget, 
               GdkEvent  *event, 
               gpointer   user_data)
{
        GtkStyleContext *context;

        context = gtk_style_context_new();

        gtk_style_context_get(context, GTK_STATE_FLAG_NORMAL);

        gtk_style_context_add_class(context, "linked");
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
