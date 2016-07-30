#include "box.h"
#include "entry.h"
#include "stack.h"
#include "window.h"
#include "text_view.h"
#include "header_bar.h"

/* 
 * Sets the title of the GtkWindow. The title of a window will be displayed in 
 * its title bar; on the X Window System, the title bar is rendered by the 
 * window manager, so exactly how the title appears to users may vary according 
 * to a user’s exact configuration. The title should help a user distinguish 
 * this window from other windows they may have open. A good title might 
 * include the application name and current document filename, for example.
 *
 * Sets the title of the GtkHeaderBar. The title should help a user identify
 * the current view. A good title should not include the application name.
 */
void set_title(char *string)
{
        widget_type type = getsymtype("this");
        if (type == TYPE_WINDOW) {
                window_set_title(string);
        }
        if (type == TYPE_HEADER_BAR) {
                header_bar_set_title(string);
        }
}


/*  
 * Sets the default editability. 
 */
void set_editable(char *setting)
{
        widget_type type = getsymtype("this");
        if (type == TYPE_TEXT_VIEW) {
                text_view_set_editable(setting);
        }
        if (type == TYPE_ENTRY) {
                editable_set_editable(setting);
        }
}

/* 
 * Sets the “input-purpose” property which can be used by on-screen keyboards 
 * and other input methods to adjust their behaviour.
 */
void set_input_purpose(char *setting)
{
        widget_type type = getsymtype("this");
        if (type == TYPE_TEXT_VIEW) {
                text_view_set_input_purpose(setting);
        }
        if (type == TYPE_ENTRY) {
                entry_set_input_purpose(setting);
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
void set_homogeneous(char *setting)
{
        widget_type type = getsymtype("this");
        if (type == TYPE_VBOX || type == TYPE_HBOX) {
                box_set_homogeneous(setting);
        }
        if (type == TYPE_STACK) {
                stack_set_homogeneous(setting);
        }
}


