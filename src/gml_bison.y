%{
#include <string.h>
#include "gml.h"
#include "style_context.h"
#include "widgets/shared.h"
#include "widgets/widget.h"
#include "widgets/window.h"
#include "widgets/entry.h"
#include "widgets/box.h"
#include "widgets/button.h"
#include "widgets/header_bar.h"
#include "widgets/scrolled_window.h"
#include "widgets/adjustment.h"
#include "widgets/text_view.h"
#include "widgets/stack.h"
#include "widgets/stack_switcher.h"
#include "widgets/button_box.h"
#include "widgets/combo_box.h"
#include "widgets/combo_box_text.h"
#include "widgets/label.h"
#include "widgets/spin_button.h"
#include "widgets/container.h"
#include "widgets/grid.h"
#include "widgets/check_button.h"
#include "widgets/radio_button.h"
#include "widgets/spinner.h"
#include "widgets/toggle_button.h"
#include "widgets/separator.h"
#include "widgets/font_button.h"
#include "widgets/file_chooser_button.h"
#include "widgets/file_chooser.h"
#include "widgets/link_button.h"
#include "widgets/switch.h"
#include "widgets/progress_bar.h"
#include "widgets/level_bar.h"
#include "widgets/scale.h"
#include "widgets/range.h"
#include "widgets/orientation.h"
#include "widgets/frame.h"
#include "widgets/tree_view.h"
#include "widgets/tree_view_column.h"
#include "widgets/cell_renderer_toggle.h"
#include "widgets/cell_renderer_pixbuf.h"
#include "widgets/cell_renderer_text.h"
#include "widgets/list_store.h"
#include "widgets/cell_layout.h"
#include "widgets/color_chooser.h"
#include "widgets/notebook.h"
#include "widgets/overlay.h"
#include "widgets/revealer.h"
#include "widgets/volume_button.h"
#include "widgets/text_buffer.h"
#include "widgets/image.h"
#include "widgets/object.h"
#include "widgets/action_bar.h"
#include "widgets/menu_button.h"
#include "widgets/g_menu.h"
#include "widgets/list_box.h"
#include "widgets/size_group.h"
#include "widgets/menu_item.h"
#include "widgets/separator_menu_item.h"
#include "widgets/menu.h"
#include "widgets/check_menu_item.h"
#include "widgets/radio_menu_item.h"
#include "widgets/menu_bar.h"
#include "widgets/tool_button.h"
#include "widgets/tool_item.h"
#include "widgets/toolbar.h"
#include "widgets/search_entry.h"
#include "widgets/search_bar.h"
#include "widgets/info_bar.h"
#include "widgets/statusbar.h"
#include "widgets/paned.h"
#include "widgets/accel_group.h"
#include "widgets/application.h"
#include "widgets/calendar.h"
#include "widgets/icon_view.h"
#include "widgets/expander.h"
#include "widgets/g_signal.h"
#include "widgets/message_dialog.h"
#include "widgets/dialog.h"

#define YYERROR_VERBOSE 1

void yyerror(const char *str)
{
        fprintf(stderr, "%s\n", str);
        exit(1);
}

int yywrap()
{
        return 1;
}

int yylex();

%}
%token DIALOG

%token MESSAGE_DIALOG BUTTONS PARENT MARKUP SECONDARY_TEXT SECONDARY_MARKUP 

%token EXPANDER EXPANDER_WITH_MNEMONIC EXPANDED LABEL_FILL RESIZE_TOPLEVEL 

%token ICON_VIEW ICON_VIEW_WITH_AREA AREA TEXT_COLUMN MARKUP_COLUMN 
%token PIXBUF_COLUMN ITEM_ORIENTATION COLUMNS ITEM_WIDTH MARGIN ITEM_PADDING 

%token CALENDAR
%token DISPLAY_OPTIONS DETAIL_FUNC DETAIL_WIDTH_CHARS DETAIL_HEIGHT_ROWS 

%token APPLICATION APPLICATION_ID WINDOW APP_MENU MENUBAR ACCELS_FOR_ACTION 
%token FLAGS

%token ACCEL_GROUP ACCEL_GROUP_WIDGET ACCELERATOR_DEFAULT_MOD_MASK ACCELERATOR 

%token PANED WIDE_HANDLE PACK1 PACK2

%token STATUSBAR

%token INFO_BAR RESPONSE_SENSITIVE DEFAULT_RESPONSE MESSAGE_TYPE BUTTON
%token CONTENT_AREA
 
%token SEARCH_BAR CONNECT_ENTRY SEARCH_MODE 

%token SEARCH_ENTRY_WIDGET

%token TOOLBAR SHOW_ARROW ICON_SIZE

%token TOOL_ITEM PROXY_MENU_ITEM MENU_ITEM_WITH_MNEMONIC 
%token USE_DRAG_WINDOW VISIBLE_HORIZONTAL VISIBLE_VERTICAL IS_IMPORTANT 

%token TOOL_BUTTON ICON_WIDGET 

%token MENU_BAR MENU_BAR_FROM_MODEL BAR_PACK_DIRECTION CHILD_PACK_DIRECTION 

%token RADIO_MENU_ITEM RADIO_MENU_ITEM_WITH_LABEL RADIO_MENU_ITEM_WITH_MNEMONIC

%token CHECK_MENU_ITEM CHECK_MENU_ITEM_WITH_LABEL 
%token CHECK_MENU_ITEM_WITH_MNEMONIC DRAW_AS_RADIO 

%token MENU MENU_FROM_MODEL SCREEN MONITOR RESERVE_TOGGLE_SIZE 

%token SEPARATOR_MENU_ITEM

%token MENU_ITEM ACCEL_PATH RESERVE_INDICATOR 

%token SIZE_GROUP

%token LIST_BOX LIST_BOX_ROW SELECTION_MODE PLACEHOLDER HEADER HEADER_FUNC 

%token G_MENU ITEM SECTION SUBMENU G_MENU_ITEM LINK DETAILED_ACTION 
%token ACCELERATOR_LABEL

%token MENU_BUTTON POPUP POPOVER MENU_MODEL USE_POPOVER DIRECTION ALIGN_WIDGET

%token ACTION_BAR PACK_CENTER

%token PROPERTY SET_DATA

%token IMAGE_WIDGET IMAGE_FROM_FILE IMAGE_FROM_ICON_NAME IMAGE_FROM_RESOURCE 
%token IMAGE_PIXEL_SIZE

%token TEXT_BUFFER

%token SCALE_BUTTON ICON MIN MAX STEP

%token VOLUME_BUTTON

%token REVEALER REVEAL_CHILD

%token OVERLAY_PASS_THROUGH OVERLAY ADD_OVERLAY 

%token NOTEBOOK TAB_POS SHOW_TABS SHOW_BORDER SCROLLABLE POPUP_ENABLE
%token MENU_LABEL MENU_LABEL_TEXT TAB_LABEL TAB_LABEL_TEXT 
%token TAB_REORDERABLE TAB_DETACHABLE GROUP_NAME ACTION_WIDGET

%token END
    
%token LIST_STORE COLUMN_TYPES COLUMN ROW ID

%token CELL_RENDERER_PIXBUF CELL_RENDERER_TEXT

%token TREE_VIEW_COLUMN SIZING FIXED_WIDTH MIN_WIDTH MAX_WIDTH CELL_RENDERER
%token CLICKABLE WIDGET SORT_COLUMN_ID SORT_INDICATOR SORT_ORDER ATTRIBUTE

%token CELL_RENDERER_TOGGLE RADIO ACTIVATABLE

%token TREE_VIEW LEVEL_INDENTATION BUFFER SHOW_EXPANDERS HEADERS_VISIBLE
%token HEADERS_CLICKABLE ACTIVATE_ON_SINGLE_CLICK EXPANDER_COLUMN REORDERABLE
%token ENABLE_SEARCH SEARCH_COLUMN SEARCH_ENTRY FIXED_HEIGHT_MODE
%token HOVER_SELECTION HOVER_EXPAND RUBBER_BANDING ENABLE_TREE_LINES GRID_LINES
%token TOOLTIP_COLUMN

%token FRAME LABEL_WIDGET LABEL_ALIGN 

%token RANGE_FILL_LEVEL RANGE_RESTRICT_TO_FILL_LEVEL RANGE_SHOW_FILL_LEVEL
%token RANGE_ADJUSTMENT RANGE_INVERTED RANGE_VALUE RANGE_INCREMENTS RANGE_RANGE
%token RANGE_ROUND_DIGITS RANGE_LOWER_STEPPER_SENSITIVITY 
%token RANGE_UPPER_STEPPER_SENSITIVITY RANGE_FLIPPABLE RANGE_SLIDER_SIZE_FIXED 

%token SCALE DRAW_VALUE HAS_ORIGIN VALUE_POS ADD_MARK

%token LEVEL_BAR MIN_VALUE MAX_VALUE ADD_OFFSET_VALUE

%token PROGRESS_BAR FRACTION INVERTED SHOW_TEXT PULSE_STEP 

%token SWITCH STATE
%token LINK_BUTTON LINK_BUTTON_WITH_LABEL VISITED

%token ACTION LOCAL_ONLY SELECT_MULTIPLE SHOW_HIDDEN
%token DO_OVERWRITE_CONFIRMATION CREATE_FOLDERS CURRENT_NAME FILENAME         
%token CURRENT_FOLDER URI CURRENT_FOLDER_URI PREVIEW_WIDGET
%token PREVIEW_WIDGET_ACTIVE USE_PREVIEW_LABEL
  
%token FILE_CHOOSER_BUTTON 

%token COLOR_BUTTON COLOR_BUTTON_WITH_RGBA RGBA USE_ALPHA

%token FONT_BUTTON FONT FONT_NAME SHOW_STYLE SHOW_SIZE 
%token USE_FONT USE_SIZE

%token SEPARATOR ORIENTATION

%token SPINNER START STOP

%token TOGGLE_BUTTON TOGGLE_BUTTON_WITH_LABEL TOGGLE_BUTTON_WITH_MNEMONIC MODE 
%token INCONSISTENT
 
%token RADIO_BUTTON RADIO_BUTTON_WITH_LABEL RADIO_BUTTON_WITH_MNEMONIC 
%token JOIN_GROUP

%token CHECK_BUTTON CHECK_BUTTON_WITH_LABEL CHECK_BUTTON_WITH_MNEMONIC MNEMONICS
%token MNEMONIC

%token GRID ROW_HOMOGENEOUS ROW_SPACING COLUMN_HOMOGENEOUS COLUMN_SPACING
%token BASELINE_ROW ROW_BASELINE_POSITION ATACH ATACH_NEXT_TO 
 
%token COMMON FOCUS_VADJUSTMENT FOCUS_HADJUSTMENT BORDER_WIDTH CHILD_PROPERTY

%token SPIN_BUTTON SET_ADJUSTMENT DIGITS INCREMENTS RANGE UPDATE_POLICY
%token NUMERIC SPIN WRAP SNAP_TO_TICKS

%token LABEL PATTERN JUSTIFY XALIGN YALIGN ELLIPSIZE MAX_WIDTH_CHARS LINE_WRAP 
%token LINE_WRAP_MODE LINES SELECT_REGION SELECTABLE TEXT_WITH_MNEMONIC 
%token LABEL_TEXT USE_MARKUP SINGLE_LINE_MODE ANGLE TRACK_VISITED_LINKS 

%token STYLE STYLE_OP ADD_CLASS

%token COMBO_BOX_TEXT COMBO_BOX_TEXT_ENTRY

%token COMBO_BOX COMBO_BOX_ENTRY WRAP_WIDTH ROW_SPAN_COLUMN COLUMN_SPAN_COLUMN 
%token ACTIVE ID_COLUMN ACTIVE_ID MODEL BUTTON_SENSITIVITY ENTRY_TEXT_COLUMN 
%token POPUP_FIXED_WIDTH 

%token HBUTTONBOX VBUTTONBOX BOX_LAYOUT CHILD_SECONDARY CHILD_NON_HOMOGENEOUS 

%token SKIP_PAGER 

%token EDITABLE INPUT_PURPOSE HOMOGENEOUS 

%token DECORATED DEFAULT_GEOMETRY HIDE_TITLEBAR_WHEN_MAXIMIZED KEEP_ABOVE 
%token KEEP_BELOW STARTUP_ID ROLE ICON_NAME MNEMONICS_VISIBLE FOCUS_VISIBLE 
%token SKIP_TASKBAR_HINT SKIP_PAGER_HINT URGENCY_HINT GRAVITY TYPE_HINT 
%token POSITION MODAL FOCUS_ON_MAP SKIP_TASKBAR DESTROY_WITH_PARENT TITLEBAR

%token ACCEPT_FOCUS URGENT DELETABLE RESIZABLE DEFAULT_SIZE TITLE 

%token SPACING BASELINE PADDING FILL EXPAND PACK_TYPE CENTER

%token ENTRY ALIGNMENT MAX_LENGTH WIDTH_CHARS PLACEHOLDER_TEXT TEXT
%token ACTIVATES_DEFAULT OVERWRITE_MODE HAS_FRAME VISIBILITY_CHAR VISIBILITY

%token SIZE_REQUEST MARGIN_BOTTOM MARGIN_TOP MARGIN_END MARGIN_START VALIGN 
%token HALIGN VEXPAND_SET VEXPAND HEXPAND_SET HEXPAND RECEIVES_DEFAULT
%token SENSITIVE SHOW_ALL NO_SHOW_ALL APP_PAINTABLE CAN_DEFAULT CAN_FOCUS 
%token VISIBLE OPACITY TOOLTIP_MARKUP HAS_TOOLTIP TOOLTIP_TEXT NAME 
%token FOCUS_ON_CLICK HIDE SHOW

%token BUTTON_WIDGET BUTTON_FROM_ICON_NAME RELIEF USE_UNDERLINE 
%token ALWAYS_SHOW_IMAGE IMAGE IMAGE_POSITION SIZE

%token HEADER_BAR SUBTITLE HAS_SUBTITLE CUSTOM_TITLE SHOW_CLOSE_BUTTON
%token DECORATION_LAYOUT PACK_START PACK_END 

%token SCROLLED_WINDOW POLICY PLACEMENT SHADOW_TYPE HADJUSTMENT VADJUSTMENT 
%token MIN_CONTENT_WIDTH MIN_CONTENT_HEIGHT KINETIC_SCROLLING 
%token CAPTURE_BUTTON_PRESS OVERLAY_SCROLLING

%token ADJUSTMENT VALUE CLAMP_PAGE CONFIGURE LOWER PAGE_INCREMENT PAGE_SIZE 
%token STEP_INCREMENT UPPER

%token TEXT_VIEW BORDER_WINDOW_SIZE WRAP_MODE CURSOR_VISIBLE OVERWRITE 
%token PIXELS_ABOVE_LINES PIXELS_BELOW_LINES PIXELS_INSIDE_WRAP JUSTIFICATION 
%token LEFT_MARGIN RIGHT_MARGIN INDENT ACCEPTS_TAB INPUT_HINTS 

%token STACK STACK_SWITCHER STACK_SWITCHER_STACK HHOMOGENEOUS VHOMOGENEOUS 
%token TRANSITION_DURATION TRANSITION_TYPE TITLED

%token INCLUDE SET ADD SIGNAL SIGNAL_SWAPPED PACK IDENTIFIER STRING NUMBER 
%token SEMICOLON HBOX VBOX WINDOW_WIDGET TYPE FLOAT CHAR OR ARG

%union
{
        char  *string;
}

%type <string> IDENTIFIER STRING NUMBER FLOAT icon_name size flags
%type <string> set_label_text mnemonic orientation arg_id area
%type <string> min max step model application_id text buttons type parent
%%

widgets: 
        | widgets widget
        ;

widget:
          window
        | button
        | hbutton_box
        | vbutton_box
        | vbox
        | hbox
        | entry
        | header_bar
        | scrolled_window
        | adjustment
        | text_view
        | stack
        | stack_switcher
        | combo_box
        | combo_box_with_entry
        | combo_box_text
        | combo_box_text_with_entry
        | button_new_from_icon_name
        | label
        | spin_button
        | grid
        | check_button
        | check_button_with_label
        | check_button_with_mnemonic
        | radio_button
        | radio_button_with_label
        | radio_button_with_mnemonic
        | toggle_button
        | toggle_button_with_label
        | toggle_button_with_mnemonic
        | spinner
        | separator
        | font_button
        | color_button
        | file_chooser_button
        | link_button
        | link_button_with_label
        | switch
        | progress_bar
        | level_bar
        | scale
        | frame
        | tree_view
        | tree_view_column
        | cell_renderer_toggle
        | cell_renderer_pixbuf
        | cell_renderer_text
        | list_store
        | notebook
        | overlay
        | revealer
        | volume_button
        | scale_button
        | text_buffer
        | image
        | action_bar
        | menu_button
        | g_menu
        | g_menu_item
        | list_box
        | list_box_row
        | size_group
        | menu_item
        | menu_item_with_mnemonic
        | separator_menu_item
        | menu 
        | menu_from_model
        | check_menu_item
        | check_menu_item_with_label
        | check_menu_item_with_mnemonic
        | radio_menu_item
        | radio_menu_item_with_label
        | radio_menu_item_with_mnemonic
        | menu_bar
        | menu_bar_from_model
        | tool_button
        | tool_item
        | toolbar
        | search_entry
        | search_bar
        | info_bar
        | statusbar
        | paned
        | accel_group
        | application
        | calendar
        | icon_view
        | icon_view_with_area
        | expander
        | expander_with_mnemonic
        | message_dialog
        | dialog
        ;

params: 
        | params param
        ;

param:
          common
        | set
        | add
        | signal
        | signal_swapped
        | pack
        | bbox_child_set
        | bar_pack
        | stack_add
        | style
        | grid_add
        | icon_add
        | properties
        ;

text:
        ARG TEXT STRING                                             { $$ = $3; }
        ;

buttons:
        ARG BUTTONS IDENTIFIER                                      { $$ = $3; }
        ;

type:
        ARG TYPE IDENTIFIER                                         { $$ = $3; }
        ;

parent:
        ARG PARENT IDENTIFIER                                       { $$ = $3; }
        ;

area:
        ARG AREA IDENTIFIER                                         { $$ = $3; }
        ;

flags:
        ARG FLAGS IDENTIFIER                                        { $$ = $3; }
        | flags OR IDENTIFIER               { $$ = append_flag($$, " | ", $3); }
        ;

application_id:
        ARG APPLICATION_ID STRING                                   { $$ = $3; }
        ;

arg_id:
        ARG IDENTIFIER                                              { $$ = $2; }
        ;

orientation:
        SET ORIENTATION IDENTIFIER                                  { $$ = $3; }
        ;

set_label_text:
        SET LABEL_TEXT STRING                                       { $$ = $3; }
        ;

mnemonic:
        SET MNEMONIC STRING                                         { $$ = $3; }
        ;

icon_name:
        SET ICON_NAME STRING                                        { $$ = $3; }
        ;
size:
        SET SIZE IDENTIFIER                                         { $$ = $3; }
        ;

style:
        STYLE_OP ADD_CLASS STRING               { style_context_add_class($3); }
        ;
min:
        SET MIN FLOAT                                               { $$ = $3; }
        ;

max:
        SET MAX FLOAT                                               { $$ = $3; }
        ;

step:
        SET STEP FLOAT                                              { $$ = $3; }
        ;

dialog:
        DIALOG IDENTIFIER                                    { dialog_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

message_dialog:
        MESSAGE_DIALOG IDENTIFIER parent flags type buttons text
                                 { message_dialog_new($2, $3, $4, $5, $6, $7); }
        params SEMICOLON                                    { block_close($2); }
        ;

expander:
        EXPANDER IDENTIFIER                                { expander_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

expander_with_mnemonic:
        EXPANDER_WITH_MNEMONIC IDENTIFIER mnemonic
                                         { expander_new_with_mnemonic($2, $3); }
        ;

icon_view_with_area:
        ICON_VIEW_WITH_AREA IDENTIFIER area { icon_view_new_with_area($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

icon_view:
        ICON_VIEW IDENTIFIER                              { icon_view_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

calendar:
        CALENDAR IDENTIFIER                                { calendar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

accel_group:
        ACCEL_GROUP_WIDGET IDENTIFIER                   { accel_group_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

bbox_child_set:
        SET CHILD_SECONDARY IDENTIFIER IDENTIFIER
                                     { button_box_set_child_secondary($3, $4); }
        | SET CHILD_NON_HOMOGENEOUS IDENTIFIER IDENTIFIER
                               { button_box_set_child_non_homogeneous($3, $4); }
        ;

model:
        ARG MODEL IDENTIFIER                                        { $$ = $3; }
        ;
        
application:
        APPLICATION IDENTIFIER application_id flags
                                                { application_new($2, $3, $4); }
        params SEMICOLON                                    { block_close($2); }
        ;

paned:
        PANED IDENTIFIER orientation                      { paned_new($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

statusbar:
        STATUSBAR IDENTIFIER                              { statusbar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

info_bar:
        INFO_BAR IDENTIFIER                                { info_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

search_bar:
        SEARCH_BAR IDENTIFIER                            { search_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

search_entry:
        SEARCH_ENTRY_WIDGET IDENTIFIER                 { search_entry_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

toolbar:
        TOOLBAR IDENTIFIER                                  { toolbar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

tool_item:
        TOOL_ITEM IDENTIFIER                              { tool_item_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

tool_button:
        TOOL_BUTTON IDENTIFIER                          { tool_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

menu_bar:
        MENU_BAR IDENTIFIER                                { menu_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

menu_bar_from_model:
        MENU_BAR_FROM_MODEL IDENTIFIER model 
                                            { menu_bar_new_from_model($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_menu_item:
        RADIO_MENU_ITEM IDENTIFIER                  { radio_menu_item_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_menu_item_with_label:
        RADIO_MENU_ITEM_WITH_LABEL IDENTIFIER set_label_text
                                     { radio_menu_item_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_menu_item_with_mnemonic:
        RADIO_MENU_ITEM_WITH_MNEMONIC IDENTIFIER mnemonic
                                  { radio_menu_item_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_menu_item:
        CHECK_MENU_ITEM IDENTIFIER                  { check_menu_item_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_menu_item_with_label:
        CHECK_MENU_ITEM_WITH_LABEL IDENTIFIER set_label_text
                                     { check_menu_item_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_menu_item_with_mnemonic:
        CHECK_MENU_ITEM_WITH_MNEMONIC IDENTIFIER mnemonic
                                  { check_menu_item_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;
 
menu:
        MENU IDENTIFIER                                        { menu_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

menu_from_model:
        MENU_FROM_MODEL IDENTIFIER model        { menu_new_from_model($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

separator_menu_item:
        SEPARATOR_MENU_ITEM IDENTIFIER          { separator_menu_item_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

menu_item:
        MENU_ITEM IDENTIFIER                              { menu_item_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

menu_item_with_mnemonic:
        MENU_ITEM_WITH_MNEMONIC IDENTIFIER mnemonic
                                        { menu_item_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

size_group:
        SIZE_GROUP IDENTIFIER                            { size_group_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

list_box:
        LIST_BOX IDENTIFIER                                { list_box_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

list_box_row:
        LIST_BOX_ROW IDENTIFIER                        { list_box_row_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

g_menu:
        G_MENU IDENTIFIER                                    { g_menu_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

g_menu_item:
        G_MENU_ITEM IDENTIFIER                          { g_menu_item_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

action_bar:
        ACTION_BAR IDENTIFIER                            { action_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

menu_button:
        MENU_BUTTON IDENTIFIER                          { menu_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

image:
        IMAGE_WIDGET IDENTIFIER                               { image_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

text_buffer:
        TEXT_BUFFER IDENTIFIER                          { text_buffer_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

scale_button:
        SCALE_BUTTON IDENTIFIER size min max step
                                       { scale_button_new($2, $3, $4, $5, $6); }
        params SEMICOLON          { scale_button_set_icons(); block_close($2); }
        ;


volume_button:
        VOLUME_BUTTON IDENTIFIER                      { volume_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

revealer:
        REVEALER IDENTIFIER                                { revealer_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

overlay:
        OVERLAY IDENTIFIER                                  { overlay_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

notebook:
        NOTEBOOK IDENTIFIER                                { notebook_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

list_store:
        LIST_STORE IDENTIFIER columns                    { list_store_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

cell_renderer_text:
        CELL_RENDERER_TEXT IDENTIFIER            { cell_renderer_text_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

cell_renderer_pixbuf:
        CELL_RENDERER_PIXBUF IDENTIFIER        { cell_renderer_pixbuf_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

cell_renderer_toggle:
        CELL_RENDERER_TOGGLE IDENTIFIER        { cell_renderer_toggle_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

tree_view_column:
        TREE_VIEW_COLUMN IDENTIFIER                { tree_view_column_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

tree_view:
        TREE_VIEW IDENTIFIER                              { tree_view_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

frame:
        FRAME IDENTIFIER                                      { frame_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

scale:
        SCALE IDENTIFIER arg_id arg_id                { scale_new($2, $3, $4); }
        params SEMICOLON                                    { block_close($2); }
        ;

level_bar:
        LEVEL_BAR IDENTIFIER                              { level_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

progress_bar:
        PROGRESS_BAR IDENTIFIER                        { progress_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

switch:
        SWITCH IDENTIFIER                                    { switch_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

link_button:
        LINK_BUTTON IDENTIFIER                          { link_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

link_button_with_label:
        LINK_BUTTON_WITH_LABEL IDENTIFIER set_label_text
                                         { link_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

file_chooser_button:
        FILE_CHOOSER_BUTTON IDENTIFIER          { file_chooser_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

color_button:
        COLOR_BUTTON IDENTIFIER                        { color_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

font_button:
        FONT_BUTTON IDENTIFIER                          { font_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

separator:
        SEPARATOR IDENTIFIER orientation              { separator_new($2, $3); }
        SEMICOLON
        ;

spinner:
        SPINNER IDENTIFIER                                  { spinner_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

toggle_button:
        TOGGLE_BUTTON IDENTIFIER                      { toggle_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

toggle_button_with_label:
        TOGGLE_BUTTON_WITH_LABEL IDENTIFIER set_label_text 
                                       { toggle_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

toggle_button_with_mnemonic:
        TOGGLE_BUTTON_WITH_MNEMONIC IDENTIFIER mnemonic
                                    { toggle_button_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;
   
radio_button:
        RADIO_BUTTON IDENTIFIER                        { radio_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_button_with_label:
        RADIO_BUTTON_WITH_LABEL IDENTIFIER set_label_text 
                                        { radio_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_button_with_mnemonic:
        RADIO_BUTTON_WITH_MNEMONIC IDENTIFIER mnemonic
                                     { radio_button_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;
 
check_button:
        CHECK_BUTTON IDENTIFIER                        { check_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_button_with_label:
        CHECK_BUTTON_WITH_LABEL IDENTIFIER set_label_text 
                                        { check_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_button_with_mnemonic:
        CHECK_BUTTON_WITH_MNEMONIC IDENTIFIER mnemonic 
                                     { check_button_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

grid:
        GRID IDENTIFIER                                        { grid_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

spin_button:
        SPIN_BUTTON IDENTIFIER                          { spin_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

label:
        LABEL IDENTIFIER                                      { label_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

button_new_from_icon_name:
        BUTTON_FROM_ICON_NAME IDENTIFIER icon_name size  
                                      { button_new_from_icon_name($2, $3, $4); }
        params SEMICOLON                                    { block_close($2); }
        ;

combo_box_text:
        COMBO_BOX_TEXT IDENTIFIER                    { combo_box_text_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

combo_box_text_with_entry:
        COMBO_BOX_TEXT_ENTRY IDENTIFIER   { combo_box_text_new_with_entry($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

combo_box:
        COMBO_BOX IDENTIFIER                              { combo_box_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

combo_box_with_entry:
        COMBO_BOX_ENTRY IDENTIFIER             { combo_box_new_with_entry($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

hbutton_box:
        HBUTTONBOX IDENTIFIER                           { hbutton_box_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

vbutton_box:
        VBUTTONBOX IDENTIFIER                           { vbutton_box_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

stack:
        STACK IDENTIFIER                                      { stack_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

stack_switcher:
        STACK_SWITCHER IDENTIFIER                    { stack_switcher_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

text_view:
        TEXT_VIEW IDENTIFIER                              { text_view_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

adjustment:
        ADJUSTMENT IDENTIFIER                            { adjustment_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

scrolled_window:
        SCROLLED_WINDOW IDENTIFIER                  { scrolled_window_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;      

header_bar:
        HEADER_BAR IDENTIFIER                            { header_bar_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

entry:
        ENTRY IDENTIFIER                                      { entry_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;      

hbox:
        HBOX IDENTIFIER                              { box_horizontal_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

vbox:
        VBOX IDENTIFIER                                { box_vertical_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

button:
        BUTTON_WIDGET IDENTIFIER                             { button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

window:
        WINDOW_WIDGET IDENTIFIER                             { window_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

pack:
          set_pack_position
        | set_pack_padding
        | set_pack_fill
        | set_pack_expand
        | set_pack_type
        | set_pack_center
        | set_pack_start
        | set_pack_end
        ;

set_pack_start:
        PACK IDENTIFIER START IDENTIFIER     { cell_layout_pack_start($2, $4); }
        ;

set_pack_end:
        PACK IDENTIFIER END IDENTIFIER         { cell_layout_pack_end($2, $4); }
        ;

set_pack_center:
        PACK IDENTIFIER CENTER                    { box_set_center_widget($2); }
        ;

set_pack_type:
        PACK IDENTIFIER PACK_TYPE IDENTIFIER      { box_set_pack_type($2, $4); }
        ;

set_pack_expand:
        PACK IDENTIFIER EXPAND IDENTIFIER            { box_set_expand($2, $4); }
        ;

set_pack_fill:
        PACK IDENTIFIER FILL IDENTIFIER                { box_set_fill($2, $4); }
        ;

set_pack_padding:
        PACK IDENTIFIER PADDING NUMBER              { box_set_padding($2, $4); }
        ;

set_pack_position:
        PACK IDENTIFIER POSITION NUMBER           { box_reorder_child($2, $4); }
        ;

set:
          set_editable
        | set_homogeneous
        | set_input_purpose
        | set_title
        | set_text
        | set_width_chars
        | set_use_underline
        | set_value
        | set_uri
        | set_active
        | set_ellipsize
        | set_inverted
        | set_model
        | set_digits
        | set_shadow_type
        | set_mode
        | set_resizable
        | set_alignment
        | set_spacing
        | set_reorderable                
        | set_max_width_chars
        | set_transition_duration
        | set_transition_type
        | set_label
        | set_adjustment
        | set_selectable
        | set_activatable
        | set_activate_on_single_click
        | set_accel_path
        | set_inconsistent
        | set_join_group
        | set_label_widget
        | set_icon_name
        | set_expand
        | set_show_close_button
        | set_submenu
        | set_selection_mode
        | set_tooltip_column
        | set_row_spacing
        | set_column_spacing
        | set_use_markup
        | set_default_response
        | set_response_sensitive
        | set_window_default_size
        | set_window_deletable
        | set_window_urgent
        | set_window_accept_focus
        | set_window_destroy_with_parent
        | set_window_skip_taskbar
        | set_window_focus_on_map
        | set_window_modal
        | set_window_skip_pager
        | set_window_position
        | set_window_type_hint
        | set_window_gravity
        | set_window_decorated
        | set_window_default_geometry
        | set_window_hide_titlebar_when_maximized
        | set_window_keep_above
        | set_window_keep_below
        | set_window_startup_id
        | set_window_role
        | set_window_mnemonics_visible
        | set_window_focus_visible
        | set_window_skip_taskbar_hint
        | set_window_skip_pager_hint
        | set_window_urgency_hint
        | set_window_titlebar
        | set_box_baseline
        | set_entry_max_length
        | set_entry_placeholder_text
        | set_entry_activates_default
        | set_entry_overwrite_mode
        | set_entry_has_frame
        | set_entry_visibility
        | set_button_relief
        | set_button_image
        | set_button_image_position
        | set_button_always_show_image
        | set_header_bar_subtitle
        | set_header_bar_has_subtitle
        | set_header_bar_custom_title
        | set_header_bar_decoration_layout
        | set_scrolled_window_policy
        | set_scrolled_window_placement
        | set_scrolled_window_hadjustment
        | set_scrolled_window_vadjustment
        | set_scrolled_window_min_content_width 
        | set_scrolled_window_min_content_height
        | set_scrolled_window_kinetic_scrolling
        | set_scrolled_window_capture_button_press
        | set_scrolled_window_overlay_scrolling
        | set_adjustment_clamp_page
        | set_adjustment_configure
        | set_adjustment_lower
        | set_adjustment_page_increment
        | set_adjustment_page_size
        | set_adjustment_step_increment
        | set_adjustment_upper
        | set_text_view_buffer
        | set_text_view_border_window_size
        | set_text_view_wrap_mode
        | set_text_view_cursor_visible
        | set_text_view_overwrite
        | set_text_view_pixels_above_lines
        | set_text_view_pixels_below_lines
        | set_text_view_pixels_inside_wrap
        | set_text_view_justification
        | set_text_view_left_margin
        | set_text_view_right_margin
        | set_text_view_indent
        | set_text_view_accepts_tab
        | set_text_view_input_hints
        | set_stack_hhomogeneous
        | set_stack_vhomogeneous
        | set_stack_switcher_stack
        | set_button_box_layout
        | set_combo_box_wrap_width
        | set_combo_box_row_span_column
        | set_combo_box_column_span_column
        | set_combo_box_id_column
        | set_combo_box_active_id
        | set_combo_box_button_sensitivity
        | set_combo_box_entry_text_column
        | set_combo_box_popup_fixed_width
        | set_label_pattern
        | set_label_justify
        | set_label_xalign
        | set_label_yalign
        | set_label_line_wrap
        | set_label_line_wrap_mode
        | set_label_lines
        | set_label_region
        | set_label_text_with_mnemonic
        | set_label_single_line_mode
        | set_label_angle
        | set_label_track_visited_links
        | set_spin_button_increments
        | set_spin_button_range
        | set_spin_button_update_policy
        | set_spin_button_numeric
        | set_spin_button_spin
        | set_spin_button_wrap
        | set_spin_button_snap_to_ticks
        | set_grid_row_homogeneous
        | set_grid_column_homogeneous
        | set_grid_baseline_row
        | set_grid_row_baseline_position
        | set_spinner_start
        | set_spinner_stop
        | set_font_button_font_name
        | set_font_button_show_style
        | set_font_button_show_size
        | set_font_button_use_font
        | set_font_button_use_size
        | set_file_chooser_action
        | set_file_chooser_local_only
        | set_file_chooser_select_multiple
        | set_file_chooser_show_hidden
        | set_file_chooser_do_overwrite_confirmation
        | set_file_chooser_create_folders
        | set_file_chooser_current_name
        | set_file_chooser_filename
        | set_file_chooser_current_folder
        | set_file_chooser_current_folder_uri
        | set_file_chooser_preview_widget
        | set_file_chooser_preview_widget_active
        | set_file_chooser_use_preview_label
        | set_link_button_visited
        | set_switch_state
        | set_progress_bar_fraction
        | set_progress_bar_show_text
        | set_progress_bar_pulse_step
        | set_level_bar_min_value
        | set_level_bar_max_value
        | set_level_bar_add_offset_value
        | set_scale_draw_value
        | set_scale_has_origin
        | set_scale_value_pos
        | set_scale_add_mark
        | set_range_fill_level
        | set_range_restrict_to_fill_level
        | set_range_show_fill_level
        | set_range_adjustment
        | set_range_inverted
        | set_range_value
        | set_range_increments
        | set_range_range
        | set_range_round_digits
        | set_range_lower_stepper_sensitivity
        | set_range_upper_stepper_sensitivity
        | set_range_flippable
        | set_range_slider_size_fixed
        | set_orientable_orientation
        | set_frame_label_align
        | set_tree_view_level_indentation
        | set_tree_view_show_expanders
        | set_tree_view_headers_visible
        | set_tree_view_headers_clickable
        | set_tree_view_expander_column
        | set_tree_view_enable_search
        | set_tree_view_search_column
        | set_tree_view_search_entry
        | set_tree_view_fixed_height_mode
        | set_tree_view_hover_selection
        | set_tree_view_hover_expand
        | set_tree_view_rubber_banding
        | set_tree_view_enable_tree_lines
        | set_tree_view_grid_lines
        | set_cell_renderer_toggle_radio
        | set_tree_view_column_visible
        | set_tree_view_column_sizing
        | set_tree_view_column_fixed_width
        | set_tree_view_column_min_width
        | set_tree_view_column_max_width
        | set_tree_view_column_clickable
        | set_tree_view_column_widget
        | set_tree_view_column_sort_column_id
        | set_tree_view_column_sort_indicator
        | set_tree_view_column_sort_order
        | set_list_store_column_types
        | set_list_store_column
        | set_list_store_row
        | set_cell_layout_attribute
        | set_color_chooser_rgba
        | set_color_chooser_use_alpha
        | set_notebook_tab_pos
        | set_notebook_show_tabs
        | set_notebook_show_border
        | set_notebook_scrollable
        | set_notebook_popup_enable
        | set_notebook_menu_label
        | set_notebook_menu_label_text
        | set_notebook_tab_label
        | set_notebook_tab_label_text
        | set_notebook_tab_reorderable
        | set_notebook_tab_detachable
        | set_notebook_group_name
        | set_notebook_action_widget
        | set_overlay_overlay_pass_through
        | set_revealer_reveal_child
        | set_image_from_file
        | set_image_from_icon_name
        | set_image_from_resource
        | set_image_pixel_size
        | set_menu_button_popup
        | set_menu_button_popover
        | set_menu_button_menu_model
        | set_menu_button_use_popover
        | set_menu_button_direction
        | set_menu_button_align_widget
        | set_g_menu_item_detailed_action
        | set_g_menu_item_icon
        | set_g_menu_item_section
        | set_g_menu_item_link
        | set_g_menu_item_attribute
        | set_g_menu_item_accelerator_label
        | set_list_box_placeholder
        | set_list_box_header_func
        | set_list_box_row_header
        | set_menu_item_reserve_indicator
        | set_menu_screen
        | set_menu_accel_group
        | set_menu_monitor
        | set_menu_reserve_toggle_size
        | set_check_menu_item_draw_as_radio
        | set_menu_bar_pack_direction
        | set_menu_bar_child_pack_direction
        | set_tool_button_icon_widget
        | set_tool_item_proxy_menu_item
        | set_tool_item_tooltip_text
        | set_tool_item_tooltip_markup
        | set_tool_item_use_drag_window
        | set_tool_item_visible_horizontal
        | set_tool_item_visible_vertical
        | set_tool_item_is_important
        | set_toolbar_show_arrow
        | set_toolbar_style
        | set_toolbar_icon_size
        | set_search_bar_search_mode
        | set_search_bar_connect_entry
        | set_info_bar_message_type
        | set_paned_position
        | set_paned_wide_handle
        | set_accelerator_default_mod_mask
        | set_application_app_menu
        | set_application_menubar
        | set_application_accels_for_action
        | set_calendar_display_options
        | set_calendar_detail_func
        | set_calendar_detail_width_chars
        | set_calendar_detail_height_rows
        | set_icon_view_text_column
        | set_icon_view_markup_column
        | set_icon_view_pixbuf_column
        | set_icon_view_item_orientation
        | set_icon_view_columns
        | set_icon_view_item_width
        | set_icon_view_margin
        | set_icon_view_item_padding
        | set_expander_expanded
        | set_expander_label_fill
        | set_expander_resize_toplevel
        | set_message_dialog_markup
        | set_message_dialog_secondary_text
        | set_message_dialog_secondary_markup
        ;

set_message_dialog_markup:
        SET MARKUP STRING                     { message_dialog_set_markup($3); }
        ;

set_message_dialog_secondary_text:
        SET SECONDARY_TEXT STRING     { message_dialog_set_secondary_text($3); }
        ;

set_message_dialog_secondary_markup:
        SET SECONDARY_MARKUP STRING { message_dialog_set_secondary_markup($3); }
        ;

set_expander_expanded:
        SET EXPANDED IDENTIFIER                   { expander_set_expanded($3); }
        ;

set_expander_label_fill:
        SET LABEL_FILL IDENTIFIER               { expander_set_label_fill($3); }
        ;

set_expander_resize_toplevel:
        SET RESIZE_TOPLEVEL IDENTIFIER     { expander_set_resize_toplevel($3); }
        ;
  
set_icon_view_text_column:
        SET TEXT_COLUMN NUMBER                { icon_view_set_text_column($3); }
        ;

set_icon_view_markup_column:
        SET MARKUP_COLUMN NUMBER            { icon_view_set_markup_column($3); }
        ;

set_icon_view_pixbuf_column:
        SET PIXBUF_COLUMN NUMBER            { icon_view_set_pixbuf_column($3); }
        ;

set_icon_view_item_orientation:
        SET ITEM_ORIENTATION IDENTIFIER  { icon_view_set_item_orientation($3); }
        ;

set_icon_view_columns:
        SET COLUMNS NUMBER                        { icon_view_set_columns($3); }
        ;

set_icon_view_item_width:
        SET ITEM_WIDTH NUMBER                  { icon_view_set_item_width($3); }
        ;

set_icon_view_margin:
        SET MARGIN NUMBER                          { icon_view_set_margin($3); }
        ;

set_icon_view_item_padding:
        SET ITEM_PADDING NUMBER              { icon_view_set_item_padding($3); }
        ;

set_calendar_display_options:
        SET DISPLAY_OPTIONS IDENTIFIER     { calendar_set_display_options($3); }
        ;

set_calendar_detail_func:
        SET DETAIL_FUNC IDENTIFIER IDENTIFIER IDENTIFIER  
                                       { calendar_set_detail_func($3, $4, $5); }
        ;

set_calendar_detail_width_chars:
        SET DETAIL_WIDTH_CHARS NUMBER   { calendar_set_detail_width_chars($3); }
        ;

set_calendar_detail_height_rows:
        SET DETAIL_HEIGHT_ROWS NUMBER   { calendar_set_detail_height_rows($3); }
        ;

set_application_app_menu:
        SET APP_MENU IDENTIFIER                { application_set_app_menu($3); }
        ;

set_application_menubar:
        SET MENUBAR IDENTIFIER                  { application_set_menubar($3); }
        ;

set_application_accels_for_action:
        SET ACCELS_FOR_ACTION STRING STRING
                                  { application_set_accels_for_action($3, $4); }
        ;

set_accelerator_default_mod_mask:
        SET ACCELERATOR_DEFAULT_MOD_MASK IDENTIFIER
                                      { accelerator_set_default_mod_mask($3); }
        ;

set_paned_position:
        SET POSITION NUMBER                          { paned_set_position($3); }
        ;

set_paned_wide_handle:
        SET WIDE_HANDLE IDENTIFIER                { paned_set_wide_handle($3); }
        ;

set_info_bar_message_type:
        SET MESSAGE_TYPE IDENTIFIER           { info_bar_set_message_type($3); }
        ;

set_search_bar_connect_entry:
        SET CONNECT_ENTRY IDENTIFIER           { search_bar_connect_entry($3); }
        ;

set_search_bar_search_mode:
        SET SEARCH_MODE IDENTIFIER           { search_bar_set_search_mode($3); }
        ;

set_toolbar_show_arrow:
        SET SHOW_ARROW IDENTIFIER                { toolbar_set_show_arrow($3); }
        ;

set_toolbar_style:
        SET STYLE IDENTIFIER                          { toolbar_set_style($3); }
        ;

set_toolbar_icon_size:
        SET ICON_SIZE IDENTIFIER                  { toolbar_set_icon_size($3); }
        ;

set_tool_item_proxy_menu_item:
        SET PROXY_MENU_ITEM IDENTIFIER IDENTIFIER
                                      { tool_item_set_proxy_menu_item($3, $4); }
        ;

set_tool_item_tooltip_text:
        SET TOOLTIP_TEXT STRING              { tool_item_set_tooltip_text($3); }
        ;

set_tool_item_tooltip_markup:
        SET TOOLTIP_MARKUP STRING          { tool_item_set_tooltip_markup($3); }
        ;

set_tool_item_use_drag_window:
        SET USE_DRAG_WINDOW IDENTIFIER    { tool_item_set_use_drag_window($3); }
        ;

set_tool_item_visible_horizontal:
        SET VISIBLE_HORIZONTAL IDENTIFIER 
                                       { tool_item_set_visible_horizontal($3); }
        ;

set_tool_item_visible_vertical:
        SET VISIBLE_VERTICAL IDENTIFIER  { tool_item_set_visible_vertical($3); }
        ;

set_tool_item_is_important:
        SET IS_IMPORTANT IDENTIFIER          { tool_item_set_is_important($3); }
        ;

set_tool_button_icon_widget:
        SET ICON_WIDGET IDENTIFIER          { tool_button_set_icon_widget($3); }
        ;

set_menu_bar_pack_direction:
        SET BAR_PACK_DIRECTION IDENTIFIER   { menu_bar_set_pack_direction($3); }
        ;

set_menu_bar_child_pack_direction:
        SET CHILD_PACK_DIRECTION IDENTIFIER 
                                      { menu_bar_set_child_pack_direction($3); }
        ;

set_check_menu_item_draw_as_radio:
        SET DRAW_AS_RADIO IDENTIFIER  { check_menu_item_set_draw_as_radio($3); }
        ;

set_menu_screen:
        SET SCREEN IDENTIFIER                           { menu_set_screen($3); }
        ;

set_menu_accel_group:
        SET ACCEL_GROUP IDENTIFIER                 { menu_set_accel_group($3); }
        ;

set_menu_monitor:
        SET MONITOR IDENTIFIER                         { menu_set_monitor($3); }
        ;

set_menu_reserve_toggle_size:
        SET RESERVE_TOGGLE_SIZE IDENTIFIER { menu_set_reserve_toggle_size($3); }
        ;

set_menu_item_reserve_indicator:
        SET RESERVE_INDICATOR IDENTIFIER 
                                        { menu_item_set_reserve_indicator($3); }
        ;


set_list_box_placeholder:
        SET PLACEHOLDER IDENTIFIER             { list_box_set_placeholder($3); }
        ;

set_list_box_header_func:
        SET HEADER_FUNC IDENTIFIER IDENTIFIER IDENTIFIER
                                       { list_box_set_header_func($3, $4, $5); }
        ;

set_list_box_row_header:
        SET HEADER IDENTIFIER                   { list_box_row_set_header($3); }
        ;

set_g_menu_item_detailed_action:
        SET DETAILED_ACTION STRING      { g_menu_item_set_detailed_action($3); }
        ;

set_g_menu_item_icon:
        SET ICON IDENTIFIER                        { g_menu_item_set_icon($3); }
        ;

set_g_menu_item_section:
        SET SECTION IDENTIFIER                  { g_menu_item_set_section($3); }
        ;

set_g_menu_item_link:
        SET LINK STRING IDENTIFIER             { g_menu_item_set_link($3, $4); }
        ;

set_g_menu_item_attribute:
       SET ATTRIBUTE STRING STRING STRING  
                                      { g_menu_item_set_attribute($3, $4, $5); }
        ;

set_g_menu_item_accelerator_label:
        SET ACCELERATOR_LABEL IDENTIFIER IDENTIFIER
                                  { g_menu_item_set_accelerator_label($3, $4); }
        ;

set_menu_button_popup:
        SET POPUP IDENTIFIER                      { menu_button_set_popup($3); }
        ;

set_menu_button_popover:
        SET POPOVER IDENTIFIER                  { menu_button_set_popover($3); }
        ;

set_menu_button_menu_model:
        SET MENU_MODEL IDENTIFIER            { menu_button_set_menu_model($3); }
        ;

set_menu_button_use_popover:
        SET USE_POPOVER IDENTIFIER          { menu_button_set_use_popover($3); }
        ;

set_menu_button_direction:
        SET DIRECTION IDENTIFIER              { menu_button_set_direction($3); }
        ;

set_menu_button_align_widget:
        SET ALIGN_WIDGET IDENTIFIER        { menu_button_set_align_widget($3); }
        ;

set_image_from_file:
        SET IMAGE_FROM_FILE STRING                  { image_set_from_file($3); }
        ;

set_image_from_icon_name:
        SET IMAGE_FROM_ICON_NAME STRING IDENTIFIER 
                                           { image_set_from_icon_name($3, $4); }
        ;

set_image_from_resource:
        SET IMAGE_FROM_RESOURCE STRING          { image_set_from_resource($3); }
        ;

set_image_pixel_size:
        SET IMAGE_PIXEL_SIZE NUMBER                { image_set_pixel_size($3); }
        ;

set_revealer_reveal_child:
        SET REVEAL_CHILD IDENTIFIER           { revealer_set_reveal_child($3); }
        ;

set_overlay_overlay_pass_through:
        SET OVERLAY_PASS_THROUGH IDENTIFIER IDENTIFIER 
                                   { overlay_set_overlay_pass_through($3, $4); }
        ;

set_notebook_tab_pos:
        SET TAB_POS IDENTIFIER                     { notebook_set_tab_pos($3); }
        ;

set_notebook_show_tabs:
        SET SHOW_TABS IDENTIFIER                 { notebook_set_show_tabs($3); }
        ;

set_notebook_show_border:
        SET SHOW_BORDER IDENTIFIER             { notebook_set_show_border($3); }
        ;

set_notebook_scrollable:
        SET SCROLLABLE IDENTIFIER               { notebook_set_scrollable($3); }
        ;

set_notebook_popup_enable:
        SET POPUP_ENABLE IDENTIFIER           { notebook_set_popup_enable($3); }
        ;

set_notebook_menu_label:
        SET MENU_LABEL IDENTIFIER IDENTIFIER 
                                            { notebook_set_menu_label($3, $4); }
        ;

set_notebook_menu_label_text:
        SET MENU_LABEL_TEXT IDENTIFIER STRING
                                       { notebook_set_menu_label_text($3, $4); }
        ;

set_notebook_tab_label:
        SET TAB_LABEL IDENTIFIER IDENTIFIER  { notebook_set_tab_label($3, $4); }
        ;

set_notebook_tab_label_text:
        SET TAB_LABEL_TEXT IDENTIFIER STRING
                                        { notebook_set_tab_label_text($3, $4); }
        ;

set_notebook_tab_reorderable:
        SET TAB_REORDERABLE IDENTIFIER IDENTIFIER
                                       { notebook_set_tab_reorderable($3, $4); }
        ;

set_notebook_tab_detachable:
        SET TAB_DETACHABLE IDENTIFIER IDENTIFIER
                                        { notebook_set_tab_detachable($3, $4); }
        ;

set_notebook_group_name:
        SET GROUP_NAME STRING                   { notebook_set_group_name($3); }
        ;

set_notebook_action_widget:
        SET ACTION_WIDGET IDENTIFIER IDENTIFIER
                                         { notebook_set_action_widget($3, $4); }
        ;

set_color_chooser_rgba:
        SET RGBA STRING                          { color_chooser_set_rgba($3); }
        ;

set_color_chooser_use_alpha:
        SET USE_ALPHA IDENTIFIER            { color_chooser_set_use_alpha($3); }
        ;

set_cell_layout_attribute:
        SET ATTRIBUTE IDENTIFIER STRING NUMBER 
                                      { cell_layout_set_attribute($3, $4, $5); }
        ;

set_list_store_row:
        SET ROW                                         { list_store_append(); }
        ;

set_list_store_column:
          SET ID NUMBER IDENTIFIER            { list_store_set_column($3, $4); }
        | SET ID NUMBER STRING                { list_store_set_column($3, $4); }
        | SET ID NUMBER NUMBER                { list_store_set_column($3, $4); }
        | SET ID NUMBER FLOAT                 { list_store_set_column($3, $4); }
        ;

set_list_store_column_types:
        SET COLUMN_TYPES NUMBER IDENTIFIER 
                                        { list_store_set_column_types($3, $4); }
        ;

set_tree_view_column_visible:
        SET VISIBLE IDENTIFIER             { tree_view_column_set_visible($3); }
        ;

set_tree_view_column_sizing:
        SET SIZING IDENTIFIER               { tree_view_column_set_sizing($3); }
        ;

set_tree_view_column_fixed_width:
        SET FIXED_WIDTH NUMBER         { tree_view_column_set_fixed_width($3); }
        ;

set_tree_view_column_min_width:
        SET MIN_WIDTH NUMBER             { tree_view_column_set_min_width($3); }
        ;

set_tree_view_column_max_width:
        SET MAX_WIDTH NUMBER             { tree_view_column_set_max_width($3); }
        ;

set_tree_view_column_clickable:
        SET CLICKABLE IDENTIFIER         { tree_view_column_set_clickable($3); }
        ;

set_tree_view_column_widget:
        SET WIDGET IDENTIFIER               { tree_view_column_set_widget($3); }
        ;

set_tree_view_column_sort_column_id:
        SET SORT_COLUMN_ID NUMBER   { tree_view_column_set_sort_column_id($3); }
        ;

set_tree_view_column_sort_indicator:
        SET SORT_INDICATOR IDENTIFIER 
                                    { tree_view_column_set_sort_indicator($3); }
        ;

set_tree_view_column_sort_order:
        SET SORT_ORDER IDENTIFIER       { tree_view_column_set_sort_order($3); }
        ;

set_cell_renderer_toggle_radio:
        SET RADIO IDENTIFIER             { cell_renderer_toggle_set_radio($3); }
        ;

set_text_view_buffer:
        SET BUFFER IDENTIFIER                      { text_view_set_buffer($3); }
        ;

set_tree_view_level_indentation:
        SET LEVEL_INDENTATION NUMBER    { tree_view_set_level_indentation($3); }
        ;

set_tree_view_show_expanders:
        SET SHOW_EXPANDERS IDENTIFIER      { tree_view_set_show_expanders($3); }
        ;

set_tree_view_headers_visible:
        SET HEADERS_VISIBLE IDENTIFIER    { tree_view_set_headers_visible($3); }
        ;

set_tree_view_headers_clickable:
        SET HEADERS_CLICKABLE IDENTIFIER
                                        { tree_view_set_headers_clickable($3); }
        ;

set_tree_view_expander_column:
        SET EXPANDER_COLUMN IDENTIFIER    { tree_view_set_expander_column($3); }
        ;

set_tree_view_enable_search:
        SET ENABLE_SEARCH IDENTIFIER        { tree_view_set_enable_search($3); }
        ;

set_tree_view_search_column:
        SET SEARCH_COLUMN NUMBER            { tree_view_set_search_column($3); }
        ;

set_tree_view_search_entry:
        SET SEARCH_ENTRY IDENTIFIER          { tree_view_set_search_entry($3); }
        ;

set_tree_view_fixed_height_mode:
        SET FIXED_HEIGHT_MODE IDENTIFIER
                                        { tree_view_set_fixed_height_mode($3); }
        ;

set_tree_view_hover_selection:
        SET HOVER_SELECTION IDENTIFIER    { tree_view_set_hover_selection($3); }
        ;

set_tree_view_hover_expand:
        SET HOVER_EXPAND IDENTIFIER          { tree_view_set_hover_expand($3); }
        ;

set_tree_view_rubber_banding:
        SET RUBBER_BANDING IDENTIFIER      { tree_view_set_rubber_banding($3); }
        ;

set_tree_view_enable_tree_lines:
        SET ENABLE_TREE_LINES IDENTIFIER
                                        { tree_view_set_enable_tree_lines($3); }
        ;

set_tree_view_grid_lines:
        SET GRID_LINES IDENTIFIER              { tree_view_set_grid_lines($3); }
        ;

set_frame_label_align:
        SET LABEL_ALIGN FLOAT FLOAT           { frame_set_label_align($3, $4); }
        ;

set_orientable_orientation:
        SET ORIENTATION IDENTIFIER           { orientable_set_orientation($3); }
        ;

set_range_fill_level:
        SET RANGE_FILL_LEVEL FLOAT                 { range_set_fill_level($3); }
        ;

set_range_restrict_to_fill_level:
        SET RANGE_RESTRICT_TO_FILL_LEVEL IDENTIFIER 
                                       { range_set_restrict_to_fill_level($3); }
        ;

set_range_show_fill_level:
        SET RANGE_SHOW_FILL_LEVEL IDENTIFIER  { range_set_show_fill_level($3); }
        ;

set_range_adjustment:
        SET RANGE_ADJUSTMENT IDENTIFIER            { range_set_adjustment($3); }
        ;

set_range_inverted:
        SET RANGE_INVERTED IDENTIFIER                { range_set_inverted($3); }
        ;

set_range_value:
        SET RANGE_VALUE FLOAT                           { range_set_value($3); }
        ;

set_range_increments:
        SET RANGE_INCREMENTS FLOAT FLOAT       { range_set_increments($3, $4); }
        ;

set_range_range:
        SET RANGE_RANGE FLOAT FLOAT                 { range_set_range($3, $4); }
        ;

set_range_round_digits:
        SET RANGE_ROUND_DIGITS NUMBER            { range_set_round_digits($3); }
        ;

set_range_lower_stepper_sensitivity:
        SET RANGE_LOWER_STEPPER_SENSITIVITY IDENTIFIER
                                    { range_set_lower_stepper_sensitivity($3); }
        ;

set_range_upper_stepper_sensitivity:
        SET RANGE_UPPER_STEPPER_SENSITIVITY IDENTIFIER
                                    { range_set_upper_stepper_sensitivity($3); }
        ;

set_range_flippable:
        SET RANGE_FLIPPABLE IDENTIFIER              { range_set_flippable($3); }
        ;

set_range_slider_size_fixed:
        SET RANGE_SLIDER_SIZE_FIXED IDENTIFIER 
                                            { range_set_slider_size_fixed($3); }
        ;

set_scale_draw_value:
        SET DRAW_VALUE IDENTIFIER                  { scale_set_draw_value($3); }
        ;

set_scale_has_origin:
        SET HAS_ORIGIN IDENTIFIER                  { scale_set_has_origin($3); }
        ;

set_scale_value_pos:
        SET VALUE_POS IDENTIFIER                    { scale_set_value_pos($3); }
        ;

set_scale_add_mark:
        SET ADD_MARK FLOAT IDENTIFIER STRING     { scale_add_mark($3, $4, $5); }
        ;

set_level_bar_min_value:
        SET MIN_VALUE FLOAT                     { level_bar_set_min_value($3); }
        ;

set_level_bar_max_value:
        SET MAX_VALUE FLOAT                     { level_bar_set_max_value($3); }
        ;

set_level_bar_add_offset_value:
        SET ADD_OFFSET_VALUE STRING FLOAT 
                                         { level_bar_add_offset_value($3, $4); }
        ;

set_progress_bar_fraction:
        SET FRACTION FLOAT                    { progress_bar_set_fraction($3); }
        ;

set_progress_bar_show_text:
        SET SHOW_TEXT IDENTIFIER             { progress_bar_set_show_text($3); }
        ;

set_progress_bar_pulse_step:
        SET PULSE_STEP FLOAT                { progress_bar_set_pulse_step($3); }
        ;

set_switch_state:
        SET STATE IDENTIFIER                           { switch_set_state($3); }
        ;

set_link_button_visited:
        SET VISITED IDENTIFIER                  { link_button_set_visited($3); }
        ;

set_file_chooser_action:
        SET ACTION IDENTIFIER                   { file_chooser_set_action($3); }
        ;

set_file_chooser_local_only:
        SET LOCAL_ONLY IDENTIFIER           { file_chooser_set_local_only($3); }
        ;

set_file_chooser_select_multiple:
        SET SELECT_MULTIPLE IDENTIFIER { file_chooser_set_select_multiple($3); }
        ;

set_file_chooser_show_hidden:
        SET SHOW_HIDDEN IDENTIFIER         { file_chooser_set_show_hidden($3); }
        ;

set_file_chooser_do_overwrite_confirmation:
        SET DO_OVERWRITE_CONFIRMATION IDENTIFIER 
                             { file_chooser_set_do_overwrite_confirmation($3); }
        ;

set_file_chooser_create_folders:
        SET CREATE_FOLDERS IDENTIFIER   { file_chooser_set_create_folders($3); }
        ;

set_file_chooser_current_name:
        SET CURRENT_NAME STRING           { file_chooser_set_current_name($3); }
        ;

set_file_chooser_filename:
        SET FILENAME STRING                   { file_chooser_set_filename($3); }
        ;

set_file_chooser_current_folder:
        SET CURRENT_FOLDER STRING       { file_chooser_set_current_folder($3); }
        ;

set_file_chooser_current_folder_uri:
        SET CURRENT_FOLDER_URI STRING
                                    { file_chooser_set_current_folder_uri($3); }
        ;

set_file_chooser_preview_widget:
        SET PREVIEW_WIDGET IDENTIFIER   { file_chooser_set_preview_widget($3); }
        ;

set_file_chooser_preview_widget_active:
        SET PREVIEW_WIDGET_ACTIVE IDENTIFIER
                                 { file_chooser_set_preview_widget_active($3); }
        ;

set_file_chooser_use_preview_label:
        SET USE_PREVIEW_LABEL IDENTIFIER 
                                     { file_chooser_set_use_preview_label($3); }
        ;

set_font_button_font_name:
        SET FONT_NAME STRING                  { font_button_set_font_name($3); }
        ;

set_font_button_show_style:
        SET SHOW_STYLE IDENTIFIER            { font_button_set_show_style($3); }
        ;
       
set_font_button_show_size:
        SET SHOW_SIZE IDENTIFIER              { font_button_set_show_size($3); }
        ;

set_font_button_use_font:
        SET USE_FONT IDENTIFIER                { font_button_set_use_font($3); }
        ;

set_font_button_use_size:
        SET USE_SIZE IDENTIFIER                { font_button_set_use_size($3); }
        ;

set_spinner_start:
        SET START                                           { spinner_start(); }
        ;

set_spinner_stop:
        SET STOP                                             { spinner_stop(); }
        ;

set_grid_row_homogeneous:
        SET ROW_HOMOGENEOUS IDENTIFIER         { grid_set_row_homogeneous($3); }
        ;

set_grid_column_homogeneous:
        SET COLUMN_HOMOGENEOUS IDENTIFIER   { grid_set_column_homogeneous($3); }
        ;

set_grid_baseline_row:
        SET BASELINE_ROW NUMBER                   { grid_set_baseline_row($3); }
        ;

set_grid_row_baseline_position:
        SET ROW_BASELINE_POSITION NUMBER IDENTIFIER
                                    { grid_set_row_baseline_position($3, $4); }
        ;

set_spin_button_increments:
        SET INCREMENTS FLOAT FLOAT       { spin_button_set_increments($3, $4); }
        ;

set_spin_button_range:
        SET RANGE FLOAT FLOAT                 { spin_button_set_range($3, $4); }
        ;

set_spin_button_update_policy:
        SET UPDATE_POLICY IDENTIFIER      { spin_button_set_update_policy($3); }
        ;

set_spin_button_numeric:
        SET NUMERIC IDENTIFIER                  { spin_button_set_numeric($3); }
        ;

set_spin_button_spin:
        SET SPIN IDENTIFIER FLOAT                  { spin_button_spin($3, $4); }
        ;

set_spin_button_wrap:
        SET WRAP IDENTIFIER                        { spin_button_set_wrap($3); }
        ;

set_spin_button_snap_to_ticks:
        SET SNAP_TO_TICKS IDENTIFIER      { spin_button_set_snap_to_ticks($3); }
        ;

set_label_pattern:
        SET PATTERN STRING                            { label_set_pattern($3); }
        ;

set_label_justify:
        SET JUSTIFY IDENTIFIER                        { label_set_justify($3); }
        ;

set_label_xalign:
        SET XALIGN FLOAT                               { label_set_xalign($3); }
        ;

set_label_yalign:
        SET YALIGN FLOAT                               { label_set_yalign($3); }
        ;

set_label_line_wrap:
        SET LINE_WRAP IDENTIFIER                    { label_set_line_wrap($3); }
        ;

set_label_line_wrap_mode:
        SET LINE_WRAP_MODE IDENTIFIER          { label_set_line_wrap_mode($3); }
        ;

set_label_lines:
        SET LINES NUMBER                                { label_set_lines($3); }
        ;

set_label_region:
        SET SELECT_REGION NUMBER NUMBER         { label_select_region($3, $4); }
        ;

set_label_text_with_mnemonic:
        SET TEXT_WITH_MNEMONIC STRING      { label_set_text_with_mnemonic($3); }
        ;

set_label_single_line_mode:
        SET SINGLE_LINE_MODE IDENTIFIER      { label_set_single_line_mode($3); }
        ;

set_label_angle:
        SET ANGLE FLOAT                                 { label_set_angle($3); }
        ;

set_label_track_visited_links:
        SET TRACK_VISITED_LINKS IDENTIFIER 
                                          { label_set_track_visited_links($3); }
        ;

set_combo_box_wrap_width:
        SET WRAP_WIDTH NUMBER                  { combo_box_set_wrap_width($3); }
        ;

set_combo_box_row_span_column:
        SET ROW_SPAN_COLUMN NUMBER        { combo_box_set_row_span_column($3); }
        ;

set_combo_box_column_span_column:
        SET COLUMN_SPAN_COLUMN NUMBER
                                       { combo_box_set_column_span_column($3); }
        ;

set_combo_box_id_column:
        SET ID_COLUMN NUMBER                    { combo_box_set_id_column($3); }
        ;

set_combo_box_active_id:
        SET ACTIVE_ID STRING                    { combo_box_set_active_id($3); }
        ;

set_combo_box_button_sensitivity:
        SET BUTTON_SENSITIVITY IDENTIFIER 
                                       { combo_box_set_button_sensitivity($3); }
        ;

set_combo_box_entry_text_column:
        SET ENTRY_TEXT_COLUMN NUMBER
                                        { combo_box_set_entry_text_column($3); }
        ;

set_combo_box_popup_fixed_width:
        SET POPUP_FIXED_WIDTH IDENTIFIER 
                                        { combo_box_set_popup_fixed_width($3); }
        ;

set_button_box_layout:
        SET BOX_LAYOUT IDENTIFIER                 { button_box_set_layout($3); }
        ;

set_stack_switcher_stack:
        SET STACK_SWITCHER_STACK IDENTIFIER    { stack_switcher_set_stack($3); }
        ;

set_stack_hhomogeneous:
        SET HHOMOGENEOUS IDENTIFIER              { stack_set_hhomogeneous($3); }
        ;

set_stack_vhomogeneous:
        SET VHOMOGENEOUS IDENTIFIER              { stack_set_vhomogeneous($3); }
        ;

set_text_view_border_window_size:
        SET BORDER_WINDOW_SIZE IDENTIFIER NUMBER 
                                   { text_view_set_border_window_size($3, $4); }
        ;

set_text_view_wrap_mode:
        SET WRAP_MODE IDENTIFIER                { text_view_set_wrap_mode($3); }
        ;

set_text_view_cursor_visible:
        SET CURSOR_VISIBLE IDENTIFIER      { text_view_set_cursor_visible($3); }
        ;

set_text_view_overwrite:
        SET OVERWRITE IDENTIFIER                { text_view_set_overwrite($3); }
        ;

set_text_view_pixels_above_lines:
        SET PIXELS_ABOVE_LINES NUMBER  { text_view_set_pixels_above_lines($3); }
        ;

set_text_view_pixels_below_lines:
        SET PIXELS_BELOW_LINES NUMBER  { text_view_set_pixels_below_lines($3); }
        ;

set_text_view_pixels_inside_wrap:
        SET PIXELS_INSIDE_WRAP NUMBER  { text_view_set_pixels_inside_wrap($3); }
        ;

set_text_view_justification:
        SET JUSTIFICATION IDENTIFIER        { text_view_set_justification($3); }
        ;

set_text_view_left_margin:
        SET LEFT_MARGIN NUMBER                { text_view_set_left_margin($3); }
        ;

set_text_view_right_margin:
        SET RIGHT_MARGIN NUMBER              { text_view_set_right_margin($3); }
        ;

set_text_view_indent:
        SET INDENT NUMBER                          { text_view_set_indent($3); }
        ;

set_text_view_accepts_tab:
        SET ACCEPTS_TAB IDENTIFIER            { text_view_set_accepts_tab($3); }
        ;

set_text_view_input_hints:
        SET INPUT_HINTS IDENTIFIER            { text_view_set_input_hints($3); }
        ;

set_adjustment_clamp_page:
        SET CLAMP_PAGE FLOAT FLOAT            { adjustment_clamp_page($3, $4); }
        ;

set_adjustment_configure:
        SET CONFIGURE FLOAT FLOAT FLOAT FLOAT FLOAT FLOAT
                               { adjustment_configure($3, $4, $5, $6, $7, $8); }
        ;

set_adjustment_lower:
        SET LOWER FLOAT                            { adjustment_set_lower($3); }
        ;

set_adjustment_page_increment:
        SET PAGE_INCREMENT FLOAT          { adjustment_set_page_increment($3); }
        ;

set_adjustment_page_size:
        SET PAGE_SIZE FLOAT                    { adjustment_set_page_size($3); }
        ;

set_adjustment_step_increment:
        SET STEP_INCREMENT FLOAT          { adjustment_set_step_increment($3); }
        ;

set_adjustment_upper:
        SET UPPER FLOAT                            { adjustment_set_upper($3); }
        ;

set_scrolled_window_policy:
        SET POLICY IDENTIFIER IDENTIFIER { scrolled_window_set_policy($3, $4); }
        ;

set_scrolled_window_placement:
        SET PLACEMENT IDENTIFIER          { scrolled_window_set_placement($3); }
        ;

set_scrolled_window_hadjustment:
        SET HADJUSTMENT IDENTIFIER      { scrolled_window_set_hadjustment($3); }
        ;

set_scrolled_window_vadjustment:
        SET VADJUSTMENT IDENTIFIER      { scrolled_window_set_vadjustment($3); }
        ;

set_scrolled_window_min_content_width:
        SET MIN_CONTENT_WIDTH NUMBER 
                                  { scrolled_window_set_min_content_width($3); }
        ;

set_scrolled_window_min_content_height:
        SET MIN_CONTENT_HEIGHT NUMBER
                                 { scrolled_window_set_min_content_height($3); }
        ;

set_scrolled_window_kinetic_scrolling:
        SET KINETIC_SCROLLING IDENTIFIER
                                  { scrolled_window_set_kinetic_scrolling($3); }
        ;

set_scrolled_window_capture_button_press:
        SET CAPTURE_BUTTON_PRESS IDENTIFIER
                               { scrolled_window_set_capture_button_press($3); }
        ;

set_scrolled_window_overlay_scrolling:
        SET OVERLAY_SCROLLING IDENTIFIER
                                  { scrolled_window_set_overlay_scrolling($3); }
        ;
 
set_header_bar_subtitle:
        SET SUBTITLE STRING                     { header_bar_set_subtitle($3); }
        ;

set_header_bar_has_subtitle:
        SET HAS_SUBTITLE IDENTIFIER         { header_bar_set_has_subtitle($3); }
        ;

set_header_bar_custom_title:
        SET CUSTOM_TITLE IDENTIFIER         { header_bar_set_custom_title($3); }
        ;

set_header_bar_decoration_layout:
        SET DECORATION_LAYOUT STRING   { header_bar_set_decoration_layout($3); }
        ;

set_button_relief:
        SET RELIEF IDENTIFIER                         { button_set_relief($3); }
        ;

set_button_image:
        SET IMAGE IDENTIFIER                           { button_set_image($3); }
        ;

set_button_image_position:
        SET IMAGE_POSITION IDENTIFIER         { button_set_image_position($3); }
        ;

set_button_always_show_image:
        SET ALWAYS_SHOW_IMAGE IDENTIFIER   { button_set_always_show_image($3); }
        ;

set_entry_placeholder_text:
        SET PLACEHOLDER_TEXT STRING          { entry_set_placeholder_text($3); }
        ;

set_entry_activates_default:
        SET ACTIVATES_DEFAULT IDENTIFIER    { entry_set_activates_default($3); }
        ;

set_entry_overwrite_mode:
        SET OVERWRITE_MODE IDENTIFIER          { entry_set_overwrite_mode($3); }
        ;

set_entry_has_frame:
        SET HAS_FRAME IDENTIFIER                    { entry_set_has_frame($3); }
        ;

set_entry_visibility:
        SET VISIBILITY IDENTIFIER                  { entry_set_visibility($3); }
        ;

set_entry_max_length:
        SET MAX_LENGTH NUMBER                      { entry_set_max_length($3); }
        ;

set_box_baseline:
        SET BASELINE IDENTIFIER               { box_set_baseline_position($3); }
        ;

set_window_titlebar:
        SET TITLEBAR IDENTIFIER                     { window_set_titlebar($3); }
        ;

set_window_decorated:
        SET DECORATED IDENTIFIER                   { window_set_decorated($3); }
        ;

set_window_default_geometry:
        SET DEFAULT_GEOMETRY NUMBER NUMBER
                                        { window_set_default_geometry($3, $4); }
        ;

set_window_hide_titlebar_when_maximized:
        SET HIDE_TITLEBAR_WHEN_MAXIMIZED IDENTIFIER
                                { window_set_hide_titlebar_when_maximized($3); }
        ;

set_window_keep_above:
        SET KEEP_ABOVE IDENTIFIER                 { window_set_keep_above($3); }
        ;

set_window_keep_below:
        SET KEEP_BELOW IDENTIFIER                 { window_set_keep_below($3); }
        ;

set_window_startup_id:
        SET STARTUP_ID STRING                     { window_set_startup_id($3); }
        ;

set_window_role:
        SET ROLE STRING                                 { window_set_role($3); }
        ;

set_window_mnemonics_visible:
        SET MNEMONICS_VISIBLE IDENTIFIER   { window_set_mnemonics_visible($3); }
        ;

set_window_focus_visible:
        SET FOCUS_VISIBLE IDENTIFIER           { window_set_focus_visible($3); }
        ;

set_window_skip_taskbar_hint:
        SET SKIP_TASKBAR_HINT IDENTIFIER   { window_set_skip_taskbar_hint($3); }
        ;

set_window_skip_pager_hint:
        SET SKIP_PAGER_HINT IDENTIFIER       { window_set_skip_pager_hint($3); }
        ;

set_window_urgency_hint:
        SET URGENCY_HINT IDENTIFIER             { window_set_urgency_hint($3); }
        ;

set_window_gravity:
        SET GRAVITY IDENTIFIER                       { window_set_gravity($3); }
        ;


set_window_type_hint:
        SET TYPE_HINT IDENTIFIER                   { window_set_type_hint($3); }
        ;

set_window_position:
        SET POSITION IDENTIFIER                     { window_set_position($3); }
        ;

set_window_skip_pager:
        SET SKIP_PAGER IDENTIFIER            { window_set_skip_pager_hint($3); }
        ;

set_window_modal:
        SET MODAL IDENTIFIER                           { window_set_modal($3); }
        ;

set_window_focus_on_map:
        SET FOCUS_ON_MAP IDENTIFIER             { window_set_focus_on_map($3); }
        ; 

set_window_skip_taskbar:
        SET SKIP_TASKBAR IDENTIFIER        { window_set_skip_taskbar_hint($3); }
        ;

set_window_destroy_with_parent:
        SET DESTROY_WITH_PARENT IDENTIFIER
                                         { window_set_destroy_with_parent($3); }
        ;

set_window_accept_focus:
        SET ACCEPT_FOCUS IDENTIFIER             { window_set_accept_focus($3); }
        ;

set_window_urgent:
        SET URGENT IDENTIFIER                   { window_set_urgency_hint($3); }
        ;

set_window_deletable:
        SET DELETABLE IDENTIFIER                   { window_set_deletable($3); }
        ;

set_window_default_size:
        SET DEFAULT_SIZE NUMBER NUMBER      { window_set_default_size($3, $4); }
        ;

set_response_sensitive:
        SET RESPONSE_SENSITIVE NUMBER IDENTIFIER 
                                             { set_response_sensitive($3, $4); }
        ;

set_default_response:
        SET DEFAULT_RESPONSE NUMBER                { set_default_response($3); }
        ;

set_use_markup:
        SET USE_MARKUP IDENTIFIER                        { set_use_markup($3); }
        ;

set_column_spacing:
        SET COLUMN_SPACING NUMBER                    { set_column_spacing($3); }
        ;
        
set_row_spacing:
        SET ROW_SPACING NUMBER                          { set_row_spacing($3); }
        ;

set_tooltip_column:
        SET TOOLTIP_COLUMN NUMBER                    { set_tooltip_column($3); }
        ;

set_selection_mode:
        SET SELECTION_MODE IDENTIFIER                { set_selection_mode($3); }
        ;

set_submenu:
        SET SUBMENU IDENTIFIER                              { set_submenu($3); }
        ;

set_label_widget:
        SET LABEL_WIDGET IDENTIFIER                    { set_label_widget($3); }
        ;

set_show_close_button:
        SET SHOW_CLOSE_BUTTON IDENTIFIER          { set_show_close_button($3); }
        ;

set_expand:
        SET EXPAND IDENTIFIER                                { set_expand($3); }
        ;

set_icon_name:
        SET ICON_NAME STRING                              { set_icon_name($3); }
        ;

set_join_group:
        SET JOIN_GROUP IDENTIFIER                        { set_join_group($3); }
        ;

set_inconsistent:
        SET INCONSISTENT IDENTIFIER                    { set_inconsistent($3); }
        ;

set_selectable:
        SET SELECTABLE IDENTIFIER                        { set_selectable($3); }
        ;

set_activatable:
        SET ACTIVATABLE IDENTIFIER                      { set_activatable($3); }
        ;

set_accel_path:
        SET ACCEL_PATH IDENTIFIER                        { set_accel_path($3); }
        ;

set_activate_on_single_click:
        SET ACTIVATE_ON_SINGLE_CLICK IDENTIFIER 
                                           { set_activate_on_single_click($3); }
        ;

set_adjustment:
        SET SET_ADJUSTMENT IDENTIFIER                    { set_adjustment($3); }
        ;

set_label:
        SET LABEL_TEXT STRING                                 { set_label($3); }
        ;

set_transition_duration:
        SET TRANSITION_DURATION NUMBER          { set_transition_duration($3); }
        ;
 
set_transition_type:
        SET TRANSITION_TYPE IDENTIFIER              { set_transition_type($3); }
        ;
 
set_max_width_chars:
        SET MAX_WIDTH_CHARS NUMBER                  { set_max_width_chars($3); }
        ;
  
set_reorderable:
        SET REORDERABLE IDENTIFIER                      { set_reorderable($3); }
        ;

set_spacing:
        SET SPACING NUMBER                                  { set_spacing($3); }
        ;

set_alignment:
        SET ALIGNMENT IDENTIFIER                          { set_alignment($3); }
        ;

set_resizable:
        SET RESIZABLE IDENTIFIER                          { set_resizable($3); }
        ;

set_model:
        SET MODEL IDENTIFIER                                  { set_model($3); }
        ;

set_shadow_type:
        SET SHADOW_TYPE IDENTIFIER                      { set_shadow_type($3); }
        ;

set_digits:
        SET DIGITS NUMBER                                    { set_digits($3); }
        ;

set_mode:
        SET MODE IDENTIFIER                                    { set_mode($3); }
        ;

set_inverted:
        SET INVERTED IDENTIFIER                            { set_inverted($3); }
        ;

set_ellipsize:
        SET ELLIPSIZE IDENTIFIER                          { set_ellipsize($3); }
        ;

set_active:
        SET ACTIVE IDENTIFIER                                { set_active($3); }
        | SET ACTIVE NUMBER                                  { set_active($3); }
        ;

set_uri:
        SET URI STRING                                          { set_uri($3); }
        ;

set_value:
        SET VALUE FLOAT                                       { set_value($3); }
        ;

set_use_underline:
        SET USE_UNDERLINE IDENTIFIER                  { set_use_underline($3); }
        ;

set_width_chars:
        SET WIDTH_CHARS NUMBER                          { set_width_chars($3); }

set_text:
        SET TEXT STRING                                        { set_text($3); }

set_title:
        SET TITLE STRING                                      { set_title($3); }
        ;

set_homogeneous:
        SET HOMOGENEOUS IDENTIFIER                      { set_homogeneous($3); }
        ;

set_input_purpose:
        SET INPUT_PURPOSE IDENTIFIER                  { set_input_purpose($3); }
        ;

set_editable:
        SET EDITABLE IDENTIFIER                            { set_editable($3); }
        ;

columns:
        | columns column
        ;

column:
        ADD COLUMN NUMBER IDENTIFIER           { list_store_add_column($3,$4); }
        ;

icon_add:
        ADD ICON STRING                           { scale_button_add_icon($3); }
        ;

grid_add:
        ADD ATACH IDENTIFIER NUMBER NUMBER NUMBER NUMBER
                                            { grid_attach($3, $4, $5, $6, $7); }
        | ADD ATACH_NEXT_TO IDENTIFIER IDENTIFIER IDENTIFIER NUMBER NUMBER
                                    { grid_attach_next_to($3, $4, $5, $6, $7); }
        ;

bar_pack:
        ADD PACK_START IDENTIFIER                            { pack_start($3); }
        | ADD PACK_END IDENTIFIER                              { pack_end($3); }
        | ADD PACK_CENTER IDENTIFIER       { action_bar_set_center_widget($3); }
        ;

stack_add:
        ADD TITLED IDENTIFIER STRING STRING    { stack_add_titled($3, $4, $5); }
        ;

add:
        ADD IDENTIFIER                                    { container_add($2); }
        | ADD ATTRIBUTE IDENTIFIER STRING NUMBER  { add_attribute($3, $4, $5); }
        | ADD ROW                                       { list_store_append(); }
        | ADD COLUMN IDENTIFIER                 { tree_view_append_column($3); }
        | ADD CELL_RENDERER IDENTIFIER                { add_cell_renderer($3); }
        | ADD ADD_OVERLAY IDENTIFIER                { overlay_add_overlay($3); }
        | ADD ITEM IDENTIFIER                        { g_menu_append_item($3); }
        | ADD WIDGET IDENTIFIER                   { size_group_add_widget($3); }
        | ADD ACTION_WIDGET IDENTIFIER IDENTIFIER { add_action_widget($3, $4); }
        | ADD BUTTON STRING IDENTIFIER                   { add_button($3, $4); }
        | ADD CONTENT_AREA IDENTIFIER         { info_bar_add_content_area($3); }
        | ADD PACK1 IDENTIFIER IDENTIFIER IDENTIFIER 
                                                    { paned_pack1($3, $4, $5); }
        | ADD PACK2 IDENTIFIER IDENTIFIER IDENTIFIER                    
                                                    { paned_pack2($3, $4, $5); }
        | ADD ACCELERATOR STRING IDENTIFIER IDENTIFIER IDENTIFIER
                                { accel_group_add_accelerator($3, $4, $5, $6); }
        | ADD ACCEL_GROUP IDENTIFIER             { window_add_accel_group($3); }
        | ADD ACTION STRING IDENTIFIER STRING STRING IDENTIFIER IDENTIFIER
                                  { window_add_action($3, $4, $5, $6, $7, $8); }
        | ADD ACTION STRING IDENTIFIER STRING IDENTIFIER IDENTIFIER IDENTIFIER
                                  { window_add_action($3, $4, $5, $6, $7, $8); }
        | ADD ACTION STRING IDENTIFIER IDENTIFIER IDENTIFIER IDENTIFIER 
                     IDENTIFIER   { window_add_action($3, $4, $5, $6, $7, $8); }
        | ADD ACTION STRING IDENTIFIER IDENTIFIER STRING IDENTIFIER IDENTIFIER
                                  { window_add_action($3, $4, $5, $6, $7, $8); }
        | ADD WINDOW IDENTIFIER                  { application_add_window($3); }
        ;

common:
          widget_set_size_request
        | widget_set_margin_bottom
        | widget_set_margin_top
        | widget_set_margin_end
        | widget_set_margin_start
        | widget_set_valign
        | widget_set_halign
        | widget_set_vexpand_set
        | widget_set_vexpand
        | widget_set_hexpand_set
        | widget_set_hexpand
        | widget_set_receives_default
        | widget_set_sensitive
        | widget_set_show_all
        | widget_set_no_show_all
        | widget_set_app_paintable
        | widget_set_can_default
        | widget_set_can_focus
        | widget_set_visible
        | widget_set_opacity
        | widget_set_tooltip_markup
        | widget_set_has_tootip
        | widget_set_tooltip_text
        | widget_set_name
        | widget_set_focus_on_click
        | widget_show
        | widget_hide
        | set_container_focus_vadjustment
        | set_container_focus_hadjustment
        | set_container_border_width
        | set_container_child_property
        ;

set_container_focus_vadjustment:
        COMMON FOCUS_VADJUSTMENT IDENTIFIER 
                                        { container_set_focus_vadjustment($3); }
        ;

set_container_focus_hadjustment:
        COMMON FOCUS_HADJUSTMENT IDENTIFIER
                                        { container_set_focus_hadjustment($3); }
        ;

set_container_border_width:
        COMMON BORDER_WIDTH NUMBER           { container_set_border_width($3); }
        ;
        
set_container_child_property:
        SET CHILD_PROPERTY IDENTIFIER STRING STRING    
                                   { container_child_set_property($3, $4, $5); }
        ;

widget_show:
        COMMON SHOW                                           { widget_show(); }
        ;

widget_hide:
        COMMON HIDE                                           { widget_hide(); }
        ;

widget_set_focus_on_click:
        COMMON FOCUS_ON_CLICK IDENTIFIER      { widget_set_focus_on_click($3); }
        ;

widget_set_size_request:
        COMMON SIZE_REQUEST NUMBER NUMBER   { widget_set_size_request($3, $4); }
        ;

widget_set_margin_bottom:
        COMMON MARGIN_BOTTOM NUMBER            { widget_set_margin_bottom($3); }
        ;

widget_set_margin_top:
        COMMON MARGIN_TOP NUMBER                  { widget_set_margin_top($3); }
        ;

widget_set_margin_end:
        COMMON MARGIN_END NUMBER                  { widget_set_margin_end($3); }
        ;

widget_set_margin_start:
        COMMON MARGIN_START NUMBER              { widget_set_margin_start($3); }
        ;

widget_set_valign:
        COMMON VALIGN IDENTIFIER                      { widget_set_valign($3); }
        ;

widget_set_halign:
        COMMON HALIGN IDENTIFIER                      { widget_set_halign($3); }
        ;

widget_set_vexpand_set:
        COMMON VEXPAND_SET IDENTIFIER            { widget_set_vexpand_set($3); }
        ;

widget_set_vexpand:
        COMMON VEXPAND IDENTIFIER                    { widget_set_vexpand($3); }
        ;

widget_set_hexpand_set:
        COMMON HEXPAND_SET IDENTIFIER            { widget_set_hexpand_set($3); }
        ;

widget_set_hexpand:
        COMMON HEXPAND IDENTIFIER                    { widget_set_hexpand($3); }
        ;

widget_set_receives_default:
        COMMON RECEIVES_DEFAULT IDENTIFIER  { widget_set_receives_default($3); }
        ;

widget_set_sensitive:
        COMMON SENSITIVE IDENTIFIER                { widget_set_sensitive($3); }
        ;

widget_set_show_all:
        COMMON SHOW_ALL                                   { widget_show_all(); }
        ;

widget_set_no_show_all:
        COMMON NO_SHOW_ALL IDENTIFIER            { widget_set_no_show_all($3); }
        ;

widget_set_app_paintable:
        COMMON APP_PAINTABLE IDENTIFIER        { widget_set_app_paintable($3); }
        ;

widget_set_can_default:
        COMMON CAN_DEFAULT IDENTIFIER            { widget_set_can_default($3); }
        ;

widget_set_can_focus:
        COMMON CAN_FOCUS IDENTIFIER                { widget_set_can_focus($3); }
        ;

widget_set_visible:
        COMMON VISIBLE IDENTIFIER                    { widget_set_visible($3); }
        ;

widget_set_opacity:
        COMMON OPACITY FLOAT                         { widget_set_opacity($3); }
        ;

widget_set_tooltip_markup:
        COMMON TOOLTIP_MARKUP STRING          { widget_set_tooltip_markup($3); }
        ;

widget_set_has_tootip:
        COMMON HAS_TOOLTIP IDENTIFIER             { widget_set_has_tootip($3); }
        ;

widget_set_tooltip_text:
        COMMON TOOLTIP_TEXT STRING              { widget_set_tooltip_text($3); }
        ;

widget_set_name:
        COMMON NAME STRING                              { widget_set_name($3); }
        ;
       

signal:
        SIGNAL STRING IDENTIFIER IDENTIFIER      { signal_connect($2, $3, $4); }
        | SIGNAL STRING IDENTIFIER           { signal_connect($2, $3, "NULL"); }
        ;

signal_swapped:
        SIGNAL_SWAPPED STRING IDENTIFIER IDENTIFIER      
                                         { signal_connect_swapped($2, $3, $4); }
        ;

properties:
        PROPERTY STRING STRING                           { object_set($2, $3); }
        | PROPERTY STRING NUMBER                         { object_set($2, $3); }
        | PROPERTY SET_DATA STRING IDENTIFIER       { object_set_data($3, $4); }
        ;
%%

