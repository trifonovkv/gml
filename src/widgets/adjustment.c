#include"adjustment.h"

void adjustment_new(FILE *out, char *widget)
{
        syminst(TYPE_ADJUSTMENT, widget, widget);
        syminst(TYPE_ADJUSTMENT, "this", widget);
        tab_insert(out);
        fprintf(out, 
"GtkAdjustment *%s=gtk_adjustment_new(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);\n", 
                widget);
}

void adjustment_set_value(FILE *out, double setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_adjustment_set_value(GTK_ADJUSTMENT(%s), %f);\n",
                widget, setting);

}

void adjustment_clamp_page(FILE *out, double lower, double upper)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_adjustment_clamp_page(GTK_ADJUSTMENT(%s), %f, %f);\n",
                widget, lower, upper);
}

void adjustment_configure(FILE *out, double value,
                                     double lower,
                                     double upper,
                                     double step_increment,
                                     double page_increment,
                                     double page_size)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
"gtk_adjustment_configure(GTK_ADJUSTMENT(%s), %f, %f, %f, %f, %f, %f);\n",
widget, value, lower, upper, step_increment, page_increment, page_size);
}

void adjustment_set_lower(FILE *out, double setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_adjustment_set_lower(GTK_ADJUSTMENT(%s), %f);\n",
                widget, setting);
}

void adjustment_set_page_increment(FILE *out, double setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_adjustment_set_page_increment(GTK_ADJUSTMENT(%s), %f);\n",
                widget, setting);
}

void adjustment_set_page_size(FILE *out, double setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_adjustment_set_page_size(GTK_ADJUSTMENT(%s), %f);\n",
                widget, setting);
}

void adjustment_set_step_increment(FILE *out, double setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_adjustment_set_step_increment(GTK_ADJUSTMENT(%s), %f);\n",
                widget, setting);
}

void adjustment_set_upper(FILE *out, double setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_adjustment_set_upper(GTK_ADJUSTMENT(%s), %d);\n",
                widget, setting);
}
