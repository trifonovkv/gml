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

HEADER_BAR header_bar
  SET Header_bar_title "Header bar"
  SET Subtitle "Subtitle" 
  SET Has_subtitle TRUE
  SET Show_close_button TRUE
  SET Decoration_layout "menu:minimize,maximize,close"
  ADD Pack_end button
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
;

WINDOW window
  SET Default_size 720 404
  SET Titlebar header_bar
  ADD scrolled_window
  SIGNAL "destroy" gtk_main_quit
;

