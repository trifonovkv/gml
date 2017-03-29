#include "gml.h"
#include "fmtout.h"
#include "expander.h" 

void expander_new(char *widget)
{
        this = syminst(TYPE_EXPANDER, widget, widget);

        putdef("GtkWidget *", widget, "gtk_expander_new", 1, "NULL");
}

void expander_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_EXPANDER, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_expander_new_with_mnemonic"
             , 1
             , setting);

        free(setting);
}

void expander_set_expanded(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_expanded", 2, widget, setting);

        free(widget);
        free(setting);
}

void expander_set_label(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_label", 2, widget, setting);

        free(widget);
        free(setting);
}

void expander_set_use_underline(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_use_underline", 2, widget, setting);

        free(widget);
        free(setting);
}

void expander_set_use_markup(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_use_markup", 2, widget, setting);

        free(widget);
        free(setting);
}

void expander_set_label_widget(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_label_widget", 2, widget, setting);

        free(widget);
        free(setting);
}

void expander_set_label_fill(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_label_fill", 2, widget, setting);

        free(widget);
        free(setting);
}

void expander_set_resize_toplevel(char *setting)
{
        char *widget = wrptype("GTK_EXPANDER", this);

        putfun("gtk_expander_set_resize_toplevel", 2, widget, setting);

        free(widget);
        free(setting);
}
