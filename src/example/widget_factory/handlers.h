#include <gtk/gtk.h>

void activate_lock(GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       user_data);

void activate_record(GSimpleAction *action,
                     GVariant      *parameter,
                     gpointer       user_data);

void populate_flowbox(GtkWidget *flowbox);

void activate_background(GSimpleAction *action,
                         GVariant      *parameter,
                         gpointer       user_data);

void activate_open(GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       user_data);

gboolean get_idle(gpointer data);

void get_busy(GSimpleAction *action,
              GVariant      *parameter,
              gpointer       user_data);

void activate_delete(GSimpleAction *action,
                     GVariant      *parameter,
                     gpointer       user_data);

void change_transition_state(GSimpleAction *action,
                             GVariant      *state,
                             gpointer       user_data);

void change_theme_state(GSimpleAction *action,
                        GVariant      *state,
                        gpointer       user_data);

void activate_quit(GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       user_data);

void activate_about(GSimpleAction *action,
                    GVariant      *parameter,
                    gpointer       user_data);

void info_bar_response(GtkWidget *infobar, gint response_id);

gboolean on_page(gint i);

void activate_search(GSimpleAction *action,
                     GVariant      *parameter,
                     gpointer       user_data);

void row_activated(GtkListBox *box, GtkListBoxRow *row);

void update_header(GtkListBoxRow *row, GtkListBoxRow *before, gpointer data);

void on_scale_button_value_changed(GtkScaleButton *button,
                                   gdouble         value,
                                   gpointer        user_data);

gboolean on_scale_button_query_tooltip(GtkWidget  *button,
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


