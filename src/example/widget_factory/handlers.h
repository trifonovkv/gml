#include <gtk/gtk.h>

void button_show            (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

void hbox_show              (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

void on_entry_icon_release  (GtkEntry            *entry,
                             GtkEntryIconPosition icon_pos,
                             GdkEvent            *event,
                             gpointer             user_data);

gboolean entry_show         (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

gboolean combobox_show      (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);

gboolean combobox2_show     (GtkWidget *widget, 
                             GdkEvent  *event, 
                             gpointer   user_data);
