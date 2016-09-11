ADJUSTMENT adjustment
  SET Upper 100.0
  SET Lower 1.0
  SET Value 50.0
  SET Step_increment 1.0
  SET Page_increment 10.0
;

CHECK_BUTTON checkbutton6
  SET Label_text "checkbutton"
  CMN Sensitive FALSE
;

CHECK_BUTTON checkbutton5
  SET Label_text "checkbutton"
  CMN Sensitive FALSE
;

CHECK_BUTTON checkbutton4
  SET Label_text "checkbutton"
  CMN Sensitive FALSE
;

CHECK_BUTTON checkbutton3
  SET Label_text "checkbutton"
;

CHECK_BUTTON checkbutton2
  SET Label_text "checkbutton"
;

CHECK_BUTTON checkbutton1
  SET Label_text "checkbutton"
;

GRID grid1
  SET Row_homogeneous TRUE
  SET Column_spacing 18
  SET Row_spacing 6
  ADD Atach checkbutton1 0 0 1 1
  ADD Atach checkbutton2 0 1 1 1
  ADD Atach checkbutton3 0 2 1 1
  ADD Atach checkbutton4 0 3 1 1
  ADD Atach checkbutton5 0 4 1 1
  ADD Atach checkbutton6 0 5 1 1
;

SPIN_BUTTON spin_button2
  CMN Hexpand TRUE 
  CMN Sensitive FALSE
;

SPIN_BUTTON spin_button1
  CMN Hexpand TRUE 
  SET Adjustment adjustment
;

LABEL label2
  CMN Hexpand TRUE 
  SET Text "label"
  CMN Sensitive FALSE
;

LABEL label1
  CMN Hexpand TRUE 
  SET Text "label"
;

HBOX hbox4v2
  SET Spacing 20
  ADD label1
  ADD label2
  ADD spin_button1
  ADD spin_button2
;

COMBO_BOX_TEXT combobox5
  CMN Hexpand TRUE 
  SIGNAL "show" combobox2_show 
;

COMBO_BOX_TEXT combobox4
  CMN Hexpand TRUE 
  SIGNAL "show" combobox2_show 
;

COMBO_BOX_TEXT combobox3
  CMN Hexpand TRUE 
  SIGNAL "show" combobox2_show 
;

HBOX hbox3v2
  ADD combobox3
  ADD combobox4
  ADD combobox5
  STYLE Add_class "linked"
;

ENTRY entry3
  SET Text "entry"
  CMN Hexpand TRUE
;

BUTTON button
  SIGNAL "show" button_show
;

HBOX hbox2v2
  ADD entry3
  ADD button
  STYLE Add_class "linked"
  SIGNAL "show" hbox_show
;

ENTRY entry2
  SET Text "entry"
  CMN Sensitive FALSE
;

ENTRY entry
  SIGNAL "show" entry_show
  SIGNAL "icon-release" on_entry_icon_release
;

COMBO_BOX_TEXT_ENTRY combobox2
  SIGNAL "show" combobox_show
  CMN Sensitive FALSE
;

COMBO_BOX_TEXT_ENTRY combobox
  SIGNAL "show" combobox_show
;

VBOX vbox2h1
  SET Spacing 10
  ADD combobox
  ADD combobox2
  ADD entry
  ADD entry2
  ADD hbox2v2
  ADD hbox3v2
  ADD hbox4v2
  ADD grid1
;

HBOX hbox1v1
  SET Spacing 10
  ADD vbox2h1
;

VBOX vbox1
  CMN Border_width 10
  SET Spacing 10
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
