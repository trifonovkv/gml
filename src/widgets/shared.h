#include "box.h"
#include "entry.h"
#include "stack.h"
#include "window.h"
#include "text_view.h"
#include "header_bar.h"
#include "button.h"
#include "combo_box.h"

void set_focus_on_click(char *string)
{
        widget_type type = getsymtype("this");

        if (type == TYPE_BUTTON) {
                button_set_focus_on_click(string);
        }
        if (type == TYPE_COMBO_BOX || TYPE_COMBO_BOX_ENTRY) {
                combo_box_set_focus_on_click(string);
        }
}

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


