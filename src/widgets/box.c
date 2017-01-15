#include "gml.h"
#include "box.h" 
#include "fmtout.h"

void box_query_child_packing(char *widget, char *child)
{
        if(getsymval("box") == NULL) {
                syminst(TYPE_STRING, "box", "box");

                prtstr(1, "gboolean    expand;\n");
                prtstr(1, "gboolean    fill;\n");
                prtstr(1, "guint       padding;\n");
                prtstr(1, "GtkPackType pack_type;\n");
        }

        putfun("gtk_box_query_child_packing"
              , 6
              , widget
              , child
              , "&expand"
              , "&fill"
              , "&padding"
              , "&pack_type");

}

void box_set_center_widget(char *child)
{
        char *widget = wrptype("GTK_BOX", this);
        
        putfun("gtk_box_set_center_widget", 2, widget, child);

        free(widget);
}

void box_set_pack_type(char *child, char *setting)
{
        char *widget = wrptype("GTK_BOX", this);

        box_query_child_packing(widget, child);

        putfun("gtk_box_set_child_packing"
              , 6
              , widget
              , child
              , "expand"
              , "fill"
              , "padding"
              , setting);

        free(widget);
        free(setting);
}

void box_set_expand(char *child, char *setting)
{
        char *widget = wrptype("GTK_BOX", this);

        box_query_child_packing(widget, child);

        putfun("gtk_box_set_child_packing"
              , 6
              , widget
              , child
              , setting
              , "fill"
              , "padding"
              , "pack_type");

        free(widget);
        free(setting);
}

void box_set_fill(char *child, char *setting)
{
        char *widget = wrptype("GTK_BOX", this);
        
        box_query_child_packing(widget, child);

        putfun("gtk_box_set_child_packing"
              , 6
              , widget
              , child
              , "expand"
              , setting
              , "padding"
              , "pack_type");

        free(widget);
        free(setting);
}

void box_set_padding(char *child, char *setting)
{
        char *widget = wrptype("GTK_BOX", this);
        
        box_query_child_packing(widget, child);

        putfun("gtk_box_set_child_packing"
              , 6
              , widget
              , child
              , "expand"
              , "fill"
              , setting
              , "pack_type");

        free(widget);
        free(setting);
}

void box_reorder_child(char *child, char *setting)
{
        char *widget = wrptype("GTK_BOX", this);
        
        putfun("gtk_box_reorder_child", 3, widget, child, setting);

        free(widget);
        free(setting);
}

void box_set_homogeneous(char *setting)
{
        char *widget = wrptype("GTK_BOX", this);
        
        putfun("gtk_box_set_homogeneous", 2, widget, setting);

        free(widget);
        free(setting);
}

void box_set_baseline_position(char *setting)
{
        char *widget = wrptype("GTK_BOX", this);
        
        putfun("gtk_box_set_baseline_position", 2, widget, setting);

        free(widget);
        free(setting);
}

void box_set_spacing(char *setting)
{
        char *widget = wrptype("GTK_BOX", this);
        
        putfun("gtk_box_set_spacing", 2, widget, setting);

        free(widget);
        free(setting);
}

void box_horizontal_new(char *widget)
{
        this = syminst(TYPE_HBOX, widget, widget);

        char *orientation = "GTK_ORIENTATION_HORIZONTAL";
        char *spacing     = "0";

        putdef("GtkWidget *", widget, "gtk_box_new", 2, orientation, spacing); 
}

void box_vertical_new(char *widget)
{
        this = syminst(TYPE_VBOX, widget, widget);

        char *orientation = "GTK_ORIENTATION_VERTICAL";
        char *spacing     = "0";

        putdef("GtkWidget *", widget, "gtk_box_new", 2, orientation, spacing); 
}

