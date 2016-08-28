#include "gml.h"
#include "fmtout.h"
#include "spin_button.h" 

void spin_button_new(char *widget)
{
        syminst(TYPE_SPIN_BUTTON, widget, widget);
        syminst(TYPE_SPIN_BUTTON, "this", widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_spin_button_new"
              , 3
              , "NULL"
              , "0.0f"
              , "0");
}

void spin_button_set_adjustment(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_adjustment", 2, widget, setting);

        free(widget);
        free(setting);
}

void spin_button_set_digits(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_digits", 2, widget, setting);

        free(widget);
        free(setting);
}

void spin_button_set_increments(char *step, char *page)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_increments", 3, widget, step, page);

        free(widget);
        free(step);
        free(page);
}

void spin_button_set_range(char *min, char *max)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_range", 3, widget, min, max);

        free(widget);
        free(min);
        free(max);
}

void spin_button_set_value(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_value", 2, widget, setting);

        free(widget);
        free(setting);
}

void spin_button_set_update_policy(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_update_policy", 2, widget, setting);

        free(widget);
        free(setting);
}

void spin_button_set_numeric(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_numeric", 2, widget, setting);

        free(widget);
        free(setting);
}

void spin_button_spin(char *direction, char *increment)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_spin", 3, widget, direction, increment);

        free(widget);
        free(direction);
        free(increment);
}

void spin_button_set_wrap(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_wrap", 2, widget, setting);

        free(widget);
        free(setting);
}

void spin_button_set_snap_to_ticks(char *setting)
{
        char *widget = wrptype("GTK_SPIN_BUTTON", getsymval("this"));

        putfun("gtk_spin_button_set_snap_to_ticks", 2, widget, setting);

        free(widget);
        free(setting);
}

