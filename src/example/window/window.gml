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
;
