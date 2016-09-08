#include "gml.h"
#include "fmtout.h"
#include "window.h" 

char *WINDOW_TYPE = "GTK_WINDOW_TOPLEVEL";

void window_set_titlebar(char *titlebar)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_titlebar", 2, widget, titlebar);

        free(widget);
}

void window_set_default_geometry(char *width, char *height)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_default_geometry", 3, widget, width, height);

        free(widget);
        free(width);
        free(height);
}

void window_set_hide_titlebar_when_maximized(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_hide_titlebar_when_maximized"
              , 2
              , widget
              , setting);

        free(widget);
        free(setting);
}

void window_set_keep_above(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_keep_above", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_keep_below(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_keep_below", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_startup_id(char *string)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_startup_id", 2, widget, string);

        free(widget);
        free(string);
}

void window_set_role(char *string)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_role", 2, widget, string);

        free(widget);
        free(string);
}

void window_set_icon_name(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_icon_name", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_mnemonics_visible(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_mnemonics_visible", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_focus_visible(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_focus_visible", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_decorated(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_decorated", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_gravity(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_gravity", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_type_hint(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_type_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_position(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_position", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_skip_pager_hint(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_skip_pager_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_modal(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_modal", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_focus_on_map(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_focus_on_map", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_skip_taskbar_hint(char *setting)
{ 
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_skip_taskbar_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_destroy_with_parent(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_destroy_with_parent", 2, widget, setting); 

        free(widget);
        free(setting);
}

void window_set_accept_focus(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_accept_focus", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_urgency_hint(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_urgency_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_deletable(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_deletable", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_resizable(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_resizable", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_new(char *widget)
{
        this = syminst(TYPE_WINDOW, widget, widget);

        putdef("GtkWidget *", widget, "gtk_application_window_new", 1, "app");
}

void window_set_title(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_default_size(char *width, char *height)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_default_size", 3, widget, width, height);

        free(widget);
        free(width);
        free(height);
}

void window_set_application(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_application", 2, widget, setting);

        free(widget);
        free(setting);
}

