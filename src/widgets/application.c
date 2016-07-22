#include"application.h"

accels *accels_table;

void application(FILE *out)
{
        char *app_name  = getsymval("app_name");
        char *app_id    = getsymval("app_id");
        char *app_flags = getsymval("app_flags");
        if (app_id == NULL)
                app_id = "\"org.gtk.example\"";
        if (app_flags == NULL)
                app_flags = "G_APPLICATION_FLAGS_NONE";

        tab_insert(out);
        fprintf(out, 
                "GtkApplication *%s = gtk_application_new(%s, %s);\n",
                app_name, app_id, app_flags);
        tab_insert(out);
        fprintf(out, "const gchar *accels[2]={ NULL, NULL };\n");

        /* Set key accels */
        accels *ptr;
        tab_insert(out);
        fprintf(out, "static GActionEntry app_entries[] =\n");
        tab_insert(out);
        fprintf(out, "{\n");
        for (ptr = accels_table; ptr != NULL; ptr = (accels *)ptr->next) {
                tab_insert(out);
                tab_insert(out);
                fprintf(out, "{ \"%s_action\", %s, NULL, NULL, NULL },\n", 
                        ptr->action, ptr->action);
        }
        tab_insert(out);
        fprintf(out, "};\n");
        tab_insert(out);
        fprintf(out, 
"g_action_map_add_action_entries(G_ACTION_MAP(%s), app_entries, G_N_ELEMENTS(app_entries), %s);\n",
                app_name, app_name);
        for (ptr = accels_table; ptr != NULL; ptr = (accels *)ptr->next)
                application_set_accels_for_action(out, ptr->action, ptr->key);

        tab_insert(out);
        fprintf(out, 
"g_signal_connect(%s, \"activate\", G_CALLBACK(activate), NULL);\n",
                app_name);
        tab_insert(out);
        fprintf(out, 
                "status=g_application_run(G_APPLICATION(%s), argc, argv);\n",
                app_name);
        tab_insert(out);
        fprintf(out, "g_object_unref(%s);\n", app_name);
}

void application_set_name(char *name)
{
        syminst(TYPE_APPLICATION, "app_name", name);
}

void application_set_flags(char *flags) 
{
        syminst(TYPE_STRING, "app_flags", flags);
}

void application_set_id(char *id) 
{
        syminst(TYPE_STRING, "app_id", id);
}

void application_set_accels_for_action(FILE *out, char *action, char *accels)
{
        char *app_name  = getsymval("app_name");
        tab_insert(out);
        fprintf(out, "accels[0]=%s;\n", accels);
        tab_insert(out);
        fprintf(out, "accels[1]=NULL;\n");
        tab_insert(out);
        fprintf(out, 
"gtk_application_set_accels_for_action(%s, \"app.%s_action\", accels);\n", 
                app_name, action);
}
