#include "gml.h"
#include "fmtout.h"
#include "list_store.h" 
#include <math.h>         /* floor(), log10() */

void list_store_add_column(char *column_type)
{
        syminst(TYPE_COLUMN, "column", column_type);
}

void list_store_new(char *widget)
{
        int n = 0;
        char *tmp = NULL;
        char *column = getsymval("column");
        char *columns = concat("", column);

        while (column != NULL) {
              tmp = concat(columns, ", ");
              free(columns);
              columns = tmp;

              tmp = concat(columns, column);
              symdel("column");
              free(columns);
              columns = tmp;

              n++;
              column = getsymval("column");
        }

        int n_digits = floor(log10(abs(n))) + 1;
        char n_columns[n_digits];
        sprintf(n_columns, "%d", n);

        this = syminst(TYPE_LIST_STORE, widget, widget);

        putdef("GtkListStore *"
             , widget
             , "gtk_list_store_new"
             , 2
             , n_columns
             , columns);
}

void list_store_set_column_types(char *n_columns, char *types)
{
        char *widget = wrptype("GTK_LIST_STORE", this);

        putfun("gtk_list_store_set_column_types", 3, widget, n_columns, types);

        free(widget);
        free(n_columns);
        free(types);
}

