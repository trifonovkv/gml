TEXT_VIEW text_view
  SET Editable FALSE
  SET Cursor_visible FALSE
;

SCROLLED_WINDOW scrolled_window
  CMN Hexpand TRUE
  CMN Vexpand TRUE
  ADD text_view
;

HEADER_BAR header_bar
  SET Title "Example Application"
  SET Show_close_button TRUE
;

WINDOW window
  SET Default_size 600 400
  SET Titlebar header_bar
  ADD scrolled_window
;
