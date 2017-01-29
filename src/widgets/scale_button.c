#include "gml.h"
#include "fmtout.h"
#include "scale_button.h" 

void scale_button_new(char *widget
                    , char *size
                    , char *min
                    , char *max
                    , char *step)
{
        this = syminst(TYPE_SCALE_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_scale_button_new"
             , 5
             , size
             , min
             , max
             , step
             , "NULL");
}

void scale_button_set_adjustment(char *setting)
{
        char *widget = wrptype("GTK_SCALE_BUTTON", this);

        putfun("gtk_scale_button_set_adjustment", 2, widget, setting);

        free(widget);
        free(setting);
}

void scale_button_add_icon(char *setting)
{
        syminst(TYPE_ICON, setting, setting);
}

void scale_button_set_icons()
{   
        char *icon, *icons, *tmp;
        symrec *sym;

        if (getsymval("icons") == NULL) {
                syminst(TYPE_ICONS, "icons", "icons");
        }

        if ((sym = get_symbol_by_type(TYPE_ICON)) != NULL) {
              icon = strdup(sym->value);
              delete_symbol(sym);
              icons = concat("", icon);
              free(icon);

              while ((sym = get_symbol_by_type(TYPE_ICON)) != NULL) {
                      icon = strdup(sym->value);
                      delete_symbol(sym);
                      tmp = concatv(3, icons, ", ", icon);

                      free(icons);
                      icons = tmp;
                      free(icon);
              }
        } else {
              return;
        }
 
        prtstr(3, "const gchar *icons[] = {", icons, ", NULL};\n");

        char *widget = wrptype("GTK_SCALE_BUTTON", this);

        putfun("gtk_scale_button_set_icons", 2, widget, "icons");

        free(widget);
}

void scale_button_set_value(char *setting)
{
        char *widget = wrptype("GTK_SCALE_BUTTON", this);

        putfun("gtk_scale_button_set_value ", 2, widget, setting);

        free(widget);
        free(setting);
}
