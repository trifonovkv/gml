#include <gtk/gtk.h>

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


