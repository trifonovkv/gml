#include "gml.h"
#include "fmtout.h"
#include "list_store.h" 

void list_store_set_column(char *id, char *value)
{
        char *iter = getsymval("iter");
        char *widget = wrptype("GTK_LIST_STORE", this);

        putfun("gtk_list_store_set", 5, widget, iter, id, value, "-1");
        
        free(widget);
}

void list_store_add_column(char *id, char *column_type)
{
        syminst(TYPE_COLUMN, id, column_type);
}

void list_store_new(char *widget)
{
        int n = 0;
        char *column, *columns, *tmp, *n_columns;
        symrec *sym;
       
        if (getsymval("iter") == NULL) {
                syminst(TYPE_ITER, "iter", "&iter");
                prtstr(2, "GtkTreeIter ", "iter;\n");
        }

        if ((sym = get_symbol_by_type(TYPE_COLUMN)) != NULL) {
                column = strdup(sym->value);
                delete_symbol(sym);
                columns = concat("", column);
                free(column);
                n++;
 
                while ((sym = get_symbol_by_type(TYPE_COLUMN)) != NULL) {
                      column = strdup(sym->value);
                      delete_symbol(sym);
                      tmp = concatv(3, columns, ", ", column);
                      free(column);
                      free(columns);
                      columns = tmp;
                      n++;
                }
        } else {
                columns = "";
        }

        n_columns = itoa(n);

        this = syminst(TYPE_LIST_STORE, widget, widget);

        putdef("GtkListStore *"
             , widget
             , "gtk_list_store_new"
             , 2
             , n_columns
             , columns);

        free(n_columns);
}

void list_store_set_column_types(char *n_columns, char *types)
{
        char *widget = wrptype("GTK_LIST_STORE", this);

        putfun("gtk_list_store_set_column_types", 3, widget, n_columns, types);

        free(widget);
        free(n_columns);
        free(types);
}

void list_store_append()
{
        char *widget = wrptype("GTK_LIST_STORE", this);
        char *iter = getsymval("iter");

        putfun("gtk_list_store_append", 2, widget, iter);
        
        free(widget);
}

void list_store_set_value(char *column, char *value)
{
        char *widget = wrptype("GTK_LIST_STORE", this);
        char *iter = getsymval("iter");

        putfun("gtk_list_store_set_value", 4, widget, iter, column, value);

        free(widget);
        free(column);
        free(value);
}

