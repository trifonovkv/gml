#include "gml.h"
#include "fmtout.h"
#include "progress_bar.h" 

void progress_bar_new(char *widget)
{
        this = syminst(TYPE_PROGRESS_BAR, widget, widget);

        putdef("GtkWidget *", widget, "gtk_progress_bar_new", 0);
}

void progress_bar_set_fraction(char *setting)
{
        char *widget = wrptype("GTK_PROGRESS_BAR", this);

        putfun("gtk_progress_bar_set_fraction", 2, widget, setting);

        free(widget);
        free(setting);
}

void progress_bar_set_inverted(char *setting)
{
        char *widget = wrptype("GTK_PROGRESS_BAR", this);

        putfun("gtk_progress_bar_set_inverted", 2, widget, setting);

        free(widget);
        free(setting);
}

void progress_bar_set_show_text(char *setting)
{
        char *widget = wrptype("GTK_PROGRESS_BAR", this);

        putfun("gtk_progress_bar_set_show_text", 2, widget, setting);

        free(widget);
        free(setting);
}

void progress_bar_set_text(char *setting)
{
        char *widget = wrptype("GTK_PROGRESS_BAR", this);

        putfun("gtk_progress_bar_set_text", 2, widget, setting);

        free(widget);
        free(setting);
}

void progress_bar_set_ellipsize(char *setting)
{
        char *widget = wrptype("GTK_PROGRESS_BAR", this);

        putfun("gtk_progress_bar_set_ellipsize", 2, widget, setting);

        free(widget);
        free(setting);
}

void progress_bar_set_pulse_step(char *setting)
{
        char *widget = wrptype("GTK_PROGRESS_BAR", this);

        putfun("gtk_progress_bar_set_pulse_step", 2, widget, setting);

        free(widget);
        free(setting);
}
