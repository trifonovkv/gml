ADJUSTMENT adjustment3
  SET Upper 4.0
  SET Value 1.0
  SET Step_increment 1.0
  SET Page_increment 1.0
;

ADJUSTMENT adjustment2
  SET Upper 1000.0
  SET Lower 1.0
  SET Value 50.0
  SET Step_increment 1.0
  SET Page_increment 10.0
;

ADJUSTMENT adjustmen1
  SET Upper 100.0
  SET Lower 1.0
  SET Value 50.0
  SET Step_increment 1.0
  SET Page_increment 10.0
;

LIST_STORE liststore1
  ADD Column 0 G_TYPE_BOOLEAN
  ADD Column 1 G_TYPE_STRING
  ADD Column 2 G_TYPE_STRING
  ADD Column 3 G_TYPE_STRING
  ADD Column 4 G_TYPE_BOOLEAN
  SET Row
  SET Id 0 TRUE
  SET Id 1 "emblem-default-symbolic"
  SET Id 2 "Andrea"
  SET Id 3 "Cimi"
  SET Id 4 FALSE
  SET Row
  SET Id 0 FALSE
  SET Id 1 "emblem-important-symbolic"
  SET Id 2 "Otto"
  SET Id 3 "chaotic"
  SET Id 4 FALSE
  SET Row
  SET Id 0 TRUE
  SET Id 1 "weather-clear-night-symbolic"
  SET Id 2 "Orville"
  SET Id 3 "Redenbacher"
  SET Id 4 FALSE
  SET Row
  SET Id 0 TRUE
  SET Id 1 "face-monkey-symbolic"
  SET Id 2 "Benjamin"
  SET Id 3 "Company"
  SET Id 4 TRUE
;

LIST_STORE lrmodel
  ADD Column 0 G_TYPE_STRING
  SET Row
  SET Id 0 "Left"
  SET Row
  SET Id 0 "Middle"
  SET Row
  SET Id 0 "Right"
;

TEXT_BUFFER textbuffer2
  SET Text "Aragonese\n\
Assamese\n\
Basque\n\
Brazilian Portuguese\n\
Dutch\n\
German\n\
Hebrew\n\
Hungarian\n\
Polish\n\
Portuguese\n\
Serbian\n\
Slovenian\n\
Spanish\n\
Uyghur"
;

MENU section5
  ADD Item "Cash" "app.pay"
  SET Attribute "target" "cash"
  SET Attribute "verb-icon" "document-save-symbolic"
  ADD Item "Credit Card" "app.pay"
  SET Attribute "target" "card"
  SET Attribute "verb-icon" "document-send-symbolic"
  ADD Item "Cheque" "app.pay"
  SET Attribute "target" "cheque"
  SET Attribute "verb-icon" "document-save-as-symbolic"
;

MENU section4
  ADD Item "Brownies" "app.dessert"
  SET Attribute "target" "brownies"
  ADD Item "Banana Sundae" "app.dessert"
  SET Attribute "target" "sundae"
  ADD Item "Lemon Bars" "app.dessert"
  SET Attribute "target" "bars"
;

MENU submenu
  ADD Section "" section4
;

MENU section3
  ADD Submenu "Dessert" submenu
  ADD Section "" section5
  SET Attribute "display-hint" "horizontal-buttons"
;

MENU section2
  ADD Item "Wine" "app.wine"
  ADD Item "Beer" "app.beer"
  ADD Item "Water" "app.water"
;

MENU section1
  ADD Item "Steak" "app.main"
  SET Attribute "target" "steak"
  ADD Item "Pizza" "app.main"
  SET Attribute "target" "pizza"
;

MENU dinner_menu
  ADD Section "" section1
  ADD Section "" section2
  ADD Section "" section3
;

IMAGE image_menu_button
  SET Image_from_icon_name "emblem-system-symbolic" GTK_ICON_SIZE_BUTTON
;

MENU_BUTTON menu_button1a
  SET Menu_model dinner_menu
  SET Image image_menu_button
  CMN Halign GTK_ALIGN_CENTER
  CMN Valign GTK_ALIGN_CENTER
;

IMAGE imageo
  SET Image_from_icon_name "gtk3-widget-factory" GTK_ICON_SIZE_BUTTON
  SET Image_pixel_size 256
;

TEXT_VIEW tvo
  SET Buffer textbuffer2
  SET Left_margin 10
  SET Right_margin 10
;

SCROLLED_WINDOW swo
  SET Policy GTK_POLICY_NEVER GTK_POLICY_AUTOMATIC
  ADD tvo
 ;

STACK stack
  SET Transition_type GTK_STACK_TRANSITION_TYPE_CROSSFADE
  SET Transition_duration 1000
  ADD Titled swo "page1" "News"
  SET Child_property swo "icon-name" "preferences-desktop-locale-symbolic"
  ADD Titled imageo "page2" "Logo"
  SET Child_property imageo "icon-name" "folder-pictures-symbolic"
;

STACK_SWITCHER switcher
  SET Stack_switcher_stack stack
  CMN Halign GTK_ALIGN_CENTER
;

ACTION_BAR actionbar1
  ADD Pack_center switcher
  ADD Pack_end menu_button1a
;

VBOX box4a
  ADD stack
  ADD actionbar1
;

FRAME page2frame1
  ADD box4a
;

SEPARATOR separator6
  SET Orientation GTK_ORIENTATION_HORIZONTAL
;

SCALE_BUTTON mic_button
  SET Size GTK_ICON_SIZE_SMALL_TOOLBAR
  SET Min 0.0
  SET Max 100.0
  SET Step 2.0
  ADD Icon "microphone-sensitivity-medium-symbolic"
  ADD Icon "microphone-sensitivity-low-symbolic"
  ADD Icon "microphone-sensitivity-high-symbolic"
  ADD Icon "microphone-sensitivity-muted-symbolic"
  SET Value 0.5
  CMN Valign GTK_ALIGN_CENTER
  CMN Halign GTK_ALIGN_CENTER
  CMN Has_tooltip TRUE
  SIGNAL "query-tooltip" on_scale_button_query_tooltip
  SIGNAL "value-changed" on_scale_button_value_changed
;

VOLUME_BUTTON volumebutton1a
  SET Orientation GTK_ORIENTATION_VERTICAL
  SET Value 0.5
  CMN Valign GTK_ALIGN_CENTER
  CMN Halign GTK_ALIGN_CENTER
;

GRID grid1a
  SET Row_spacing 6
  SET Column_spacing 6
  CMN Halign GTK_ALIGN_CENTER
  CMN Valign GTK_ALIGN_CENTER
  ADD Atach volumebutton1a 0 0 1 1
  ADD Atach mic_button 0 1 1 1
;

SPIN_BUTTON verticalspin2
  SET Orientation GTK_ORIENTATION_VERTICAL
  SET Adjustment adjustment2
  CMN Sensitive FALSE
;

SPIN_BUTTON verticalspin1
  SET Orientation GTK_ORIENTATION_VERTICAL
  SET Adjustment adjustment2
;

HBOX box3a
  SET Spacing 6
  ADD verticalspin1
  ADD verticalspin2
  ADD grid1a
;

VBOX box2a
  SET Spacing 10
  ADD box3a
  ADD separator6
  ADD page2frame1
;

HBOX box1a
  SET Spacing 10
  ADD box2a
;

BUTTON_FROM_ICON_NAME page2dismiss
  SET Icon_name "window-close-symbolic"
  SET Size GTK_ICON_SIZE_BUTTON
  SET Relief GTK_RELIEF_NONE
  CMN Focus_on_click FALSE
;

BUTTON page2reset
  CMN Valign GTK_ALIGN_CENTER
  SET Label "Reset"
;

LABEL page2note
  SET Label "NEWS!"
  CMN Hexpand TRUE
  CMN Halign GTK_ALIGN_START
;

HBOX page2box
  SET Spacing 20
  CMN Margin_top 10
  CMN Margin_bottom 10
  CMN Margin_start 10
  CMN Margin_end 10
  ADD page2note
  ADD page2reset
  ADD page2dismiss
;

FRAME page2frame
  STYLE Add_class "app-notification"
  ADD page2box
;

REVEALER page2revealer
  CMN Halign GTK_ALIGN_CENTER
  CMN Valign GTK_ALIGN_START
  ADD page2frame
;

OVERLAY page2
  ADD Overlay page2revealer  
  ADD box1a
;

LABEL label16
  SET Text "page 3"
;

VBOX box17
;

LABEL label15
  SET Text "page 2"
;

VBOX box16
;

LABEL label14
  SET Text "page 1"
;

VBOX box15
;

NOTEBOOK notebook4
  SET Tab_pos GTK_POS_LEFT
  ADD box15
  SET Tab_label box15 label14
  ADD box16
  SET Tab_label box16 label15
  ADD box17
  SET Tab_label box17 label16
;

LABEL label13
  SET Text "page 3"
;

VBOX box14
;

LABEL label12
  SET Text "page 2"
;

VBOX box13
;

LABEL label11
  SET Text "page 1"
;

VBOX box12
;

NOTEBOOK notebook3
  SET Tab_pos GTK_POS_BOTTOM
  ADD box12
  SET Tab_label box12 label11
  ADD box13
  SET Tab_label box13 label12
  ADD box14
  SET Tab_label box14 label13
;

LABEL label10
  SET Text "page 3"
;

VBOX box11
;

LABEL label9
  SET Text "page 2"
;

VBOX box10
;

LABEL label8
  SET Text "page 1"
;

VBOX box9
;

NOTEBOOK notebook2
  SET Tab_pos GTK_POS_RIGHT
  ADD box9
  SET Tab_label box9 label8
  ADD box10
  SET Tab_label box10 label9
  ADD box11
  SET Tab_label box11 label10
;

LABEL label7
  SET Text "page 3"
;

VBOX box8
;

LABEL label6
  SET Text "page 2"
;

VBOX box7
;

LABEL label5
  SET Text "page 1"
;

VBOX box6
;

NOTEBOOK notebook1
  ADD box6
  SET Tab_label box6 label5
  ADD box7
  SET Tab_label box7 label6
  ADD box8
  SET Tab_label box8 label7
;

HBOX box5
  SET Spacing 10
  SET Homogeneous TRUE
  ADD notebook1
  ADD notebook2
  ADD notebook3
  ADD notebook4
;

SEPARATOR separator5
  SET Orientation GTK_ORIENTATION_HORIZONTAL
;

TEXT_VIEW textview1
  SET Text "Lorem ipsum dolor sit amet, consectetur adipiscing elit."
  SET Wrap_mode GTK_WRAP_WORD
  SET Left_margin 10
  SET Right_margin 11
  CMN Hexpand TRUE
;

SCROLLED_WINDOW scrolledwindow2
  SET Shadow_type GTK_SHADOW_IN
  ADD textview1
  CMN Hexpand TRUE
;

CELL_RENDERER_TEXT cellrenderertext3
  SET Ellipsize PANGO_ELLIPSIZE_END
;

TREE_VIEW_COLUMN treeviewcolumn1
  SET Title "Name"
  SET Reorderable TRUE
  SET Resizable TRUE
  SET Sort_indicator TRUE
  SET Sort_column_id 2
  ADD Cell_renderer cellrenderertext3
  ADD Attribute cellrenderertext3 "text" 2
;

CELL_RENDERER_TEXT cellrenderertext4
  SET Ellipsize PANGO_ELLIPSIZE_END
;

TREE_VIEW_COLUMN treeviewcolumn2
  SET Title "Nick"
  SET Resizable TRUE
  SET Reorderable TRUE
  SET Sort_indicator TRUE
  SET Sort_column_id 3
  ADD Cell_renderer cellrenderertext4
  ADD Attribute cellrenderertext4 "text" 3
;

CELL_RENDERER_TOGGLE cellrenderertoggle1
;

TREE_VIEW_COLUMN treeviewcolumn3
  SET Title "Cool"
  ADD Cell_renderer cellrenderertoggle1
  ADD Attribute cellrenderertoggle1 "active" 0
  ADD Attribute cellrenderertoggle1 "radio" 4
;

CELL_RENDERER_PIXBUF cellrendererpixbuf1
;

TREE_VIEW_COLUMN treeviewcolumn4
  SET Title "Icon"
  SET Reorderable TRUE
  ADD Cell_renderer cellrendererpixbuf1
  ADD Attribute cellrendererpixbuf1 "icon_name" 1
;

TREE_VIEW treeview1
  SET Model liststore1
  SET Headers_clickable FALSE
  SET Search_column 0
  ADD Column treeviewcolumn3
  ADD Column treeviewcolumn4
  ADD Column treeviewcolumn1
  ADD Column treeviewcolumn2
;

SCROLLED_WINDOW scrolledwindow1
  CMN Size_request 0 150
  SET Policy GTK_POLICY_AUTOMATIC GTK_POLICY_ALWAYS
  SET Shadow_type GTK_SHADOW_IN
  ADD treeview1
;

VBOX box4
  SET Homogeneous TRUE
  SET Spacing 6
  ADD scrolledwindow1
  PACK scrolledwindow1 Expand TRUE
  ADD scrolledwindow2
  PACK scrolledwindow2 Expand TRUE
  PACK scrolledwindow2 Position 1
;

SEPARATOR separator4
  SET Orientation GTK_ORIENTATION_VERTICAL
;

LABEL label18
  SET Text "<b>Etched out</b>"
  SET Label_use_markup TRUE
;

FRAME frame4
  SET Shadow_type GTK_SHADOW_ETCHED_OUT
  SET Label_widget label18
;

LABEL label17
  SET Text "<b>Etched in</b>"
  SET Label_use_markup TRUE
;

FRAME frame3
  SET Label_widget label17
  SET Shadow_type GTK_SHADOW_ETCHED_IN
;

LABEL label2
  SET Text "<b>Out</b>"
  SET Label_use_markup TRUE
;

FRAME frame2
  SET Shadow_type GTK_SHADOW_OUT
  SET Label_widget label2
;

LABEL label1
  SET Text "<b>In</b>"
  SET Label_use_markup TRUE
;

FRAME frame1
  SET Shadow_type GTK_SHADOW_IN
  SET Label_widget label1
;

VBOX box26
  SET Homogeneous TRUE
  SET Spacing 6
  ADD frame1
  ADD frame2
  ADD frame3
  ADD frame4
  PACK frame1 Expand TRUE
  PACK frame2 Expand TRUE
  PACK frame3 Expand TRUE
  PACK frame4 Expand TRUE
  PACK frame2 Position 1
  PACK frame3 Position 2
  PACK frame4 Position 3
;

SEPARATOR separator3
  SET Orientation GTK_ORIENTATION_VERTICAL
;

SCALE scale4
  ARG GTK_ORIENTATION_VERTICAL
  ARG adjustmen1
  CMN Size_request 0 100
  CMN Sensitive FALSE
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value TRUE
  SET Digits -1
  SIGNAL "format-value" scale_format_value_blank
;

SCALE scale3
  ARG GTK_ORIENTATION_VERTICAL
  ARG adjustmen1
  CMN Size_request 0 100
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value TRUE
  SET Digits -1
  SIGNAL "format-value" scale_format_value
;

HBOX box23
  SET Spacing 6
  CMN Vexpand TRUE
  ADD scale3
  ADD scale4
  PACK scale4 Position 1
;

PROGRESS_BAR progressbar6
  SET Orientation GTK_ORIENTATION_VERTICAL
  SET Fraction 0.5
  SET Inverted TRUE
;

PROGRESS_BAR progressbar5
  SET Orientation GTK_ORIENTATION_VERTICAL
  SET Fraction 0.5
;

HBOX box28
  SET Spacing 6
  CMN Vexpand TRUE
  ADD progressbar5
  ADD progressbar6
  PACK progressbar6 Position 1
;

HBOX box25
  SET Homogeneous TRUE
  ADD box28
  PACK box28 Fill FALSE
  ADD box23
  PACK box23 Fill FALSE
  PACK box23 Position 1
;

SCALE scale5
  ARG GTK_ORIENTATION_HORIZONTAL
  ARG adjustment3
  SET Draw_value FALSE
  SET Has_origin FALSE
  SET Digits 0
  SET Range_restrict_to_fill_level FALSE
  SET Add_mark 0.0 GTK_POS_BOTTOM ""
  SET Add_mark 1.0 GTK_POS_BOTTOM ""
  SET Add_mark 2.0 GTK_POS_BOTTOM ""
  SET Add_mark 3.0 GTK_POS_BOTTOM ""
  SET Add_mark 4.0 GTK_POS_BOTTOM ""
;

SCALE scale2
  ARG GTK_ORIENTATION_HORIZONTAL
  ARG adjustmen1
  CMN Sensitive FALSE
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value FALSE
;
                                  
SCALE scale1
  ARG GTK_ORIENTATION_HORIZONTAL
  ARG adjustmen1
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value FALSE
;

VBOX box24
  SET Homogeneous TRUE
  CMN Hexpand TRUE
  ADD scale1
  ADD scale2
  PACK scale1 Position 1
;

HBOX box27
  ADD box24
  PACK box24 Expand TRUE
;

LEVEL_BAR levelbar2
  SET Max_value 5.0
  SET Value 2.0
  SET Mode GTK_LEVEL_BAR_MODE_DISCRETE
  SET Add_offset_value "low" 1.0
  SET Add_offset_value "high" 4.0
  SET Add_offset_value "full" 5.0
;

LEVEL_BAR levelbar1
  SET Value 0.6
;

PROGRESS_BAR progressbar3
  SET Fraction 0.5
  SET Show_text TRUE
;

PROGRESS_BAR progressbar2
  SET Fraction 0.5
  SET Inverted TRUE
;

PROGRESS_BAR progressbar1
  SET Fraction 0.5
;

VBOX box21
  SET Spacing 6
  ADD progressbar1
  PACK progressbar1 Fill FALSE
  ADD progressbar2
  PACK progressbar2 Fill FALSE
  PACK progressbar2 Position 1
  ADD progressbar3
  PACK progressbar3 Fill FALSE
  PACK progressbar3 Position 2
  ADD levelbar1
  PACK levelbar1 Position 10
  ADD levelbar2
  PACK levelbar2 Position 11
;

VBOX box20
  SET Spacing 6
  ADD box21
  PACK box21 Fill FALSE
  ADD box27
  PACK box27 Fill FALSE
  PACK box27 Position 1
  ADD scale5
  PACK scale5 Position 2
  ADD box25
  PACK box25 Expand TRUE
  PACK box25 Position 3
;

SEPARATOR separator2
  SET Orientation GTK_ORIENTATION_VERTICAL
;

SWITCH switch2
  CMN Sensitive FALSE
  CMN Halign GTK_ALIGN_CENTER
;

SWITCH switch1
  CMN Halign GTK_ALIGN_CENTER
;

LINK_BUTTON_WITH_LABEL linkbutton1
  SET Label_text "link button"
  SET Relief GTK_RELIEF_NONE
  SET Uri "http://www.gtk.org"
  CMN Receives_default TRUE
  CMN Has_tooltip TRUE
;

FILE_CHOOSER_BUTTON filechooserbutton1
  SET Local_only FALSE
;

COLOR_BUTTON colorbutton1
  SET Rgba "rgb(49,104,160)"
  SET Use_alpha TRUE
  CMN Receives_default TRUE
; 

FONT_BUTTON fontbutton1
  CMN Receives_default TRUE
;

CELL_RENDERER_TEXT cellrenderertext2
;

COMBO_BOX combo_box2
  SET Active 1
  SET Model liststore1
  CMN Sensitive FALSE
  ADD Cell_renderer cellrenderertext2
  SET Attribute cellrenderertext2 "text" 2
;

CELL_RENDERER_TEXT cellrenderertext1
;

COMBO_BOX combo_box1
  SET Active 0
  SET Model liststore1
  ADD Cell_renderer cellrenderertext1
  SET Attribute cellrenderertext1 "text" 2
;

TOGGLE_BUTTON_WITH_LABEL togglebutton4
  SET Label_text "togglebutton"
  CMN Sensitive FALSE
  CMN Receives_default TRUE
  SET Active TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton3
  SET Label_text "togglebutton"
  CMN Receives_default TRUE
  SET Active TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton2
  SET Label_text "togglebutton"
  CMN Sensitive FALSE
  CMN Receives_default TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton1
  SET Label_text "togglebutton"
  CMN Receives_default TRUE
;

VBOX box19
  SET Spacing 10
  ADD togglebutton1
  PACK togglebutton1 Fill FALSE
  ADD togglebutton2
  PACK togglebutton2 Fill FALSE
  PACK togglebutton2 Position 1
  ADD togglebutton3
  PACK togglebutton3 Fill FALSE
  PACK togglebutton3 Position 2
  ADD togglebutton4
  PACK togglebutton4 Fill FALSE
  PACK togglebutton4 Position 3
  ADD combo_box1
  PACK combo_box1 Fill FALSE
  PACK combo_box1 Position 5
  ADD combo_box2
  PACK combo_box2 Fill FALSE
  PACK combo_box1 Position 6
  ADD fontbutton1
  PACK fontbutton1 Fill FALSE
  PACK fontbutton1 Position 6
  ADD colorbutton1
  PACK colorbutton1 Position 8
  ADD filechooserbutton1
  PACK filechooserbutton1 Position 8
  ADD linkbutton1
  PACK linkbutton1 Position 9
  ADD switch1
  PACK switch1 Position 10
  ADD switch2
  PACK switch2 Position 11
;

SEPARATOR separator1
  SET Orientation GTK_ORIENTATION_VERTICAL
;

SPINNER spinner1
  SET Start 
;

SPINNER spinner2
;

SPINNER spinner3
  CMN Sensitive FALSE
;

SPINNER spinner4
  SET Start 
  CMN Sensitive FALSE
;

RADIO_BUTTON_WITH_LABEL radiobutton1
  SET Label_text "radiobutton"
;

RADIO_BUTTON_WITH_LABEL radiobutton2
  SET Label_text "radiobutton"
  SET Join radiobutton1
;

RADIO_BUTTON_WITH_LABEL radiobutton3
  SET Label_text "radiobutton"
  SET Join radiobutton1
  SET Inconsistent TRUE
;

RADIO_BUTTON_WITH_LABEL radiobutton4
  SET Label_text "radiobutton"
  CMN Sensitive FALSE
;

RADIO_BUTTON_WITH_LABEL radiobutton5
  SET Label_text "radiobutton"
  CMN Sensitive FALSE
  SET Join radiobutton3
;

RADIO_BUTTON_WITH_LABEL radiobutton6
  SET Label_text "radiobutton"
  CMN Sensitive FALSE
  SET Join radiobutton3
  SET Inconsistent TRUE
;

CHECK_BUTTON_WITH_LABEL checkbutton6
  SET Label_text "checkbutton"
  SET Inconsistent TRUE
  CMN Sensitive FALSE
;

CHECK_BUTTON_WITH_LABEL checkbutton5
  SET Label_text "checkbutton"
  CMN Sensitive FALSE
;

CHECK_BUTTON_WITH_LABEL checkbutton4
  SET Label_text "checkbutton"
  SET Active TRUE
  CMN Sensitive FALSE
;

CHECK_BUTTON_WITH_LABEL checkbutton3
  SET Label_text "checkbutton"
  SET Inconsistent TRUE
;

CHECK_BUTTON_WITH_LABEL checkbutton2
  SET Label_text "checkbutton"
;

CHECK_BUTTON_WITH_LABEL checkbutton1
  SET Label_text "checkbutton"
  SET Active TRUE
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
  ADD Atach radiobutton1 1 0 1 1
  ADD Atach radiobutton2 1 1 1 1
  ADD Atach radiobutton3 1 2 1 1
  ADD Atach radiobutton4 1 3 1 1
  ADD Atach radiobutton5 1 4 1 1
  ADD Atach radiobutton6 1 5 1 1
  ADD Atach spinner1 2 0 1 1
  ADD Atach spinner2 2 1 1 1
  ADD Atach spinner3 2 2 1 1
  ADD Atach spinner4 2 3 1 1
;

SPIN_BUTTON spin_button2
  CMN Sensitive FALSE
  SET Width_chars 2
  SET Max_width_chars 2
;

SPIN_BUTTON spin_button1
  SET Width_chars 2
  SET Max_width_chars 2
  SET Adjustment adjustment2
;

LABEL label4
  SET Text "label"
  CMN Sensitive FALSE
;

LABEL label3
  SET Text "label"
;

HBOX box18
  SET Spacing 20
  ADD label3
  ADD label4
  PACK label4 Position 1
  ADD spin_button1
  PACK spin_button1 Fill FALSE
  PACK spin_button1 Position 2
  ADD spin_button2
  PACK spin_button2 Fill FALSE
  PACK spin_button2 Position 3
;

CELL_RENDERER_TEXT cellrenderertext3a
;

COMBO_BOX combobox3a
  SET Model lrmodel
  SET Active 2
  ADD Cell_renderer cellrenderertext3a
  SET Attribute cellrenderertext3a "text" 0
;

CELL_RENDERER_TEXT cellrenderertext2a
;

COMBO_BOX combobox2a
  SET Model lrmodel
  SET Active 1
  ADD Cell_renderer cellrenderertext2a
  SET Attribute cellrenderertext2a "text" 0
;

CELL_RENDERER_TEXT cellrenderertext1a
;

COMBO_BOX combobox1a
  SET Model lrmodel
  SET Active 0
  ADD Cell_renderer cellrenderertext1a
  SET Attribute cellrenderertext1a "text" 0
;

HBOX hbox
  STYLE Add_class "linked"
  ADD combobox1a
  PACK combobox1a Expand TRUE
  ADD combobox2a
  PACK combobox2a Expand TRUE
  ADD combobox3a
  PACK combobox3a Expand TRUE
;

BUTTON button224
  SIGNAL "show" button_show
;

ENTRY entry24
  SET Text "entry"
;

HBOX box223
  STYLE Add_class "linked"
  ADD entry24
  PACK entry24 Expand TRUE
  ADD button224
  PACK button224 Fill FALSE
  PACK button224 Position 1
;

ENTRY entry2
  SET Text "entry"
  CMN Sensitive FALSE
;

ENTRY entry1
  SIGNAL "show" entry_show
  SIGNAL "icon-release" on_entry_icon_release
;

COMBO_BOX_TEXT_ENTRY comboboxtext2
  SIGNAL "show" combobox_show
  CMN Sensitive FALSE
;

COMBO_BOX_TEXT_ENTRY comboboxtext1
  SIGNAL "show" combobox_show
;

VBOX box3
  SET Spacing 10
  ADD comboboxtext1
  PACK comboboxtext1 Fill FALSE
  ADD comboboxtext2
  PACK comboboxtext2 Fill FALSE
  PACK comboboxtext2 Position 1
  ADD entry1
  PACK entry1 Fill FALSE
  PACK entry1 Position 2
  ADD entry2
  PACK entry2 Fill FALSE
  PACK entry2 Position 3
  ADD box223
  PACK box223 Position 4
  ADD hbox
  PACK hbox Fill TRUE
  ADD box18
  PACK box18 Fill FALSE
  ADD grid1
  PACK grid1 Fill FALSE

;

HBOX box2
  SET Spacing 10
  ADD box3
  PACK box3 Fill FALSE
  ADD separator1
  PACK separator1 Position 1
  ADD box19
  PACK box19 Fill FALSE
  PACK box19 Position 2
  ADD separator2
  PACK separator2 Position 3
  ADD box20
  PACK box20 Position 4
  ADD separator3
  PACK separator3 Position 5
  ADD box26
  PACK box26 Expand TRUE
  PACK box26 Position 6
  ADD separator4
  PACK separator4 Position 7
  ADD box4
  PACK box4 Expand TRUE
  PACK box4 Position 8
;

VBOX page1
  SET Spacing 10
  ADD box2
  PACK box2 Position 2
  ADD separator5
  PACK separator5 Position 3
  ADD box5
  PACK box5 Expand TRUE
  PACK box5 Position 4
;

STACK toplevel_stack
  SET Transition_duration 1000
  ADD Titled page1 "Page 1" "Page 1"
  ADD Titled page2 "Page 2" "Page 2"
;

VBOX box1
  CMN Margin_top 10
  CMN Margin_bottom 10
  CMN Margin_start 10
  CMN Margin_end 10
  ADD toplevel_stack
;

STACK_SWITCHER stack_switcher
  SET Stack_switcher_stack toplevel_stack
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
  ADD box1
;
