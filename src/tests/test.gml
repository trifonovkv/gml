APPLICATION application
  SET Accels_for_action quit_activated "<Ctrl>Q"
  SET Accels_for_action print_hello "<Ctrl>P"
;

ADJUSTMENT adjustment
  SET Value 10.86
  SET Clamp_page 3.3 5.5
  SET Configure 1.0 2.2 3.3 4.4 5.5 6.6
  SET Lower 10.86
  SET Page_increment 0.3
  SET Page_size 3.3
  SET Step_increment 0.2
  SET Upper 55.86
;

SWITCH switch1
  SET State TRUE
;

LINK_BUTTON_WITH_LABEL linkbutton1
  SET Label_text "http://www.gtk.org"
  SET Uri "http://www.gtk.org"
  SET Visited TRUE
;

FILE_CHOOSER_BUTTON filechooserbutton1
  SET Width_chars 5
  SET Title "tic tac"
  SET Action GTK_FILE_CHOOSER_ACTION_OPEN
  SET Local_only TRUE
  SET Show_hidden FALSE
  SET Do_overwrite_confirmation TRUE
  SET Create_folders TRUE
  SET Current_folder "/home/"
  SET Uri "/home/"
  SET Current_folder_uri "/"
  SET Use_preview_label TRUE
;

COLOR_BUTTON_WITH_RGBA colorbutton1
  SET Rgba "#31316867a09f"
  SET Title "colorbutton"
;

FONT_BUTTON fontbutton1
  SET Font_name "Times"                  
  SET Show_style FALSE
  SET Show_size FALSE
  SET Use_font TRUE
  SET Use_size TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton1
  SET Label_text "togglebutton"
  SET Mode FALSE
  SET Inconsistent TRUE
  SET Active TRUE
;

SPINNER spinner2
  CMN Sensitive TRUE
  SET Start
;

SPINNER spinner1
  CMN Sensitive FALSE
  SET Start
;

RADIO_BUTTON_WITH_LABEL radio_button3
  SET Label_text "Radio button 3"
  SET Mode FALSE
;

RADIO_BUTTON_WITH_LABEL radio_button2
  SET Label_text "Radio button 2"
  SET Join radio_button3
;

RADIO_BUTTON_WITH_LABEL radio_button1
  SET Label_text "Radio button 1"
  SET Join radio_button2
;

CHECK_BUTTON_WITH_LABEL check_button1
  SET Label_text "Check button"
  SET Mode FALSE
;
/*
  SET Mnemonics    
*/

GRID grid
  SET Row_homogeneous TRUE
  SET Row_spacing 30          
  SET Column_homogeneous TRUE
  SET Column_spacing 40 
  SET Baseline_row 3
  SET Row_baseline_position 3 GTK_BASELINE_POSITION_CENTER
  ADD Atach check_button1 0 0 1 1
  ADD Atach_next_to radio_button1 check_button1 GTK_POS_RIGHT 1 1
  ADD Atach_next_to radio_button2 radio_button1 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to radio_button3 radio_button2 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to spinner1 check_button1 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to spinner2 spinner1 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to togglebutton1 spinner2 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to fontbutton1 togglebutton1 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to colorbutton1 fontbutton1 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to filechooserbutton1 colorbutton1 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to linkbutton1 radio_button3 GTK_POS_BOTTOM 1 1
  ADD Atach_next_to switch1 linkbutton1 GTK_POS_BOTTOM 1 1
;

SPIN_BUTTON spin_button
  SET Adjustment adjustment
  SET Digits 15
  SET Increments 1.0 2.0
  SET Range 0.0 30.0
  SET Update_policy GTK_UPDATE_ALWAYS
  SET Numeric TRUE
  SET Spin GTK_SPIN_HOME 1.0
  SET Wrap TRUE
  SET Snap_to_ticks TRUE
;

LABEL label
  CMN Hexpand TRUE
  CMN Vexpand TRUE
  SET Text "Test label alsfjalskfdalskdfjalskfjalsfkjaslfjalsfjalsjfalsfjalsjdf"
  SET Pattern "___ "             
  SET Justify GTK_JUSTIFY_FILL
  SET Xalign 0.7
  SET Yalign 0.7              
  SET Ellipsize PANGO_ELLIPSIZE_END
  SET Width_chars 10 
  SET Max_width_chars 3 
  SET Lines 2
  SET Line_wrap FALSE
  SET Line_wrap_mode PANGO_WRAP_WORD
  SET Selectable FALSE
  SET Select_region 10 20
  SET Text_with_mnemonic "_C"
  SET Label_text "https://ya.ru"
  SET Label_use_markup TRUE
  SET Single_line_mode TRUE
  SET Angle 45.0
  SET Track_visited_links TRUE
;

BUTTON button
  SET Label "button"
  SIGNAL "clicked" print_hello
;

TEXT_VIEW text_view
  SET Border_window_size GTK_TEXT_WINDOW_TOP 10
  SET Wrap_mode GTK_WRAP_WORD
  SET Cursor_visible FALSE
  SET Overwrite TRUE
  SET Pixels_above_lines 10
  SET Pixels_below_linew 20
  SET Pixels_inside_wrap 10
  SET Justification GTK_JUSTIFY_LEFT
  SET Left_margin 100
  SET Right_margin 100
  SET Indent 10
  SET Accepts_tab FALSE
  SET Input_hints GTK_INPUT_HINT_NO_SPELLCHECK
;

TEXT_VIEW text_view2
;

SCROLLED_WINDOW scrolled_window
  SET Policy GTK_POLICY_ALWAYS GTK_POLICY_ALWAYS        
  SET Placement GTK_CORNER_BOTTOM_RIGHT    
  SET Shadow_type  GTK_SHADOW_OUT 
  SET Min_content_width 1
  SET Min_content_height 10
  SET Kinetic_scrolling TRUE
  SET Capture_button_press TRUE
  SET Overlay_scrolling TRUE
  SET Hadjustment adjustment
  SET Vadjustment adjustment
  ADD text_view
;

SCROLLED_WINDOW scrolled_window2
  SET Policy GTK_POLICY_ALWAYS GTK_POLICY_ALWAYS        
  SET Placement GTK_CORNER_BOTTOM_RIGHT    
  SET Shadow_type  GTK_SHADOW_OUT 
  SET Min_content_width 1
  SET Min_content_height 10
  SET Kinetic_scrolling TRUE
  SET Capture_button_press TRUE
  SET Overlay_scrolling TRUE
  SET Hadjustment adjustment
  SET Vadjustment adjustment
  ADD text_view2
;

STACK stack
  ADD Titled scrolled_window "test" "test"
  ADD Titled scrolled_window2 "test2" "test2"
;

STACK_SWITCHER stack_switcher
  SET Stack_switcher_stack stack
;

HEADER_BAR header_bar
  CMN Visible TRUE
  SET Custom_title stack_switcher
;

BUTTON button1
  SET Label "button1"
  SIGNAL "clicked" print_hello
;

BUTTON button2
  SET Label "button2"
  SIGNAL "clicked" print_hello
;

BUTTON button3
  SET Label "button3"
  SIGNAL "clicked" print_hello
;

BUTTON button4
  SET Label "button4"
  SIGNAL "clicked" print_hello
;

BUTTON button5
  SET Label "button5"
  SIGNAL "clicked" print_hello
;

BUTTON button6
  SET Label "button6"
  CMN Focus_on_click TRUE
  SIGNAL "clicked" print_hello
;

HBUTTONBOX hbuttonbox
  SET Box_layout GTK_BUTTONBOX_START
  ADD button1
  ADD button2
  ADD button3
  SET Child_non_homogeneous button2 TRUE
;

VBUTTONBOX vbuttonbox
  SET Box_layout GTK_BUTTONBOX_EDGE
  ADD button4
  ADD button5
  SET Child_secondary button5 TRUE 
;

COMBO_BOX combobox
;

COMBO_BOX_ENTRY comboboxentry
  CMN Sensitive FALSE
  SET Wrap_width 1
  SET Active 1
  SET Id_column 1            
  SET Button_sensitivity GTK_SENSITIVITY_AUTO
  SET Entry_text_column 1
  SET Popup_fixed_width TRUE
;

COMBO_BOX_TEXT_ENTRY comboboxtextentry
;

VBOX vbox
  CMN Visible TRUE
  ADD header_bar
  ADD stack
  ADD hbuttonbox
  ADD vbuttonbox
  ADD combobox
  ADD comboboxentry
  ADD comboboxtextentry
  ADD label
/*
  ADD spin_button
*/
  ADD grid
;

WINDOW window
  SET Default_size 720 404
  SET Title "Example Application"
  ADD vbox
;



