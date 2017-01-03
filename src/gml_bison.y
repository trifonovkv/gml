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
#include "widgets/application.h"
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
#include "widgets/list_store.h"

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
%token LIST_STORE COLUMN_TYPES COLUMN ROW ID

%token CELL_RENDERER_PIXBUF

%token TREE_VIEW_COLUMN SIZING FIXED_WIDTH MIN_WIDTH MAX_WIDTH
%token CLICKABLE WIDGET SORT_COLUMN_ID SORT_INDICATOR SORT_ORDER ATTRIBUTE

%token CELL_RENDERER_TOGGLE RADIO ACTIVATABLE

%token TREE_VIEW LEVEL_INDENTATION SHOW_EXPANDERS HEADERS_VISIBLE
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

%token COLOR_BUTTON COLOR_BUTTON_WITH_RGBA RGBA

%token FONT_BUTTON FONT FONT_NAME SHOW_STYLE SHOW_SIZE 
%token USE_FONT USE_SIZE

%token SEPARATOR ORIENTATION

%token SPINNER START STOP

%token TOGGLE_BUTTON TOGGLE_BUTTON_WITH_LABEL TOGGLE_BUTTON_WITH_MNEMONIC MODE 
%token INCONSISTENT
 
%token RADIO_BUTTON RADIO_BUTTON_WITH_LABEL RADIO_BUTTON_WITH_MNEMONIC JOIN

%token CHECK_BUTTON CHECK_BUTTON_WITH_LABEL CHECK_BUTTON_WITH_MNEMONIC MNEMONICS

%token GRID ROW_HOMOGENEOUS ROW_SPACING COLUMN_HOMOGENEOUS COLUMN_SPACING
%token BASELINE_ROW ROW_BASELINE_POSITION ATACH ATACH_NEXT_TO 
 
%token COMMON FOCUS_VADJUSTMENT FOCUS_HADJUSTMENT BORDER_WIDTH 

%token SPIN_BUTTON SET_ADJUSTMENT DIGITS INCREMENTS RANGE UPDATE_POLICY
%token NUMERIC SPIN WRAP SNAP_TO_TICKS

%token LABEL PATTERN JUSTIFY XALIGN YALIGN ELLIPSIZE MAX_WIDTH_CHARS LINE_WRAP 
%token LINE_WRAP_MODE LINES SELECT_REGION SELECTABLE TEXT_WITH_MNEMONIC 
%token LABEL_TEXT  LABEL_USE_MARKUP SINGLE_LINE_MODE ANGLE TRACK_VISITED_LINKS 

%token STYLE ADD_CLASS

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
%token SENSITIVE NO_SHOW_ALL APP_PAINTABLE CAN_DEFAULT CAN_FOCUS VISIBLE 
%token OPACITY TOOLTIP_MARKUP HAS_TOOLTIP TOOLTIP_TEXT NAME FOCUS_ON_CLICK

%token BUTTON BUTTON_FROM_ICON_NAME RELIEF LABEL_BUTTON USE_UNDERLINE 
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

%token APPLICATION APP_ID APP_FLAGS ACCELS_FOR_ACTION

%token INCLUDE SET ADD SIGNAL PACK IDENTIFIER STRING NUMBER SEMICOLON 
%token HBOX VBOX WINDOW FLOAT CHAR OR ARG

%union
{
        char  *string;
}

%type <string> IDENTIFIER STRING NUMBER FLOAT icon_name size flags set_label
%type <string> set_mnemonics set_orientation set_rgba arg_id
%%

main:
        APPLICATION IDENTIFIER params SEMICOLON widgets
                                                   { application_set_name($2); }
        | widgets
        ;
        
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
        | color_button_with_rgba
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
        | list_store
        ;

params: 
        | params param
        ;

param:
          common
        | set
        | add
        | signal
        | pack
        | bbox_child_set
        | hb_pack
        | stack_add
        | style
        | grid_add
        /*
         * | row_add
         */
        ;

arg_id:
        ARG IDENTIFIER                                              { $$ = $2; }
        ;

set_rgba:
        SET RGBA STRING                                             { $$ = $3; }
        ;

set_orientation:
        SET ORIENTATION IDENTIFIER                                  { $$ = $3; }
        ;

set_label:
        SET LABEL_TEXT STRING                                       { $$ = $3; }
        ;

set_mnemonics:
        SET MNEMONICS STRING                                        { $$ = $3; }
        ;

icon_name:
        SET ICON_NAME STRING                                        { $$ = $3; }
        ;
size:
        SET SIZE IDENTIFIER                                         { $$ = $3; }
        ;

style:
        STYLE ADD_CLASS STRING                  { style_context_add_class($3); }
        ;

bbox_child_set:
        SET CHILD_SECONDARY IDENTIFIER IDENTIFIER
                                     { button_box_set_child_secondary($3, $4); }
        | SET CHILD_NON_HOMOGENEOUS IDENTIFIER IDENTIFIER
                               { button_box_set_child_non_homogeneous($3, $4); }
        ;

list_store:
        LIST_STORE IDENTIFIER columns                    { list_store_new($2); }
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
        LINK_BUTTON_WITH_LABEL IDENTIFIER set_label
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

color_button_with_rgba:
        COLOR_BUTTON_WITH_RGBA IDENTIFIER set_rgba  
                                         { color_button_new_with_rgba($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

font_button:
        FONT_BUTTON IDENTIFIER                          { font_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

separator:
        SEPARATOR IDENTIFIER set_orientation          { separator_new($2, $3); }
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
        TOGGLE_BUTTON_WITH_LABEL IDENTIFIER set_label 
                                       { toggle_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

toggle_button_with_mnemonic:
        TOGGLE_BUTTON_WITH_MNEMONIC IDENTIFIER set_mnemonics
                                    { toggle_button_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;
   
radio_button:
        RADIO_BUTTON IDENTIFIER                        { radio_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_button_with_label:
        RADIO_BUTTON_WITH_LABEL IDENTIFIER set_label 
                                        { radio_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

radio_button_with_mnemonic:
        RADIO_BUTTON_WITH_MNEMONIC IDENTIFIER set_mnemonics
                                     { radio_button_new_with_mnemonic($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;
 
check_button:
        CHECK_BUTTON IDENTIFIER                        { check_button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_button_with_label:
        CHECK_BUTTON_WITH_LABEL IDENTIFIER set_label 
                                        { check_button_new_with_label($2, $3); }
        params SEMICOLON                                    { block_close($2); }
        ;

check_button_with_mnemonic:
        CHECK_BUTTON_WITH_MNEMONIC IDENTIFIER set_mnemonics 
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
        BUTTON IDENTIFIER                                    { button_new($2); }
        params SEMICOLON                                    { block_close($2); }
        ;

window:
        WINDOW IDENTIFIER                                    { window_new($2); }
        params SEMICOLON                                { widget_show_all($2);
                                                              block_close($2); }
        ;

pack:
          set_pack_position
        | set_pack_padding
        | set_pack_fill
        | set_pack_expand
        | set_pack_type
        | set_pack_center
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
        | set_window_icon_name
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
        | set_button_label
        | set_button_image
        | set_button_image_position
        | set_button_always_show_image
        | set_header_bar_subtitle
        | set_header_bar_has_subtitle
        | set_header_bar_custom_title
        | set_header_bar_show_close_button
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
        | set_stack_transition_duration
        | set_stack_transition_type
        | set_stack_switcher_stack
        | set_application_accels_for_action
        | set_application_flags
        | set_application_id
        | set_button_box_layout
        | set_combo_box_wrap_width
        | set_combo_box_row_span_column
        | set_combo_box_column_span_column
        | set_combo_box_id_column
        | set_combo_box_active
        | set_combo_box_active_id
        | set_combo_box_button_sensitivity
        | set_combo_box_entry_text_column
        | set_combo_box_popup_fixed_width
        | set_label_pattern
        | set_label_justify
        | set_label_xalign
        | set_label_yalign
        | set_label_max_width_chars
        | set_label_line_wrap
        | set_label_line_wrap_mode
        | set_label_lines
        | set_label_region
        | set_label_selectable
        | set_label_text_with_mnemonic
        | set_label_label
        | set_label_use_markup
        | set_label_single_line_mode
        | set_label_angle
        | set_label_track_visited_links
        | set_spin_button_adjustment
        | set_spin_button_increments
        | set_spin_button_range
        | set_spin_button_update_policy
        | set_spin_button_numeric
        | set_spin_button_spin
        | set_spin_button_wrap
        | set_spin_button_snap_to_ticks
        | set_grid_row_homogeneous
        | set_grid_row_spacing
        | set_grid_column_homogeneous
        | set_grid_column_spacing
        | set_grid_baseline_row
        | set_grid_row_baseline_position
        | set_radio_button_join_group
        | set_toggle_button_inconsistent
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
        | set_frame_label_widget
        | set_frame_label_align
        | set_tree_view_level_indentation
        | set_tree_view_show_expanders
        | set_tree_view_headers_visible
        | set_tree_view_headers_clickable
        | set_tree_view_activate_on_single_click
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
        | set_tree_view_tooltip_column
        | set_cell_renderer_toggle_radio
        | set_cell_renderer_toggle_activatable
        | set_tree_view_column_visible
        | set_tree_view_column_sizing
        | set_tree_view_column_fixed_width
        | set_tree_view_column_min_width
        | set_tree_view_column_max_width
        | set_tree_view_column_expand
        | set_tree_view_column_clickable
        | set_tree_view_column_widget
        | set_tree_view_column_sort_column_id
        | set_tree_view_column_sort_indicator
        | set_tree_view_column_sort_order
        | set_list_store_column_types
        | set_list_store_column
        | set_list_store_row
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

set_tree_view_column_expand:
        SET EXPAND IDENTIFIER               { tree_view_column_set_expand($3); }
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

set_cell_renderer_toggle_activatable:
        SET ACTIVATABLE IDENTIFIER { cell_renderer_toggle_set_activatable($3); }
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

set_tree_view_activate_on_single_click:
        SET ACTIVATE_ON_SINGLE_CLICK IDENTIFIER
                                 { tree_view_set_activate_on_single_click($3); }
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

set_tree_view_tooltip_column:
        SET TOOLTIP_COLUMN IDENTIFIER      { tree_view_set_tooltip_column($3); }
        ;

set_frame_label_widget:
        SET LABEL_WIDGET IDENTIFIER              { frame_set_label_widget($3); }
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

set_toggle_button_inconsistent:
        SET INCONSISTENT IDENTIFIER      { toggle_button_set_inconsistent($3); }
        ;

set_radio_button_join_group:
        SET JOIN IDENTIFIER                     { radio_button_join_group($3); }
        ;

set_grid_row_homogeneous:
        SET ROW_HOMOGENEOUS IDENTIFIER         { grid_set_row_homogeneous($3); }
        ;

set_grid_row_spacing:
        SET ROW_SPACING NUMBER                     { grid_set_row_spacing($3); }
        ;

set_grid_column_homogeneous:
        SET COLUMN_HOMOGENEOUS IDENTIFIER   { grid_set_column_homogeneous($3); }
        ;

set_grid_column_spacing:
        SET COLUMN_SPACING NUMBER               { grid_set_column_spacing($3); }
        ;

set_grid_baseline_row:
        SET BASELINE_ROW NUMBER                   { grid_set_baseline_row($3); }
        ;

set_grid_row_baseline_position:
        SET ROW_BASELINE_POSITION NUMBER IDENTIFIER
                                    { grid_set_row_baseline_position($3, $4); }
        ;

set_spin_button_adjustment:
        SET SET_ADJUSTMENT IDENTIFIER        { spin_button_set_adjustment($3); }
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

set_label_max_width_chars:
        SET MAX_WIDTH_CHARS NUMBER            { label_set_max_width_chars($3); }
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

set_label_selectable:
        SET SELECTABLE IDENTIFIER                  { label_set_selectable($3); }
        ;

set_label_text_with_mnemonic:
        SET TEXT_WITH_MNEMONIC STRING      { label_set_text_with_mnemonic($3); }
        ;

set_label_label:
        SET LABEL_TEXT  STRING                          { label_set_label($3); }
        ;

set_label_use_markup:
        SET LABEL_USE_MARKUP IDENTIFIER            { label_set_use_markup($3); }
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

set_combo_box_active:
        SET ACTIVE NUMBER                          { combo_box_set_active($3); }
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

set_application_flags:
        SET APP_FLAGS flags                       { application_set_flags($3); }
        ;

set_application_id: 
        SET APP_ID STRING                            { application_set_id($3); }
        ;

set_application_accels_for_action:
        SET ACCELS_FOR_ACTION IDENTIFIER STRING          { accels_add($3, $4); }
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

set_stack_transition_duration:
        SET TRANSITION_DURATION NUMBER    { stack_set_transition_duration($3); }
        ;

set_stack_transition_type:
        SET TRANSITION_TYPE IDENTIFIER        { stack_set_transition_type($3); }
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

set_header_bar_show_close_button:
        SET SHOW_CLOSE_BUTTON IDENTIFIER
                                       { header_bar_set_show_close_button($3); }
        ;

set_header_bar_decoration_layout:
        SET DECORATION_LAYOUT STRING   { header_bar_set_decoration_layout($3); }
        ;

set_button_relief:
        SET RELIEF IDENTIFIER                         { button_set_relief($3); }
        ;

set_button_label:
        SET LABEL_BUTTON STRING                        { button_set_label($3); }
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

set_window_icon_name:
        SET ICON_NAME STRING                       { window_set_icon_name($3); }
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

/*
 * row_add:
 *         ADD ROW                                         { list_store_append(); }
 *         ;
 * 
 */
grid_add:
        ADD ATACH IDENTIFIER NUMBER NUMBER NUMBER NUMBER
                                            { grid_attach($3, $4, $5, $6, $7); }
        | ADD ATACH_NEXT_TO IDENTIFIER IDENTIFIER IDENTIFIER NUMBER NUMBER
                                    { grid_attach_next_to($3, $4, $5, $6, $7); }
        ;

hb_pack:
        ADD PACK_START IDENTIFIER                 { header_bar_pack_start($3); }
        | ADD PACK_END IDENTIFIER                   { header_bar_pack_end($3); }
        ;

stack_add:
        ADD TITLED IDENTIFIER STRING STRING    { stack_add_titled($3, $4, $5); }
        ;

add:
        ADD IDENTIFIER                                    { container_add($2); }
        | ADD ATTRIBUTE IDENTIFIER STRING NUMBER
                                 { tree_view_column_add_attribute($3, $4, $5); }
        | ADD ROW                                       { list_store_append(); }
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
        | set_container_focus_vadjustment
        | set_container_focus_hadjustment
        | set_container_border_width
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


flags:
        IDENTIFIER                                                  { $$ = $1; }
        | flags OR IDENTIFIER               { $$ = append_flag($$, " | ", $3); }
        ;
%%

