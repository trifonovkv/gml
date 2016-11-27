#include "gml.h"
#include "fmtout.h"
#include "list_store.h" 

void list_store_add_column(char *column_type)
{
        syminst(TYPE_COLUMN, "column", column_type);
}

void list_store_new(char *widget)
{
        int n_colums = 0;

        char *tmp = NULL;
        char *colum = NULL;
        char *colums = NULL;

        while ((colum = getsymval("column")) != NULL) {
              if (colums != NULL) {
                      tmp = colums;
                      colums = concat(tmp, ", ");
                      free(tmp);
              }

              tmp = colums;
              colums = concat(tmp, colum);
              free(tmp);

              n_colums++;
              symdel(colum);
        }

        this = syminst(TYPE_LIST_STORE, widget, widget);

        putdef("GtkListStore *"
             , widget
             , "gtk_list_store_new"
             , 2
             , n_colums
             , colums);
}

void list_store_set_column_types(char *n_columns, char *types)
{
        char *widget = wrptype("GTK_LIST_STORE", this);

        putfun("gtk_list_store_set_column_types", 3, widget, n_columns, types);

        free(widget);
        free(n_columns);
        free(types);
}

