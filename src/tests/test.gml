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
  SET Focus_on_click TRUE
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
;

WINDOW window
  SET Default_size 720 404
  SET Title "Example Application"
  ADD vbox
;



