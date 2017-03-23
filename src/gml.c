#include "gml.h"
#include "fmtout.h"
#include "widgets/application.h"

symrec *sym_table;
char *this;

void prtlst()
{
        symrec *ptr = sym_table;
        
        printf("\n");
        printf("%-20s%-20s%-20s\n", "Name", "Value", "Next");
        printf("------------------------------------------------------------");
        printf("\n");

        while (ptr != NULL) {
                printf("%-20s%-20s%-20p\n", ptr->name, ptr->value, ptr->next);
                ptr = ptr->next;
        }
}


void freelist()
{
        symrec *ptr = sym_table;
        symrec *tmp;

        while (ptr != NULL) {
                tmp = ptr;
                ptr = (symrec *)ptr->next; 
                free(tmp);
        }

        sym_table = ptr;
}

char *append_flag(char *flags, char *or, char *flag)
{
        flags = strcat(flags, or);
        flags = strcat(flags, flag);
        return flags;
}

void main_start()
{
        prtstr(3
             , "static void activate(GtkApplication *"
             , APP_VAR_NAME
             , ", gpointer user_data)\n{\n");
}

void main_end()
{
        symrec *application_id = getsym("application_id");
        symrec *flags = getsym("application_flags");

        prtstr(1, "}\n\nint main(int argc, char **argv)\n{\n");
        tabinc(1);
        prtstr(1, "int status;\n");

        prtstr(3, "GtkApplication *", APP_VAR_NAME, ";\n");
 
        putdef(""
             , APP_VAR_NAME
             , "gtk_application_new"
             , 2
             , application_id->value
             , flags->value);
        prtstr(3
             , "g_signal_connect("
             , APP_VAR_NAME
             , ", \"activate\", G_CALLBACK(activate), NULL);\n");
        
        prtstr(3
             , "status=g_application_run(G_APPLICATION("
             , APP_VAR_NAME
             , "), argc, argv);\n");

        prtstr(3, "g_object_unref(", APP_VAR_NAME, ");\n");
        prtstr(1, "return status;\n}\n");
}

void include_insert(char *include)
{
        prtstr(3, "#include", include, "\n");
}

void block_close(char *start)
{
        this = NULL;
}

void signal_connect(char *signal, char *handler, char *data)
{
        char *widget = this;
        char *callback = wrptype("G_CALLBACK", handler);

        putfun("g_signal_connect"
              , 4
              , widget
              , signal
              , callback
              , data);

        free(callback);
}

symrec *get_symbol_by_type(widget_type type)
{
        symrec *ptr = sym_table;

        while ((ptr != NULL) && (ptr->type != type)) {
                ptr = (symrec *)ptr->next;
        }

        return ptr;
}

widget_type getsymtype(char *sym_name) /* rename to get_symbol_type_by_name */
{
        symrec *sym = getsym(sym_name);
        if (sym == NULL)
                return TYPE_NONE;
        return sym->type;
}

char *getsymval(char *sym_name)
{
        symrec *sym = getsym(sym_name);
        if (sym == NULL) 
                return NULL;
        return sym->value;
}

void delete_symbol(symrec *sym)
{
        symrec **pp = &sym_table;

        while ((*pp) != sym)
                pp = &(*pp)->next;

        *pp = sym->next;
}

void symdel(char *sym_name)
{
        symrec *sym = getsym(sym_name);
        if (sym == NULL)
                return;
        symrec **pp = &sym_table;

        while ((*pp) != sym)
                pp = &(*pp)->next;

        *pp = sym->next;
}

void symdelto(char *sym_name)
{
        symrec *tmp;
        symrec *ptr = sym_table;
        
        while ((ptr != NULL) && (strcmp(ptr->name, sym_name) != 0)) {
                tmp = ptr;
                ptr = (symrec *)ptr->next;
                free(tmp);
        }

        sym_table = ptr;
}

char *syminst(widget_type sym_type, char *sym_name, char *sym_value)
{ 
        if (getsym(sym_name) == NULL) {
                putsym(sym_type, sym_name, sym_value);
                return sym_value;
        } else { 
                printf("%s is already defined\n", sym_name);
                return NULL;
        }
}

symrec *putsym(widget_type sym_type, char *sym_name, char *sym_value)
{
        symrec *ptr = (symrec *)malloc(sizeof(symrec));
        ptr->type = sym_type;
        ptr->name =  sym_name;
        ptr->value = sym_value;
        ptr->next = (struct symrec *)sym_table;
        sym_table = ptr;
        return ptr;
}

symrec *getsym(char *sym_name)
{
        if (sym_name == NULL)
                return NULL;

        symrec *ptr;

        for (ptr = sym_table; ptr != NULL; ptr = (symrec *)ptr->next)
                if ((ptr->name != NULL) && (strcmp(ptr->name, sym_name) == 0))
                        return ptr;
        return NULL;
}


int main(int argc, char *argv[])
{
        yyin = fopen(argv[1], "r");
        if (yyin == NULL) {
                printf("Error opening file\n");
                exit(1);
        } 
        yyout = fopen(argv[2], "w");
        if (yyout == NULL) {
                printf("Error opening file\n");
                exit(1);
        }

        include_insert(" <gtk/gtk.h>");
        include_insert(" \"handlers.h\"");
        prtstr(1, "\n");
        main_start();
        tabinc(1);
        int result = yyparse();
        tabdec(1);
        main_end();

        fclose(yyin);
        fclose(yyout);

        freelist();
      
        return result;
}

