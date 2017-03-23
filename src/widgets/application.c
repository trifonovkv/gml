#include "gml.h"
#include "fmtout.h"
#include "application.h"

static int count = 0;

int counter()
{
        return count++;
}

void application_new(char *widget, char *application_id, char *flags)
{
        this = APP_VAR_NAME;

        syminst(TYPE_APPLICATION_ID, "application_id", application_id);
        syminst(TYPE_APPLICATION_FLAGS, "application_flags", flags);
}

void application_add_window(char *setting)
{
        char *widget = wrptype("GTK_APPLICATION", this);
        char *window = wrptype("GTK_WINDOW", setting);
        
        putfun("gtk_application_add_window", 2, widget, window);
        
        free(widget);
        free(window);
        free(setting);
}

void application_set_app_menu(char *setting)
{
        char *widget = wrptype("GTK_APPLICATION", this);
        
        putfun("gtk_application_set_app_menu", 2, widget, setting);
        
        free(widget);
        free(setting);
}

void application_set_menubar(char *setting)
{
        char *widget = wrptype("GTK_APPLICATION", this);
        
        putfun("gtk_application_set_menubar", 2, widget, setting);
        
        free(widget);
        free(setting);
}

void application_set_accels_for_action(char *detailed_action_name, char *accels)
{
        char *num = itoa(counter());
        char *valname = concat("pstr", num);
        char *widget = wrptype("GTK_APPLICATION", this);

        prtstr(5, "const gchar *", valname, "[2]={", accels, ", NULL};\n");
        
        putfun("gtk_application_set_accels_for_action"
             , 3
             , widget
             , detailed_action_name
             , valname);
        
        free(num);
        free(valname);
        free(widget);
        free(detailed_action_name);
        free(accels);
}
