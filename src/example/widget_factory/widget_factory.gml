COMBO_BOX_ENTRY combo_box_entry
;

VBOX vbox2h1
  ADD combo_box_entry
;

HBOX hbox1v1
  ADD vbox2h1
;

VBOX vbox1
  ADD hbox1v1
;

STACK stack
  ADD Titled vbox1 "Page1" "Page1"
;

STACK_SWITCHER stack_switcher
  SET Stack_switcher_stack stack
;

BUTTON_FROM_ICON_NAME menu_button
  SET Icon_name "open-menu-symbolic"
  SET Size GTK_ICON_SIZE_BUTTON
;

HEADER_BAR header_bar
  SET Show_close_button TRUE
  SET Custom_title stack_switcher
  ADD Pack_end menu_button
;

WINDOW window
  SET Titlebar header_bar
  ADD stack
;
