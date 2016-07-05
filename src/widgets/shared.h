#include"widgets/entry.h"
#include"widgets/text_view.h"

/*  
 * Sets the default editability. 
 */
void set_editable(FILE *out, char *setting)
{
        widget_type type = getsymtype("this");
        if (type == GTK_TEXT_VIEW) {
                text_view_set_editable(out, setting);
        }
        if (type = GTK_ENTRY) {
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
        if (type = GTK_ENTRY) {
                entry_set_input_purpose(out, setting);
        }
        
}

