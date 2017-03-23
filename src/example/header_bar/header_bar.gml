BUTTON button
  SET Label "button"
  SIGNAL "clicked" print_hello
;

HEADER_BAR header_bar
  SET Title "Header bar"
  SET Show_close_button TRUE
  ADD Pack_end button
;

WINDOW window
  SET Default_size 720 404
  SET Titlebar header_bar
  CMN Show_all 
;

APPLICATION application
  ARG Application_id "org.example.headerbar"
  ARG Flags G_APPLICATION_FLAGS_NONE
  ADD Window window
;
