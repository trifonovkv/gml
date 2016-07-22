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
  SET Border_window_size GTK_TEXT_WINDOW_TOP 100
  SET Wrap_mode GTK_WRAP_WORD
  SET Cursor_visible FALSE
  SET Overwrite TRUE
  SET Pixels_above_lines 10
  SET Pixels_below_linew 20
  SET Pixels_inside_wrap 10
  SET Justification GTK_JUSTIFY_LEFT
  SET Left_margin 100
  SET Right_margin 100
  SET Indent 100
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
  SET Min_content_height 1000
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
  SET Min_content_height 1000
  SET Kinetic_scrolling TRUE
  SET Capture_button_press TRUE
  SET Overlay_scrolling TRUE
  SET Hadjustment adjustment
  SET Vadjustment adjustment
  ADD text_view2
;
STACK stack
/*
  SET Homogeneous TRUE
  SET Hhomogeneous TRUE
  SET Vhomogeneous TRUE  
  SET Transition_duration 8
  SET Transition_type GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT
*/
  ADD Titled scrolled_window "test" "test"
  ADD Titled scrolled_window2 "test2" "test2"
;

STACK_SWITCHER stack_switcher
  SET Stack_switcher_stack stack
;

HEADER_BAR header_bar
  CMN Visible TRUE
  SET Custom_title stack_switcher
/*
  SET Show_close_button TRUE
  SET Header_bar_title "Header bar"
  SET Subtitle "Subtitle" 
  SET Has_subtitle TRUE
  SET Decoration_layout "menu:minimize,maximize,close"
  ADD Pack_end button
*/
;

VBOX vbox
  CMN Visible TRUE
  ADD header_bar
  ADD stack
;

WINDOW window
  SET Default_size 720 404
  SET Title "Example Application"
/*
  SET Titlebar vbox
  SET Titlebar header_bar
  SIGNAL "destroy" gtk_main_quit
*/
  ADD vbox
;

