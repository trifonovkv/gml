#include "gml.h"
#include "fmtout.h"
#include "range.h" 

void range_set_fill_level(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_fill_level", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_restrict_to_fill_level(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_restrict_to_fill_level", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_show_fill_level(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_show_fill_level", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_adjustment(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_adjustment", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_inverted(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_inverted", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_value(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_value", 2, widget, setting); 
        free(widget);
        free(setting);
}

void range_set_increments(char *step, char *page)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_increments", 3, widget, step, page);

        free(widget);
        free(step);
        free(page);
}

void range_set_range(char *min, char *max)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_range", 3, widget, min, max);

        free(widget);
        free(min);
        free(max);
}

void range_set_round_digits(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_round_digits", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_lower_stepper_sensitivity(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_lower_stepper_sensitivity", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_upper_stepper_sensitivity(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_upper_stepper_sensitivity", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_flippable(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_flippable", 2, widget, setting);

        free(widget);
        free(setting);
}

void range_set_slider_size_fixed(char *setting)
{
        char *widget = wrptype("GTK_RANGE", this);

        putfun("gtk_range_set_slider_size_fixed", 2, widget, setting);

        free(widget);
        free(setting);
}

