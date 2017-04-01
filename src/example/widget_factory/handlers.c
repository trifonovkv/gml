#include "handlers.h"
#include <stdio.h>
#include <glib/gi18n.h>

#define EPSILON (1e-10)
#define PACKAGE_VERSION "3.22.7"

gint pulse_time = 250;
gint pulse_entry_mode = 0;
gint current_page = 0;

typedef struct {
        GtkWidget *flowbox;
        gchar *filename;
} BackgroundData;

static int icon_sizes[] = {0, 1, 2, 3, 4, 5, 6}; 

void update_buttons(GtkWidget *iv, int pos)
{
        GtkWidget *button;
        GtkWidget *sw;

        sw = gtk_widget_get_parent(iv);

        button = GTK_WIDGET(g_object_get_data(G_OBJECT(sw), "increase_button"));
        gtk_widget_set_sensitive(button, pos + 1 < G_N_ELEMENTS(icon_sizes));
        button = GTK_WIDGET(g_object_get_data(G_OBJECT(sw), "decrease_button"));
        gtk_widget_set_sensitive(button, pos > 0);
}

void reset_icon_size(GtkWidget *iv)
{
        GList *cells;
        GtkCellRendererPixbuf *cell;

        cells = gtk_cell_layout_get_cells(GTK_CELL_LAYOUT(iv));
        cell = cells->data;
        g_list_free(cells);

        g_object_set(cell, "stock-size", 5, NULL);

        update_buttons(iv, 2);

        gtk_widget_queue_resize(iv);
}

void increase_icon_size(GtkWidget *iv)
{
        GList *cells;
        GtkCellRendererPixbuf *cell;
        GtkIconSize size;

        cells = gtk_cell_layout_get_cells(GTK_CELL_LAYOUT(iv));
        cell = cells->data;
        g_list_free(cells);

        g_object_get(cell, "stock-size", &size, NULL);
        size = MIN(size + 1, G_N_ELEMENTS(icon_sizes) - 1);
        g_object_set(cell, "stock-size", size, NULL);

        update_buttons(iv, size);

        gtk_widget_queue_resize(iv);
}

void decrease_icon_size(GtkWidget *iv)
{
        GList *cells;
        GtkCellRendererPixbuf *cell;
        GtkIconSize size;

        cells = gtk_cell_layout_get_cells(GTK_CELL_LAYOUT(iv));
        cell = cells->data;
        g_list_free(cells);

        g_object_get(cell, "stock-size", &size, NULL);
        size  = MAX(size - 1, 0);
        g_object_set(cell, "stock-size", size, NULL);
        
        update_buttons(iv, size);

        gtk_widget_queue_resize(iv);
}

void show_statusbar(GtkWidget *widget, gpointer user_data)
{
         gtk_statusbar_push(GTK_STATUSBAR(widget)
                          , 0
                          , "All systems are operating normally.");

}

void change_visible(GSimpleAction *action,
                    GVariant      *parameter,
                    gpointer       user_data)
{
        GtkWidget *widget = GTK_WIDGET(user_data);

        if (gtk_widget_is_visible(widget))
               gtk_widget_set_visible(widget, FALSE);
        else
               gtk_widget_set_visible(widget, TRUE);
}

void set_needs_attention(GtkWidget *page, gboolean needs_attention)
{
        GtkWidget *stack;

        stack = gtk_widget_get_parent(page);
        gtk_container_child_set(GTK_CONTAINER(stack)
                              , page
                              , "needs-attention"
                              , needs_attention
                              , NULL);
}

void page_changed_cb(GtkWidget *stack, GParamSpec *pspec, gpointer data)
{
        const gchar *name;
        GtkWidget *page;

        if (gtk_widget_in_destruction(stack))
                return;

        name = gtk_stack_get_visible_child_name(GTK_STACK(stack));

        if (g_str_equal(name, "Page 1"))
                current_page = 1;
        else if (g_str_equal(name, "Page 2"))
                current_page = 2;
        if (g_str_equal(name, "Page 3")) {
                current_page = 3;
                page = gtk_stack_get_visible_child(GTK_STACK (stack));
                set_needs_attention(GTK_WIDGET(page), FALSE);
        }
}

void activate_lock(GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       user_data)
{
        GtkWidget *window = user_data;
        GtkWidget *button;

        if (!on_page(3))
                return;

        button = GTK_WIDGET(g_object_get_data(G_OBJECT(window), "lockbutton"));
        gtk_button_clicked(GTK_BUTTON(button));
}

void activate_record(GSimpleAction *action,
                     GVariant      *parameter,
                     gpointer       user_data)
{
        GtkWidget *window = user_data;
        GtkWidget *button;

        if (!on_page(3))
                return;

        button = GTK_WIDGET(g_object_get_data(G_OBJECT(window), 
                                             "record_button"));
        gtk_button_clicked(GTK_BUTTON(button));
}

void background_loaded_cb(GObject      *source,
                          GAsyncResult *res,
                          gpointer      data)
{
        BackgroundData *bd = data;
        GtkWidget *child;
        GdkPixbuf *pixbuf;
        GError *error = NULL;
        
        pixbuf = gdk_pixbuf_new_from_stream_finish(res, &error);
        if (error) {
                g_warning("Error loading '%s': %s", 
                          bd->filename, 
                          error->message);
                g_error_free(error);
                return;
        }
        
        child = gtk_image_new_from_pixbuf(pixbuf);
        gtk_widget_show(child);
        gtk_flow_box_insert(GTK_FLOW_BOX(bd->flowbox), child, -1);
        child = gtk_widget_get_parent(child);
        g_object_set_data_full(G_OBJECT(child), 
                              "filename", 
                               bd->filename, 
                               g_free);
        g_free(bd);
}

void populate_flowbox(GtkWidget *flowbox)
{
        const gchar *location;
        GDir *dir;
        GError *error = NULL;
        const gchar *name;
        gchar *filename;
        GFile *file;
        GInputStream *stream;
        BackgroundData *bd;
        GdkPixbuf *pixbuf;
        GtkWidget *child;

        if (GPOINTER_TO_UINT(g_object_get_data(G_OBJECT(flowbox), "populated")))
                return;

        g_object_set_data(G_OBJECT(flowbox), "populated", GUINT_TO_POINTER(1));

        pixbuf = gdk_pixbuf_new(GDK_COLORSPACE_RGB, FALSE, 8, 110, 70);
        gdk_pixbuf_fill(pixbuf, 0xffffffff);
        child = gtk_image_new_from_pixbuf(pixbuf);
        gtk_widget_show(child);
        gtk_flow_box_insert(GTK_FLOW_BOX(flowbox), child, -1);

        location = "/usr/share/backgrounds/gnome";
        dir = g_dir_open(location, 0, &error);
        if (error) {
                g_warning("%s", error->message);
                g_error_free(error);
                return;
        }

        while ((name = g_dir_read_name(dir)) != NULL) {
            filename = g_build_filename(location, name, NULL);
            file = g_file_new_for_path(filename);
            stream = G_INPUT_STREAM(g_file_read(file, NULL, &error));
            if (error) {
                g_warning("%s", error->message);
                g_clear_error(&error);
                g_free(filename); 
            } else {
                bd = g_new(BackgroundData, 1);
                bd->flowbox = flowbox;
                bd->filename = filename;
                gdk_pixbuf_new_from_stream_at_scale_async(stream, 
                                                          110, 
                                                          110, 
                                                          TRUE, 
                                                          NULL, 
                                                          background_loaded_cb,
                                                          bd);
            }

            g_object_unref(file);
            g_object_unref(stream);
        }

        g_dir_close(dir);
}

void activate_background(GSimpleAction *action,
                         GVariant      *parameter,
                         gpointer       user_data)
{
  GtkWidget *window = user_data;
  GtkWidget *dialog;
  GtkWidget *flowbox;

  if (!on_page(2))
          return;

  dialog = GTK_WIDGET(g_object_get_data(G_OBJECT(window), "selection_dialog"));
  flowbox = GTK_WIDGET(g_object_get_data(G_OBJECT(window), 
                      "selection_flowbox"));

  gtk_widget_show(dialog);
  populate_flowbox(flowbox);
}

void activate_open(GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       user_data)
{
        GtkWidget *window = user_data;
        GtkWidget *button;

        if (!on_page(3))
                return;

        button = GTK_WIDGET(g_object_get_data(G_OBJECT(window), 
                           "open_menubutton"));
        gtk_button_clicked(GTK_BUTTON(button));
}

gboolean get_idle(gpointer data)
{
        GtkWidget *window = data;
        GtkApplication *app = gtk_window_get_application(GTK_WINDOW(window));

        gtk_widget_set_sensitive(window, TRUE);
        gdk_window_set_cursor(gtk_widget_get_window(window), NULL);
        g_application_unmark_busy(G_APPLICATION(app));

        return G_SOURCE_REMOVE;
}

void get_busy(GSimpleAction *action,
              GVariant      *parameter,
              gpointer       user_data)
{
        GtkWidget *window = user_data;
        GdkCursor *cursor;
        GtkApplication *app = gtk_window_get_application(GTK_WINDOW(window));

        g_application_mark_busy(G_APPLICATION(app));
        cursor = gdk_cursor_new_from_name(gtk_widget_get_display(window), 
                                          "wait");
        gdk_window_set_cursor(gtk_widget_get_window(window), cursor);
        g_object_unref(cursor);
        g_timeout_add(5000, get_idle, window);

        gtk_widget_set_sensitive(window, FALSE);
}

void activate_delete(GSimpleAction *action,
                     GVariant      *parameter,
                     gpointer       user_data)
{
        GtkWidget *infobar = GTK_WIDGET(user_data);

        if (!on_page(2))
                return;

        gtk_widget_show(infobar);
}

void change_transition_state(GSimpleAction *action,
                             GVariant      *state,
                             gpointer       user_data)
{
        GtkStackTransitionType transition;
        GtkStack *page_stack = GTK_STACK(user_data);
     
        if (g_variant_get_boolean(state))
                transition = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT;
        else
                transition = GTK_STACK_TRANSITION_TYPE_NONE;

        gtk_stack_set_transition_type(page_stack, transition);

        g_simple_action_set_state(action, state);
}

void change_theme_state(GSimpleAction *action,
                        GVariant      *state,
                        gpointer       user_data)
{
        GtkSettings *settings = gtk_settings_get_default();

        g_object_set(G_OBJECT(settings),
                     "gtk-application-prefer-dark-theme",
                     g_variant_get_boolean(state),
                     NULL);

        g_simple_action_set_state(action, state);
}

void activate_quit(GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       user_data)
{
        GtkApplication *app = user_data;
        GtkWidget *win;
        GList *list, *next;

        list = gtk_application_get_windows(app);
        while (list) {
                win = list->data;
                next = list->next;

                gtk_widget_destroy(GTK_WIDGET(win));

                list = next;
        }
}

void activate_about(GSimpleAction *action,
                    GVariant      *parameter,
                    gpointer       user_data)
{
        GtkApplication *app = user_data;
        const gchar *authors[] = {
                "Andrea Cimitan",
                "Cosimo Cecchi",
                NULL
        };
        gchar *version;
        GString *s;

        s = g_string_new("");

        g_string_append(s, "System libraries\n");
        g_string_append_printf(s, "\tGLib\t%d.%d.%d\n",
                               glib_major_version,
                               glib_minor_version,
                               glib_micro_version);
        g_string_append_printf(s, "\tGTK+\t%d.%d.%d\n",
                               gtk_get_major_version(),
                               gtk_get_minor_version(),
                               gtk_get_micro_version());
        g_string_append_printf(s, "\nA link can apppear here: <http://www.gtk.org>");

        version = g_strdup_printf("%s\nRunning against GTK+ %d.%d.%d",
                                  PACKAGE_VERSION,
                                  gtk_get_major_version(),
                                  gtk_get_minor_version(),
                                  gtk_get_micro_version());

        gtk_show_about_dialog(GTK_WINDOW(gtk_application_get_active_window(app)),
                              "program-name", "GTK+ Widget Factory",
                              "version", version,
                              "copyright", "(C) 1997-2013 The GTK+ Team",
                              "license-type", GTK_LICENSE_LGPL_2_1,
                              "website", "http://www.gtk.org",
                              "comments", "Program to demonstrate GTK+ themes and widgets",
                              "authors", authors,
                              "logo-icon-name", "gtk3-widget-factory",
                              "title", "About GTK+ Widget Factory",
                              NULL);

        g_string_free(s, TRUE);
        g_free(version);
}

void info_bar_response(GtkWidget *infobar, gint response_id) 
{
        if (response_id == GTK_RESPONSE_CLOSE)
                gtk_widget_hide(infobar);
}

gboolean on_page(gint i) 
{
        return current_page == i;
}

void activate_search(GSimpleAction *action,
                     GVariant      *parameter,
                     gpointer       user_data)
{
        GtkSearchBar *searchbar = GTK_SEARCH_BAR(user_data);

        if (!on_page(2))
                return;

        gtk_search_bar_set_search_mode(searchbar, TRUE);
}

void row_activated(GtkListBox *box, GtkListBoxRow *row) 
{
        GtkWidget *image;
        GtkWidget *dialog;

        image = (GtkWidget *)g_object_get_data(G_OBJECT(row), "image");
        dialog = (GtkWidget *)g_object_get_data(G_OBJECT(row), "dialog");

        if (image) {
                if (gtk_widget_get_opacity (image) > 0)
                        gtk_widget_set_opacity (image, 0);
                else
                        gtk_widget_set_opacity (image, 1);
        }
        else if (dialog) {
                gtk_window_present (GTK_WINDOW (dialog));
        }
}

void update_header(GtkListBoxRow *row,
                   GtkListBoxRow *before,
                   gpointer       data)
{
        if (before != NULL && gtk_list_box_row_get_header(row) == NULL) {
                  GtkWidget *separator;

                  separator = gtk_separator_new(GTK_ORIENTATION_HORIZONTAL);
                  gtk_widget_show(separator);
                  gtk_list_box_row_set_header(row, separator);
        }
}

void on_scale_button_value_changed(GtkScaleButton *button,
                                   gdouble         value,
                                   gpointer        user_data) 
{
        gtk_widget_trigger_tooltip_query(GTK_WIDGET (button));
}

gboolean on_scale_button_query_tooltip(GtkWidget  *button,
                                       gint        x,
                                       gint        y,
                                       gboolean    keyboard_mode,
                                       GtkTooltip *tooltip,
                                       gpointer    user_data)
{
        GtkScaleButton *scale_button = GTK_SCALE_BUTTON(button);
        GtkAdjustment *adjustment;
        gdouble val;
        gchar *str;
        AtkImage *image;

        image = ATK_IMAGE(gtk_widget_get_accessible (button));

        adjustment = gtk_scale_button_get_adjustment (scale_button);
        val = gtk_scale_button_get_value(scale_button);

        if (val < (gtk_adjustment_get_lower (adjustment) + EPSILON)) {
                str = g_strdup(_("Muted"));
        } else if (val >= (gtk_adjustment_get_upper(adjustment) - EPSILON)) {
                str = g_strdup(_("Full Volume"));
        } else {
                gint percent;

                percent = (gint)(100. * val / (gtk_adjustment_get_upper(adjustment) - gtk_adjustment_get_lower(adjustment)) + .5);

                str = g_strdup_printf(C_("volume percentage", "%d %%"), percent);
        }

        gtk_tooltip_set_text(tooltip, str);
        atk_image_set_image_description(image, str);
        g_free(str);

        return TRUE;
}

char *scale_format_value_blank(GtkScale *scale, gdouble value)
{
        return g_strdup(" ");
}

char *scale_format_value(GtkScale *scale, gdouble value)
{
        return g_strdup_printf("%0.*f", 1, value);
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
