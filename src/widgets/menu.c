#include "gml.h"
#include "fmtout.h"
#include "menu.h" 

void menu_new(char *widget)
{
        this = syminst(TYPE_MENU, widget, widget);

        putdef("GtkWidget *", widget, "gtk_menu_new", 0);
}

void menu_new_from_model(char *widget, char *setting)
{
        this = syminst(TYPE_MENU, widget, widget);
        char *model = wrptype("G_MENU_MODEL", setting);

        putdef("GtkWidget *", widget, "gtk_menu_new_from_model", 1, model);

        free(model);
}

void menu_set_screen(char *setting)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_set_screen", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_attach(char *child, char *left, char *right, char *top, char *bottom)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_attach", 6, widget, child, left, right, top, bottom);

        free(widget);
        free(child);
        free(left);
        free(right);
        free(top);
        free(bottom);
}

void menu_set_accel_group(char *setting)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_set_accel_group", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_set_accel_path(char *setting)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_set_accel_path", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_set_monitor(char *setting)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_set_monitor", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_set_reserve_toggle_size(char *setting)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_set_reserve_toggle_size", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_set_active(char *setting)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_set_active", 2, widget, setting);

        free(widget);
        free(setting);
}

void menu_attach_to_widget(char *attach_widget, char *detacher)
{
        char *widget = wrptype("GTK_MENU", this);

        putfun("gtk_menu_attach_to_widget", 3, widget, attach_widget, detacher);

        free(widget);
        free(attach_widget);
        free(detacher);
}

