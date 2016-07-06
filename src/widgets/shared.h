#include"entry.h"
#include"text_view.h"
#include"box.h"
#include"stack.h"

/*  
 * Sets the default editability. 
 */
void set_editable(FILE *out, char *setting)
{
        widget_type type = getsymtype("this");
        if (type == GTK_TEXT_VIEW) {
                printf("textview\n");
                text_view_set_editable(out, setting);
        }
        if (type == GTK_ENTRY) {
                printf("entry\n");
                editable_set_editable(out, setting);
        }
}

/* 
 * Sets the “input-purpose” property which can be used by on-screen keyboards 
 * and other input methods to adjust their behaviour.
 */
void set_input_purpose(FILE *out, char *setting)
{
        widget_type type = getsymtype("this");
        if (type == GTK_TEXT_VIEW) {
                text_view_set_input_purpose(out, setting);
        }
        if (type == GTK_ENTRY) {
                entry_set_input_purpose(out, setting);
        }
        
}

/* 
 * Sets the GtkStack to be homogeneous or not. If it is homogeneous, the
 * GtkStack will request the same size for all its children. If it isn't, the
 * stack may change size when a different child becomes visible.
 * 
 * Sets the “homogeneous” property of box , controlling whether or not all 
 * children of box are given equal space in the box.
 */
void set_homogeneous(FILE *out, char *setting)
{
        widget_type type = getsymtype("this");
        if (type == GTK_VBOX || type == GTK_HBOX) {
                box_set_homogeneous(out, setting);
        }
        if (type == GTK_STACK) {
                stack_set_homogeneous(out, setting);
        }
}


