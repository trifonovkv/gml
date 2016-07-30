#include "gml.h"
#include "fmtout.h"
#include "application.h"

accels *accels_table;

void application()
{
        char *app_name  = getsymval("app_name");
        char *app_id    = getsymval("app_id");
        char *app_flags = getsymval("app_flags");

        if (app_name == NULL)
                app_name = "application"; 
        if (app_id == NULL)
                app_id = "\"org.gtk.example\"";
        if (app_flags == NULL)
                app_flags = "G_APPLICATION_FLAGS_NONE";

        putdef("GtkApplication *", app_name, "gtk_application_new",2 
                                                                  ,app_id
                                                                  ,app_flags);
        
        prtstr(1, "const gchar *accels[2]={ NULL, NULL };\n");

        /* Set key accels */
        accels *ptr;
        prtstr(1, "static GActionEntry app_entries[] =\n");
        prtstr(1, "{\n");
        tabinc(1);
        for (ptr = accels_table; ptr != NULL; ptr = (accels *)ptr->next) {
                prtstr(5
                      ,"{ \""
                      ,ptr->action
                      ,"_action\","
                      ,ptr->action
                      ,", NULL, NULL, NULL },\n");
        }
        tabdec(1);
        prtstr(1, "};\n");

        prtstr(5
              ,"g_action_map_add_action_entries(G_ACTION_MAP("
              ,app_name
              ,"), app_entries, G_N_ELEMENTS(app_entries), "
              ,app_name
              ,");\n");

        for (ptr = accels_table; ptr != NULL; ptr = (accels *)ptr->next)
                application_set_accels_for_action(ptr->action, ptr->key);

        prtstr(3 
              ,"g_signal_connect("
              ,app_name
              ,", \"activate\", G_CALLBACK(activate), NULL);\n");

        prtstr(3 
              ,"status=g_application_run(G_APPLICATION("
              ,app_name
              ,"), argc, argv);\n");

        prtstr(3, "g_object_unref(", app_name, ");\n");
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

void application_set_accels_for_action(char *action, char *accels)
{
        char *app_name  = getsymval("app_name");
        prtstr(3, "accels[0]=", accels, ";\n");
        prtstr(1, "accels[1]=NULL;\n");
        prtstr(5
              ,"gtk_application_set_accels_for_action("
              ,app_name
              ,", \"app."
              ,action
              ,"_action\", accels);\n");
}
