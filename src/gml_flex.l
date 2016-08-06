DIGIT     [0-9]
LITERAL   [a-zA-Z_]
ID        [a-zA-Z0-9_]

%{
#include<stdio.h>
#include"gml_bison.h"

void comment();
%}

%%

"/*"                  comment();
{DIGIT}+              yylval.string=strdup(yytext);    return NUMBER; 
{DIGIT}+\.{DIGIT}+    yylval.string=strdup(yytext);    return FLOAT;
APPLICATION           return APPLICATION;
STACK                 return STACK;
STACK_SWITCHER        return STACK_SWITCHER;
TEXT_VIEW             return TEXT_VIEW;
ADJUSTMENT            return ADJUSTMENT;
SCROLLED_WINDOW       return SCROLLED_WINDOW;
HEADER_BAR            return HEADER_BAR;
ENTRY                 return ENTRY;
HBOX                  return HBOX;
VBOX                  return VBOX;
BUTTON                return BUTTON;
BUTTON_FROM_ICON_NAME return BUTTON_FROM_ICON_NAME;
WINDOW                return WINDOW;
SET                   return SET;
ADD                   return ADD;
SIGNAL                return SIGNAL;
PACK                  return PACK;
CMN                   return COMMON;
HBUTTONBOX            return HBUTTONBOX;
VBUTTONBOX            return VBUTTONBOX; 
COMBO_BOX             return COMBO_BOX;
COMBO_BOX_ENTRY       return COMBO_BOX_ENTRY;

Wrap_width            return WRAP_WIDTH;
Row_span_column       return ROW_SPAN_COLUMN;
Column_span_column    return COLUMN_SPAN_COLUMN;
Active                return ACTIVE; 
Id_column             return ID_COLUMN;
Active_id             return ACTIVE_ID; 
Model                 return MODEL; 
Focus_on_click        return FOCUS_ON_CLICK;
Button_sensitivity    return BUTTON_SENSITIVITY;
Entry_text_column     return ENTRY_TEXT_COLUMN; 
Popup_fixed_width     return POPUP_FIXED_WIDTH;

Box_layout            return BOX_LAYOUT; 
Child_secondary       return CHILD_SECONDARY;
Child_non_homogeneous return CHILD_NON_HOMOGENEOUS;

Title                 return TITLE;
Editable              return EDITABLE;
Input_purpose         return INPUT_PURPOSE;
Homogeneous           return HOMOGENEOUS;

Decorated             return DECORATED;
Default_geometry      return DEFAULT_GEOMETRY;
Hide_titlebar_when_maximized return HIDE_TITLEBAR_WHEN_MAXIMIZED;
Keep_above            return KEEP_ABOVE;
Keep_below            return KEEP_BELOW; 
Startup_id            return STARTUP_ID;
Role                  return ROLE;
Icon_name             return ICON_NAME;
Mnemonics_visible     return MNEMONICS_VISIBLE;
Focus_visible         return FOCUS_VISIBLE;
Skip_taskbar_hint     return SKIP_TASKBAR_HINT; 
Skip_pager_hint       return SKIP_PAGER_HINT;
Urgency_hin           return URGENCY_HINT;
Gravity               return GRAVITY;
Type_hint             return TYPE_HINT;
Position              return POSITION;
Skip_pager            return SKIP_PAGER;
Modal                 return MODAL;
Focus_on_map          return FOCUS_ON_MAP;
Skip_taskbar          return SKIP_TASKBAR;
Destroy_with_parent   return DESTROY_WITH_PARENT;

Titlebar              return TITLEBAR;
Default_size          return DEFAULT_SIZE;
Resizable             return RESIZABLE;
Deletable             return DELETABLE;
Urgent                return URGENT;
Accept_focus          return ACCEPT_FOCUS;

Spacing               return SPACING;
Baseline              return BASELINE;
Padding               return PADDING;
Fill                  return FILL;
Expand                return EXPAND;
Pack_type             return PACK_TYPE;
Center                return CENTER;

Max_length            return MAX_LENGTH;
Width_chars           return WIDTH_CHARS;
Alignment             return ALIGNMENT;
Placeholder_text      return PLACEHOLDER_TEXT;
Text                  return TEXT;
Activates_defalut     return ACTIVATES_DEFAULT;
Overwrite_mode        return OVERWRITE_MODE;
Has_frame             return HAS_FRAME;
Visibility_char       return VISIBILITY_CHAR;
Visibility            return VISIBILITY;

Size_request          return SIZE_REQUEST;
Margin_bottom         return MARGIN_BOTTOM;
Margin_top            return MARGIN_TOP;
Margin_end            return MARGIN_END;
Margin_start          return MARGIN_START;
Valign                return VALIGN;
Halign                return HALIGN;
Vexpand_set           return VEXPAND_SET;
Vexpand               return VEXPAND;
Hexpand_set           return HEXPAND_SET;
Hexpand               return HEXPAND;
Receives_default      return RECEIVES_DEFAULT;
Sensitive             return SENSITIVE;
No_show_all           return NO_SHOW_ALL;
App_paintable         return APP_PAINTABLE;
Can_default           return CAN_DEFAULT;
Can_focus             return CAN_FOCUS;
Visible               return VISIBLE;
Opacity               return OPACITY;
Tooltip_markup        return TOOLTIP_MARKUP;
Has_tooltip           return HAS_TOOLTIP;
Tooltip_text          return TOOLTIP_TEXT;
Name                  return NAME;

Relief                return RELIEF;
Label                 return LABEL; 
Use_underline         return USE_UNDERLINE;
Focus_on_click        return FOCUS_ON_CLICK;
Image                 return IMAGE;
Image_position        return IMAGE_POSITION;
Always_show_image     return ALWAYS_SHOW_IMAGE;
Icon_name             return ICON_NAME;
Size                  return SIZE;

Subtitle              return SUBTITLE;
Has_subtitle          return HAS_SUBTITLE;
Custom_title          return CUSTOM_TITLE;
Show_close_button     return SHOW_CLOSE_BUTTON;
Decoration_layout     return DECORATION_LAYOUT;
Pack_start            return PACK_START;
Pack_end              return PACK_END; 

Policy                return POLICY;
Placement             return PLACEMENT;
Shadow_type           return SHADOW_TYPE;
Hadjustment           return HADJUSTMENT; 
Vadjustment           return VADJUSTMENT; 
Min_content_width     return MIN_CONTENT_WIDTH;
Min_content_height    return MIN_CONTENT_HEIGHT;
Kinetic_scrolling     return KINETIC_SCROLLING;
Capture_button_press  return CAPTURE_BUTTON_PRESS;
Overlay_scrolling     return OVERLAY_SCROLLING;

Value                 return VALUE;
Clamp_page            return CLAMP_PAGE;
Configure             return CONFIGURE; 
Lower                 return LOWER; 
Page_increment        return PAGE_INCREMENT;
Page_size             return PAGE_SIZE; 
Step_increment        return STEP_INCREMENT;
Upper                 return UPPER;

Border_window_size    return BORDER_WINDOW_SIZE;
Wrap_mode             return WRAP_MODE; 
Cursor_visible        return CURSOR_VISIBLE;
Overwrite             return OVERWRITE; 
Pixels_above_lines    return PIXELS_ABOVE_LINES;
Pixels_below_linew    return PIXELS_BELOW_LINES;
Pixels_inside_wrap    return PIXELS_INSIDE_WRAP;
Justification         return JUSTIFICATION; 
Left_margin           return LEFT_MARGIN;
Right_margin          return RIGHT_MARGIN;
Indent                return INDENT;
Accepts_tab           return ACCEPTS_TAB;
Input_hints           return INPUT_HINTS; 

Stack_switcher_stack  return STACK_SWITCHER_STACK;
Hhomogeneous          return HHOMOGENEOUS;
Vhomogeneous          return VHOMOGENEOUS;
Transition_duration   return TRANSITION_DURATION;
Transition_type       return TRANSITION_TYPE;
Titled                return TITLED;

App_id                return APP_ID;
App_flags             return APP_FLAGS;
Accels_for_action     return ACCELS_FOR_ACTION;
  
\"(\\.|[^\\"])*\"     yylval.string=strdup(yytext); return STRING;  
{ID}+                 yylval.string=strdup(yytext); return IDENTIFIER;
;                     return SEMICOLON;
"|"                   return OR;
\n                    ;
[ \t]+                ;
.                     fprintf(stderr, "Error operator: %s\n", yytext);
%%

void comment()
{
        char c, c1;

loop:
        while ((c = input()) != '*' && c != 0)
                putchar(c);

        if ((c1 = input()) != '/' && c != 0) {
                unput(c1);
                goto loop;
        }

        if (c != 0)
                putchar(c1);
  
        putchar('\n');
}
