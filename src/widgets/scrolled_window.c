#include "gml.h"
#include "fmtout.h"
#include "scrolled_window.h"

void scrolled_window_new(char *widget)
{
        syminst(TYPE_SCROLLED_WINDOW, widget, widget);
        syminst(TYPE_SCROLLED_WINDOW, "this", widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_scrolled_window_new"
              , 2
              , "NULL"
              , "NULL");
}

void scrolled_window_set_policy(char *hscroolbar, char *vscrollbar)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_policy"
              , 3
              , widget
              , hscroolbar
              , vscrollbar);

        free(widget);
        free(hscroolbar);
        free(vscrollbar);
}

void scrolled_window_set_placement(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_placement", 2, widget, setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_shadow_type(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_shadow_type", 2, widget, setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_hadjustment(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_hadjustment", 2, widget, setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_vadjustment(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_vadjustment", 2, widget, setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_min_content_width(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_min_content_width", 2, widget, setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_min_content_height(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_min_content_height"
              ,2
              ,widget
              ,setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_kinetic_scrolling(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_kinetic_scrolling", 2, widget, setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_capture_button_press(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_capture_button_press"
              , 2
              , widget
              , setting);

        free(widget);
        free(setting);
}

void scrolled_window_set_overlay_scrolling(char *setting)
{
        char *widget = wrptype("GTK_SCROLLED_WINDOW", getsymval("this"));

        putfun("gtk_scrolled_window_set_overlay_scrolling", 2, widget, setting);

        free(widget);
        free(setting);
}
