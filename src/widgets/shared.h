#include "box.h"
#include "entry.h"
#include "stack.h"
#include "window.h"
#include "text_view.h"
#include "header_bar.h"
#include "button.h"
#include "combo_box.h"
#include "label.h"
#include "adjustment.h"
#include "spin_button.h"
#include "toggle_button.h"
#include "font_button.h"
#include "color_button.h"
#include "file_chooser_button.h"
#include "file_chooser.h"
#include "link_button.h"
#include "switch.h"
#include "progress_bar.h"
        
void set_ellipsize(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_LABEL) {
                label_set_ellipsize(setting);
        } else if (type == TYPE_PROGRESS_BAR) {
                progress_bar_set_ellipsize(setting);
        }
}

void set_uri(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_FILE_CHOOSER_BUTTON) {
                file_chooser_set_uri(setting);
        } else if (type == TYPE_LINK_BUTTON) {
                link_button_set_uri(setting);
        }
}

void set_active(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_TOGGLE_BUTTON) {
                toggle_button_set_active(setting);
        } else if (type == TYPE_COMBO_BOX) {
                combo_box_set_active(setting);
        } else if (type == TYPE_SWITCH) {
                switch_set_active(setting);
        }
}

void set_value(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_SPIN_BUTTON) {
                spin_button_set_value(setting);
        } else if (type == TYPE_ADJUSTMENT) {
                adjustment_set_value(setting);
        }
}

void set_use_underline(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_BUTTON) {
                button_set_use_underline(setting); 
        } else if (type == TYPE_LABEL) {
                label_set_use_underline(setting);
        }
}

void set_width_chars(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_ENTRY) {
                entry_set_max_width_chars(setting);
        } else if (type == TYPE_LABEL) {
                label_set_width_chars(setting); 
        } else if (type == TYPE_FILE_CHOOSER_BUTTON) {
                file_chooser_button_set_width_chars(setting); 
        }

}

void set_text(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_LABEL) {
                label_set_text(setting);
        } else if (type == TYPE_ENTRY) {
                entry_set_text(setting);
        } else if (type == TYPE_PROGRESS_BAR) {
                progress_bar_set_text(setting);
        }
}

void set_title(char *string)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_WINDOW) {
                window_set_title(string);
        } else if (type == TYPE_HEADER_BAR) {
                header_bar_set_title(string);
        } else if (type == TYPE_FONT_BUTTON) {
                font_button_set_title(string);
        } else if (type == TYPE_COLOR_BUTTON) {
                color_button_set_title(string);
        } else if (type == TYPE_FILE_CHOOSER_BUTTON) {
                file_chooser_button_set_title(string);
        }
}

void set_editable(char *setting)
{
        widget_type type = getsymtype(this);

        if (type == TYPE_TEXT_VIEW) {
                text_view_set_editable(setting);
        } else if (type == TYPE_ENTRY) {
                editable_set_editable(setting);
        }
}

void set_input_purpose(char *setting)
{
        widget_type type = getsymtype(this);
        if (type == TYPE_TEXT_VIEW) {
                text_view_set_input_purpose(setting);
        } else if (type == TYPE_ENTRY) {
                entry_set_input_purpose(setting);
        }
}

void set_homogeneous(char *setting)
{
        widget_type type = getsymtype(this);
        if (type == TYPE_VBOX || type == TYPE_HBOX) {
                box_set_homogeneous(setting);
        } else if (type == TYPE_STACK) {
                stack_set_homogeneous(setting);
        }
}


