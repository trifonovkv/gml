BUTTON button
  SET Label "Hello World"
  SIGNAL "clicked" print_hello
; 

HBUTTONBOX button_box
  ADD button
;

WINDOW window
  SET Title "Hello"
  ADD button_box
  CMN Show_all 
;

APPLICATION application
  ARG Application_id "org.example.window"
  ARG Flags G_APPLICATION_FLAGS_NONE
  ADD Window window
;
