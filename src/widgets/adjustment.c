#include"gml.h"
#include"fmtout.h"
#include"adjustment.h"

void adjustment_new(char *widget)
{
        syminst(TYPE_ADJUSTMENT, widget, widget);
        syminst(TYPE_ADJUSTMENT, "this", widget);
        
        putdef("GtkAdjustment *",widget,"gtk_adjustment_new",6
                                                            ,"0.0"
                                                            ,"0.0"
                                                            ,"0.0"
                                                            ,"0.0"
                                                            ,"0.0"
                                                            ,"0.0");
}

void adjustment_set_value(char *setting)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));
        
        putfun("gtk_adjustment_set_value",2
                                         ,widget
                                         ,setting);

        free(widget);
}

void adjustment_clamp_page(char *lower, char *upper)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));
        
        putfun("gtk_adjustment_clamp_page",3
                                          ,widget
                                          ,lower
                                          ,upper);

        free(widget);
}

void adjustment_configure(char *value,
                          char *lower,
                          char *upper,
                          char *step_increment,
                          char *page_increment,
                          char *page_size)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));

        putfun("gtk_adjustment_configure",7
                                         ,widget
                                         ,value
                                         ,lower
                                         ,upper
                                         ,step_increment
                                         ,page_increment
                                         ,page_size);
        
        free(widget);
}

void adjustment_set_lower(char *setting)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));

        putfun("gtk_adjustment_set_lower",2
                                         ,widget
                                         ,setting);
        
        free(widget);
}

void adjustment_set_page_increment(char *setting)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));
        
        putfun("gtk_adjustment_set_page_increment",2
                                                  ,widget
                                                  ,setting);
        
        free(widget);
}

void adjustment_set_page_size(char *setting)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));

        putfun("gtk_adjustment_set_page_size",2
                                             ,widget
                                             ,setting);
        
        free(widget);
}

void adjustment_set_step_increment(char *setting)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));

        putfun("gtk_adjustment_set_step_increment",2
                                                  ,widget
                                                  ,setting);
        
        free(widget);
}

void adjustment_set_upper(char *setting)
{
        char *widget = wrptype("GTK_ADJUSTMENT", getsymval("this"));
        
        putfun("gtk_adjustment_set_upper",2
                                         ,widget
                                         ,setting);
        
        free(widget);
}
