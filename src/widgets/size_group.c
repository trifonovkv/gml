#include "gml.h"
#include "fmtout.h"
#include "size_group.h" 

void size_group_new(char *widget)
{
        this = syminst(TYPE_SIZE_GROUP, widget, widget);

        putdef("GtkSizeGroup *"
             , widget
             , "gtk_size_group_new"
             , 1
             , "GTK_SIZE_GROUP_NONE");
}

void size_group_set_mode(char *setting)
{
        char *widget = wrptype("GTK_SIZE_GROUP", this);
        
        putfun("gtk_size_group_set_mode", 2, widget, setting);

        free(setting);
}

void size_group_add_widget(char *setting)
{
        char *widget = wrptype("GTK_SIZE_GROUP", this);
        
        putfun("gtk_size_group_add_widget", 2, widget, setting);

        free(setting);
}
