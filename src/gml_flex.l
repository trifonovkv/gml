DIGIT     [0-9]
LITERAL   [a-zA-Z_]
ID        [a-zA-Z0-9_]

%{
#include<stdio.h>
#include"gml_bison.h"

void comment();
%}

%%

"/*"                                  comment();
[+-]?{DIGIT}+                         yylval.string=strdup(yytext); return NUMBER; 
[+-]?{DIGIT}+\.{DIGIT}+               yylval.string=strdup(yytext); return FLOAT;
STYLE                                 return STYLE;
APPLICATION                           return APPLICATION;
STACK                                 return STACK;
STACK_SWITCHER                        return STACK_SWITCHER;
TEXT_VIEW                             return TEXT_VIEW;
ADJUSTMENT                            return ADJUSTMENT;
SCROLLED_WINDOW                       return SCROLLED_WINDOW;
HEADER_BAR                            return HEADER_BAR;
ENTRY                                 return ENTRY;
HBOX                                  return HBOX;
VBOX                                  return VBOX;
BUTTON                                return BUTTON;
BUTTON_FROM_ICON_NAME                 return BUTTON_FROM_ICON_NAME;
WINDOW                                return WINDOW;
SET                                   return SET;
ADD                                   return ADD;
SIGNAL                                return SIGNAL;
PACK                                  return PACK;
ARG                                   return ARG;

PRT                                   return PROPERTY;

IMAGE                                 return IMAGE_WIDGET;
Image_from_file                       return IMAGE_FROM_FILE;
Image_from_icon_name                  return IMAGE_FROM_ICON_NAME;
Image_from_resource                   return IMAGE_FROM_RESOURCE;
Image_pixel_size                      return IMAGE_PIXEL_SIZE;

TEXT_BUFFER                           return TEXT_BUFFER;

SCALE_BUTTON                          return SCALE_BUTTON;
Icon                                  return ICON;
Min                                   return MIN;
Max                                   return MAX;
Step                                  return STEP;

VOLUME_BUTTON                         return VOLUME_BUTTON;

REVEALER                              return REVEALER;
Reveal_child                          return REVEAL_CHILD;

OVERLAY                               return OVERLAY;
Overlay_pass_through                  return OVERLAY_PASS_THROUGH;
Overlay                               return ADD_OVERLAY;

NOTEBOOK                              return NOTEBOOK;
Tab_pos                               return TAB_POS;
Show_tabs                             return SHOW_TABS;
Show_border                           return SHOW_BORDER;
Scrollable                            return SCROLLABLE;
Popup_enable                          return POPUP_ENABLE;
Menu_label                            return MENU_LABEL;
Menu_label_text                       return MENU_LABEL_TEXT;
Tab_label                             return TAB_LABEL;
Tab_label_text                        return TAB_LABEL_TEXT;
Tab_reorderable                       return TAB_REORDERABLE;
Tab_detachable                        return TAB_DETACHABLE;
Group_name                            return GROUP_NAME;
Action_widget                         return ACTION_WIDGET;

End                                   return END;

LIST_STORE                            return LIST_STORE;
Column_types                          return COLUMN_TYPES;
Column                                return COLUMN;
Row                                   return ROW;
Id                                    return ID;

Cell_renderer                         return CELL_RENDERER;
CELL_RENDERER_TEXT                    return CELL_RENDERER_TEXT;
CELL_RENDERER_PIXBUF                  return CELL_RENDERER_PIXBUF;
CELL_RENDERER_TOGGLE                  return CELL_RENDERER_TOGGLE;
Radio                                 return RADIO;
Activatable                           return ACTIVATABLE;

TREE_VIEW_COLUMN                      return TREE_VIEW_COLUMN;
Sizing                                return SIZING;
Fixed_width                           return FIXED_WIDTH;
Min_width                             return MIN_WIDTH;
Max_width                             return MAX_WIDTH;
Clickable                             return CLICKABLE;
Widget                                return WIDGET;
Sort_column_id                        return SORT_COLUMN_ID;
Sort_indicator                        return SORT_INDICATOR;
Sort_order                            return SORT_ORDER;
Attribute                             return ATTRIBUTE;

TREE_VIEW                             return TREE_VIEW;
Buffer                                return BUFFER;
Level_indentation                     return LEVEL_INDENTATION;
Show_expanders                        return SHOW_EXPANDERS;
Headers_visible                       return HEADERS_VISIBLE;
Headers_clickable                     return HEADERS_CLICKABLE;
Activate_on_single_click              return ACTIVATE_ON_SINGLE_CLICK;
Expander_column                       return EXPANDER_COLUMN;
Reorderable                           return REORDERABLE;
Enable_search                         return ENABLE_SEARCH;
Search_column                         return SEARCH_COLUMN;
Search_entry                          return SEARCH_ENTRY;
Fixed_height_mode                     return FIXED_HEIGHT_MODE;
Hover_selection                       return HOVER_SELECTION;
Hover_expand                          return HOVER_EXPAND;
Rubber_banding                        return RUBBER_BANDING;
Enable_tree_lines                     return ENABLE_TREE_LINES;
Grid_lines                            return GRID_LINES;
Tooltip_column                        return TOOLTIP_COLUMN;

FRAME                                 return FRAME;
Label_widget                          return LABEL_WIDGET;
Label_align                           return LABEL_ALIGN;

Range_fill_level                      return RANGE_FILL_LEVEL;
Range_restrict_to_fill_level          return RANGE_RESTRICT_TO_FILL_LEVEL;
Range_show_fill_level                 return RANGE_SHOW_FILL_LEVEL;
Range_adjustment                      return RANGE_ADJUSTMENT;
Range_inverted                        return RANGE_INVERTED;
Range_value                           return RANGE_VALUE;
Range_increments                      return RANGE_INCREMENTS;
Range_range                           return RANGE_RANGE;
Range_round_digits                    return RANGE_ROUND_DIGITS;
Range_lower_stepper_sensitivity       return RANGE_LOWER_STEPPER_SENSITIVITY;
Range_upper_stepper_sensitivity       return RANGE_UPPER_STEPPER_SENSITIVITY;
Range_flippable                       return RANGE_FLIPPABLE;
Range_slider_size_fixed               return RANGE_SLIDER_SIZE_FIXED;

SCALE                                 return SCALE;
Draw_value                            return DRAW_VALUE;
Has_origin                            return HAS_ORIGIN;
Value_pos                             return VALUE_POS;
Add_mark                              return ADD_MARK;

LEVEL_BAR                             return LEVEL_BAR;
Min_value                             return MIN_VALUE;
Max_value                             return MAX_VALUE;
Add_offset_value                      return ADD_OFFSET_VALUE;

PROGRESS_BAR                          return PROGRESS_BAR;
Fraction                              return FRACTION;
Inverted                              return INVERTED;
Show_text                             return SHOW_TEXT;
Pulse_step                            return PULSE_STEP;

SWITCH                                return SWITCH;
State                                 return STATE;

LINK_BUTTON                           return LINK_BUTTON;
LINK_BUTTON_WITH_LABEL                return LINK_BUTTON_WITH_LABEL;
Uri                                   return URI;
Visited                               return VISITED;

Action                                return ACTION;
Local_only                            return LOCAL_ONLY;
Select_multiple                       return SELECT_MULTIPLE;
Show_hidden                           return SHOW_HIDDEN;
Do_overwrite_confirmation             return DO_OVERWRITE_CONFIRMATION;
Create_folders                        return CREATE_FOLDERS;
Current_name                          return CURRENT_NAME;
Filename                              return FILENAME;
Current_folder                        return CURRENT_FOLDER;
Current_folder_uri                    return CURRENT_FOLDER_URI;
Preview_widget                        return PREVIEW_WIDGET;
Preview_widget_active                 return PREVIEW_WIDGET_ACTIVE;
Use_preview_label                     return USE_PREVIEW_LABEL;
 
FILE_CHOOSER_BUTTON                   return FILE_CHOOSER_BUTTON;

COLOR_BUTTON                          return COLOR_BUTTON;
COLOR_BUTTON_WITH_RGBA                return COLOR_BUTTON_WITH_RGBA;
Rgba                                  return RGBA;
Use_alpha                             return USE_ALPHA;

FONT_BUTTON                           return FONT_BUTTON;
Font                                  return FONT;
Font_name                             return FONT_NAME;
Show_style                            return SHOW_STYLE;
Show_size                             return SHOW_SIZE;
Use_font                              return USE_FONT;
Use_size                              return USE_SIZE;

SEPARATOR                             return SEPARATOR;
Orientation                           return ORIENTATION;

SPINNER                               return SPINNER;
Start                                 return START;
Stop                                  return STOP;

TOGGLE_BUTTON                         return TOGGLE_BUTTON;
TOGGLE_BUTTON_WITH_LABEL              return TOGGLE_BUTTON_WITH_LABEL;
TOGGLE_BUTTON_WITH_MNEMONIC           return TOGGLE_BUTTON_WITH_MNEMONIC;
Mode                                  return MODE;
Inconsistent                          return INCONSISTENT;

RADIO_BUTTON                          return RADIO_BUTTON;
RADIO_BUTTON_WITH_LABEL               return RADIO_BUTTON_WITH_LABEL;
RADIO_BUTTON_WITH_MNEMONIC            return RADIO_BUTTON_WITH_MNEMONIC;
Join                                  return JOIN;

CHECK_BUTTON                          return CHECK_BUTTON;
CHECK_BUTTON_WITH_LABEL               return CHECK_BUTTON_WITH_LABEL;
CHECK_BUTTON_WITH_MNEMONIC            return CHECK_BUTTON_WITH_MNEMONIC;
Mnemonics                             return MNEMONICS;

GRID                                  return GRID;
Row_homogeneous                       return ROW_HOMOGENEOUS;
Row_spacing                           return ROW_SPACING;
Column_homogeneous                    return COLUMN_HOMOGENEOUS;
Column_spacing                        return COLUMN_SPACING;
Baseline_row                          return BASELINE_ROW;
Row_baseline_position                 return ROW_BASELINE_POSITION;
Atach                                 return ATACH;
Atach_next_to                         return ATACH_NEXT_TO;
 
CMN                                   return COMMON;
Focus_vadjustment                     return FOCUS_VADJUSTMENT;
Focus_hadjustment                     return FOCUS_HADJUSTMENT;
Border_width                          return BORDER_WIDTH;
Child_property                        return CHILD_PROPERTY;

SPIN_BUTTON                           return SPIN_BUTTON;
Adjustment                            return SET_ADJUSTMENT; 
Digits                                return DIGITS; 
Increments                            return INCREMENTS;
Range                                 return RANGE;
Update_policy                         return UPDATE_POLICY;
Numeric                               return NUMERIC;
Spin                                  return SPIN;
Wrap                                  return WRAP;
Snap_to_ticks                         return SNAP_TO_TICKS;

Add_class                             return ADD_CLASS;

LABEL                                 return LABEL;
Pattern                               return PATTERN; 
Justify                               return JUSTIFY;
Xalign                                return XALIGN; 
Yalign                                return YALIGN;
Ellipsize                             return ELLIPSIZE; 
Width_chars                           return WIDTH_CHARS;
Max_width_chars                       return MAX_WIDTH_CHARS;
Line_wrap                             return LINE_WRAP;
Line_wrap_mode                        return LINE_WRAP_MODE;
Lines                                 return LINES;
Select_region                         return SELECT_REGION;
Selectable                            return SELECTABLE;
Text_with_mnemonic                    return TEXT_WITH_MNEMONIC;
Label_text                            return LABEL_TEXT;
Label_use_markup                      return LABEL_USE_MARKUP;
Single_line_mode                      return SINGLE_LINE_MODE;
Angle                                 return ANGLE;
Track_visited_links                   return TRACK_VISITED_LINKS;

COMBO_BOX                             return COMBO_BOX;
COMBO_BOX_ENTRY                       return COMBO_BOX_ENTRY;
COMBO_BOX_TEXT                        return COMBO_BOX_TEXT;
COMBO_BOX_TEXT_ENTRY                  return COMBO_BOX_TEXT_ENTRY;
Wrap_width                            return WRAP_WIDTH;
Row_span_column                       return ROW_SPAN_COLUMN;
Column_span_column                    return COLUMN_SPAN_COLUMN;
Active                                return ACTIVE; 
Id_column                             return ID_COLUMN;
Active_id                             return ACTIVE_ID; 
Model                                 return MODEL; 
Button_sensitivity                    return BUTTON_SENSITIVITY;
Entry_text_column                     return ENTRY_TEXT_COLUMN; 
Popup_fixed_width                     return POPUP_FIXED_WIDTH;

HBUTTONBOX                            return HBUTTONBOX;
VBUTTONBOX                            return VBUTTONBOX; 
Box_layout                            return BOX_LAYOUT; 
Child_secondary                       return CHILD_SECONDARY;
Child_non_homogeneous                 return CHILD_NON_HOMOGENEOUS;

Title                                 return TITLE;
Editable                              return EDITABLE;
Input_purpose                         return INPUT_PURPOSE;
Homogeneous                           return HOMOGENEOUS;

Decorated                             return DECORATED;
Default_geometry                      return DEFAULT_GEOMETRY;
Hide_titlebar_when_maximized          return HIDE_TITLEBAR_WHEN_MAXIMIZED;
Keep_above                            return KEEP_ABOVE;
Keep_below                            return KEEP_BELOW; 
Startup_id                            return STARTUP_ID;
Role                                  return ROLE;
Icon_name                             return ICON_NAME;
Mnemonics_visible                     return MNEMONICS_VISIBLE;
Focus_visible                         return FOCUS_VISIBLE;
Skip_taskbar_hint                     return SKIP_TASKBAR_HINT; 
Skip_pager_hint                       return SKIP_PAGER_HINT;
Urgency_hin                           return URGENCY_HINT;
Gravity                               return GRAVITY;
Type_hint                             return TYPE_HINT;
Position                              return POSITION;
Skip_pager                            return SKIP_PAGER;
Modal                                 return MODAL;
Focus_on_map                          return FOCUS_ON_MAP;
Skip_taskbar                          return SKIP_TASKBAR;
Destroy_with_parent                   return DESTROY_WITH_PARENT;

Titlebar                              return TITLEBAR;
Default_size                          return DEFAULT_SIZE;
Resizable                             return RESIZABLE;
Deletable                             return DELETABLE;
Urgent                                return URGENT;
Accept_focus                          return ACCEPT_FOCUS;

Spacing                               return SPACING;
Baseline                              return BASELINE;
Padding                               return PADDING;
Fill                                  return FILL;
Expand                                return EXPAND;
Pack_type                             return PACK_TYPE;
Center                                return CENTER;

Max_length                            return MAX_LENGTH;
Alignment                             return ALIGNMENT;
Placeholder_text                      return PLACEHOLDER_TEXT;
Text                                  return TEXT;
Activates_defalut                     return ACTIVATES_DEFAULT;
Overwrite_mode                        return OVERWRITE_MODE;
Has_frame                             return HAS_FRAME;
Visibility_char                       return VISIBILITY_CHAR;
Visibility                            return VISIBILITY;

Focus_on_click                        return FOCUS_ON_CLICK;
Size_request                          return SIZE_REQUEST;
Margin_bottom                         return MARGIN_BOTTOM;
Margin_top                            return MARGIN_TOP;
Margin_end                            return MARGIN_END;
Margin_start                          return MARGIN_START;
Valign                                return VALIGN;
Halign                                return HALIGN;
Vexpand_set                           return VEXPAND_SET;
Vexpand                               return VEXPAND;
Hexpand_set                           return HEXPAND_SET;
Hexpand                               return HEXPAND;
Receives_default                      return RECEIVES_DEFAULT;
Sensitive                             return SENSITIVE;
No_show_all                           return NO_SHOW_ALL;
App_paintable                         return APP_PAINTABLE;
Can_default                           return CAN_DEFAULT;
Can_focus                             return CAN_FOCUS;
Visible                               return VISIBLE;
Opacity                               return OPACITY;
Tooltip_markup                        return TOOLTIP_MARKUP;
Has_tooltip                           return HAS_TOOLTIP;
Tooltip_text                          return TOOLTIP_TEXT;
Name                                  return NAME;

Relief                                return RELIEF;
Label                                 return LABEL_TEXT; 
Use_underline                         return USE_UNDERLINE;
Image                                 return IMAGE;
Image_position                        return IMAGE_POSITION;
Always_show_image                     return ALWAYS_SHOW_IMAGE;
Size                                  return SIZE;

Subtitle                              return SUBTITLE;
Has_subtitle                          return HAS_SUBTITLE;
Custom_title                          return CUSTOM_TITLE;
Show_close_button                     return SHOW_CLOSE_BUTTON;
Decoration_layout                     return DECORATION_LAYOUT;
Pack_start                            return PACK_START;
Pack_end                              return PACK_END; 

Policy                                return POLICY;
Placement                             return PLACEMENT;
Shadow_type                           return SHADOW_TYPE;
Hadjustment                           return HADJUSTMENT; 
Vadjustment                           return VADJUSTMENT; 
Min_content_width                     return MIN_CONTENT_WIDTH;
Min_content_height                    return MIN_CONTENT_HEIGHT;
Kinetic_scrolling                     return KINETIC_SCROLLING;
Capture_button_press                  return CAPTURE_BUTTON_PRESS;
Overlay_scrolling                     return OVERLAY_SCROLLING;

Value                                 return VALUE;
Clamp_page                            return CLAMP_PAGE;
Configure                             return CONFIGURE; 
Lower                                 return LOWER; 
Page_increment                        return PAGE_INCREMENT;
Page_size                             return PAGE_SIZE; 
Step_increment                        return STEP_INCREMENT;
Upper                                 return UPPER;

Border_window_size                    return BORDER_WINDOW_SIZE;
Wrap_mode                             return WRAP_MODE; 
Cursor_visible                        return CURSOR_VISIBLE;
Overwrite                             return OVERWRITE; 
Pixels_above_lines                    return PIXELS_ABOVE_LINES;
Pixels_below_linew                    return PIXELS_BELOW_LINES;
Pixels_inside_wrap                    return PIXELS_INSIDE_WRAP;
Justification                         return JUSTIFICATION; 
Left_margin                           return LEFT_MARGIN;
Right_margin                          return RIGHT_MARGIN;
Indent                                return INDENT;
Accepts_tab                           return ACCEPTS_TAB;
Input_hints                           return INPUT_HINTS; 

Stack_switcher_stack                  return STACK_SWITCHER_STACK;
Hhomogeneous                          return HHOMOGENEOUS;
Vhomogeneous                          return VHOMOGENEOUS;
Transition_duration                   return TRANSITION_DURATION;
Transition_type                       return TRANSITION_TYPE;
Titled                                return TITLED;

App_id                                return APP_ID;
App_flags                             return APP_FLAGS;
Accels_for_action                     return ACCELS_FOR_ACTION;
  
\"(\\.|\\\n|[^\\"])*\"                     yylval.string=strdup(yytext); return STRING;  
{ID}+                                 yylval.string=strdup(yytext); return IDENTIFIER;
;                                     return SEMICOLON;
"|"                                   return OR;
\n                                    ;
[ \t]+                                ;
.                                     fprintf(stderr, "Error operator: %s\n", yytext);
%%

void comment()
{
        char c, c1;

loop:
        while ((c = input()) != '*' && c > 0)
                putchar(c);

        if ((c1 = input()) != '/' && c > 0) {
                unput(c1);
                goto loop;
        }

        if (c > 0)
                putchar(c1);
  
        putchar('\n');
}
