#include"application.h"

accels *accels_table;

void application(FILE *out)
{
        char *app_id    = getsymval("app_id");
        char *app_flags = getsymval("app_flags");
        if (app_id == NULL)
                app_id = "\"org.gtk.example\"";
        if (app_flags == NULL)
                app_flags = "G_APPLICATION_FLAGS_NONE";
        tab_insert(out);
        fprintf(out, 
                "GtkApplication *app = gtk_application_new(%s, %s);\n",
                app_id, app_flags);
        tab_insert(out);
        fprintf(out, "const gchar *accels[2]={ NULL, NULL };\n");

        accels *ptr;
        for (ptr = accels_table; ptr != NULL; ptr = (accels *)ptr->next)
                application_set_accels_for_action(out, ptr->action, ptr->key);
        tab_insert(out);
        fprintf(out, 
"g_signal_connect(app, \"activate\", G_CALLBACK(activate), NULL);\n");
        tab_insert(out);
        fprintf(out, 
"status=g_application_run(G_APPLICATION(app), argc, argv);\n");
        tab_insert(out);
        fprintf(out, "g_object_unref(app);\n");
        tab_insert(out);
}


void application_set_flags(char *flags) 
{
        syminst(P_STRING, "app_flags", flags);
}

void application_set_id(char *id) 
{
        syminst(P_STRING, "app_id", id);
}

void application_set_accels_for_action(FILE *out, char *action, char *accels)
{
        tab_insert(out);
        fprintf(out, "accels[0]=%s;\n", accels);
        tab_insert(out);
        fprintf(out, "accels[1]=NULL;\n");
        tab_insert(out);
        fprintf(out, 
                "gtk_application_set_accels_for_action(app, %s, accels);\n", 
                action);
}
