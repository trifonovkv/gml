#include <gtk/gtk.h>

void on_scale_button_value_changed (GtkScaleButton *button,
                                    gdouble         value,
                                    gpointer        user_data);

gboolean on_scale_button_query_tooltip (GtkWidget  *button,
                                        gint        x,
                                        gint        y,
                                        gboolean    keyboard_mode,
                                        GtkTooltip *tooltip,
                                        gpointer    user_data);

char *scale_format_value_blank (GtkScale *scale, gdouble value);

char *scale_format_value    (GtkScale *scale, gdouble value);

void button_show            (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

void on_entry_icon_release  (GtkEntry            *entry,
                             GtkEntryIconPosition icon_pos,
                             GdkEvent            *event,
                             gpointer             user_data);

gboolean entry_show         (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

gboolean combobox3_show     (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

gboolean combobox2_show     (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

gboolean combobox_show      (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);


