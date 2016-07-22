#include"gml.h"
#include"widgets/application.h"

symrec *sym_table;

void accels_add(char *action_name, char *accel_key)
{
        accels *ptr = (accels *)malloc(sizeof(accels));
        ptr->action = (char *)malloc(strlen(action_name) + 1);
        strcpy(ptr->action, action_name);
        ptr->key = (char *)malloc(strlen(accel_key) + 1);
        strcpy(ptr->key, accel_key);
        ptr->next = (struct accels *)accels_table;
        accels_table = ptr;
}

char *append_flag(char *flags, char *or, char *flag)
{
        flags = strcat(flags, or);
        flags = strcat(flags, flag);
        return flags;
}

void tab_insert(FILE *out)
{
        fprintf(out, "\t");
}

void main_start(FILE *out)
{
        fprintf(out, 
"static void activate(GtkApplication *app, gpointer user_data)\n");
        fprintf(out, "{\n");
}

void main_end(FILE *out)
{

        fprintf(out, "}\n\nint main(int argc, char **argv)\n{\n");
        tab_insert(out);
        fprintf(out, "int status;\n");

        application(out);

        tab_insert(out);
        fprintf(out, "return status;\n}\n");
}

void include_insert(FILE *out, char *include)
{
        fprintf(out, "#include%s\n", include);
}

void block_close(char *start)
{
        symdelto(start);
}

void signal_connect(FILE *out, char *signal, char *handler, char *data)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "g_signal_connect(%s, %s, G_CALLBACK(%s), %s);\n",
                widget, signal, handler, data);
}

void container_add(FILE *out, char *widget)
{
        char *container = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_container_add(GTK_CONTAINER(%s), %s);\n",
                container, widget);
}

void button_box_new(FILE *out, char *widget)
{
        syminst(TYPE_BUTTON_BOX, widget, widget);
        syminst(TYPE_BUTTON_BOX, "this", widget);
        char *setting = "GTK_ORIENTATION_HORIZONTAL";
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_button_box_new(%s);\n",
                widget, setting);
}

widget_type getsymtype(char *sym_name)
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

void symdelto(char *sym_name)
{
        symrec *ptr = sym_table;
        symrec *tmp;
        while (ptr != NULL) {
                tmp = ptr;
                ptr = (symrec *)ptr->next; 
                free(tmp);
                if (strcmp(ptr->name, sym_name) == 0) 
                        break; 
        }
        sym_table = ptr;
}

void syminst(widget_type sym_type, char *sym_name, char *sym_value)
{ 
        symrec *s = getsym(sym_name);
        if (s == NULL)
                putsym(sym_type, sym_name, sym_value);
        else 
                printf("%s is already defined\n", sym_name);
}

symrec *putsym(widget_type sym_type, char *sym_name, char *sym_value)
{
        symrec *ptr = (symrec *)malloc(sizeof(symrec));
        ptr->type = sym_type;
        ptr->name = (char *)malloc(strlen(sym_name) + 1);
        strcpy(ptr->name, sym_name);
        ptr->value = (char *)malloc(strlen(sym_value) + 1);
        strcpy(ptr->value, sym_value);
        ptr->next = (struct symrec *)sym_table;
        sym_table = ptr;
        return ptr;
}

symrec *getsym(char *sym_name)
{
        symrec *ptr;
        for (ptr = sym_table; ptr != NULL; ptr = (symrec *)ptr->next)
                if (strcmp(ptr->name, sym_name) == 0)
                        return ptr;
        return NULL;
}


int main(int argc, char *argv[])
{
        yyin = fopen(argv[1], "r");
        if(yyin == NULL) {
                printf("Error opening file\n");
                exit(1);
        } 
        yyout = fopen(argv[2], "w");
        if(yyout == NULL) {
                printf("Error opening file\n");
                exit(1);
        }

        include_insert(yyout, "<gtk/gtk.h>");
        include_insert(yyout, "\"handlers.h\"");
        main_start(yyout);
        int result = yyparse();
        main_end(yyout);
        
        fclose(yyin);
        fclose(yyout);

        return result;
}

