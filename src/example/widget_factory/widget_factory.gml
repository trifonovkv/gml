ADJUSTMENT adjustment3
  SET Upper 4.0
  SET Value 1.0
  SET Step_increment 1.0
  SET Page_increment 1.0
;

ADJUSTMENT adjustment1
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

TEXT_VIEW textview1
  SET Text "Lorem ipsum dolor sit amet, consectetur adipiscing elit."
  SET Wrap_mode GTK_WRAP_WORD
  SET Left_margin 10
  SET Right_margin 11
/*
  SET Populate_all">1</property>
*/
  CMN Hexpand TRUE
;

SCROLLED_WINDOW scrolledwindow2
  SET Shadow_type GTK_SHADOW_IN
  ADD textview1
  CMN Hexpand TRUE
;
/*
                          </object>
                          <packing>
                            <property name="expand">1</property>
                            <property name="position">1</property>
                          </packing>
                        </child>
                      </object>
                      <packing>
                        <property name="expand">1</property>
                        <property name="position">8</property>
                      </packing>
                    </child>
                  </object>
                  <packing>
                    <property name="position">2</property>
                  </packing>
                </child>
<child>
*/

CELL_RENDERER_TEXT cellrenderertext3
/*
       <property name="ellipsize">end</property>
*/
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
/*
       <property name="ellipsize">end</property>
*/
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
  CMN Hexpand TRUE
;

SCROLLED_WINDOW scrolledwindow1
  CMN Size_request 0 150
  SET Policy GTK_POLICY_AUTOMATIC GTK_POLICY_ALWAYS
  SET Shadow_type GTK_SHADOW_IN
  ADD treeview1
  CMN Hexpand TRUE
;

VBOX box4
  SET Homogeneous TRUE
  SET Spacing 6
  ADD scrolledwindow1
  ADD scrolledwindow2
;

SEPARATOR separator4
  SET Orientation GTK_ORIENTATION_VERTICAL
;

LABEL label18
  SET Text "Etched out"
  SET Label_use_markup TRUE
;

FRAME frame4
  SET Shadow_type GTK_SHADOW_ETCHED_OUT
  SET Label_widget label18
;

LABEL label17
  SET Text "Etched in"
  SET Label_use_markup TRUE
;

FRAME frame3
  SET Label_widget label17
  SET Shadow_type GTK_SHADOW_ETCHED_IN
;

LABEL label2
  SET Text "Out"
  SET Label_use_markup TRUE
;

FRAME frame2
  SET Shadow_type GTK_SHADOW_OUT
  SET Label_widget label2
;

LABEL label1
  SET Text "In"
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
;

SEPARATOR separator3
  SET Orientation GTK_ORIENTATION_VERTICAL
;

SCALE scale4
  ARG GTK_ORIENTATION_VERTICAL
  ARG adjustment1
  CMN Size_request 0 100
  CMN Sensitive FALSE
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value FALSE
  SET Digits -1
;

SCALE scale3
  ARG GTK_ORIENTATION_VERTICAL
  ARG adjustment1
  CMN Size_request 0 100
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value FALSE
  SET Digits -1
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

HBOX hbox1v3
  CMN Vexpand TRUE
  SET Homogeneous TRUE
  SET Spacing 6
  ADD progressbar5
  ADD progressbar6
  ADD scale3
  ADD scale4
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
  ARG adjustment1
  CMN Sensitive FALSE
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value FALSE
;
                                  
SCALE scale1
  ARG GTK_ORIENTATION_HORIZONTAL
  ARG adjustment1
  SET Range_restrict_to_fill_level FALSE
  SET Range_fill_level 75.0
  SET Draw_value FALSE
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

VBOX vbox3h2
  SET Spacing 6
  ADD progressbar1
  ADD progressbar2
  ADD progressbar3
  ADD levelbar1
  ADD levelbar2
  ADD scale1
  ADD scale2
  ADD scale5
  ADD hbox1v3
;

COMBO_BOX_TEXT combo_box1
  SET Active 0
  SIGNAL "show" combobox3_show 
;

COMBO_BOX_TEXT combo_box2
  SET Active 1
  CMN Sensitive FALSE
  SIGNAL "show" combobox3_show 
;

FONT_BUTTON fontbutton1
;

COLOR_BUTTON_WITH_RGBA colorbutton1
  SET Rgba "#31316867a09f"
;
      
FILE_CHOOSER_BUTTON filechooserbutton1
  SET Local_only FALSE
;

LINK_BUTTON_WITH_LABEL linkbutton1
  SET Label_text "link button"
  SET Relief GTK_RELIEF_NONE
  SET Uri "http://www.gtk.org"
  CMN Has_tooltip TRUE
;

SWITCH switch1
  CMN Halign GTK_ALIGN_CENTER
;

SWITCH switch2
  CMN Sensitive FALSE
  CMN Halign GTK_ALIGN_CENTER
;

TOGGLE_BUTTON_WITH_LABEL togglebutton1
  SET Label_text "togglebutton"
  CMN Receives_default TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton2
  SET Label_text "togglebutton"
  CMN Sensitive FALSE
  CMN Receives_default TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton3
  SET Label_text "togglebutton"
  CMN Receives_default TRUE
  SET Active TRUE
;

TOGGLE_BUTTON_WITH_LABEL togglebutton4
  SET Label_text "togglebutton"
  CMN Sensitive FALSE
  CMN Receives_default TRUE
  SET Active TRUE
;

SEPARATOR separator2
  SET Orientation GTK_ORIENTATION_VERTICAL
;

VBOX vbox3h1
  SET Spacing 10
  ADD togglebutton1
  ADD togglebutton2
  ADD togglebutton3
  ADD togglebutton4
  ADD combo_box1
  ADD combo_box2
  ADD fontbutton1
  ADD colorbutton1
  ADD filechooserbutton1
  ADD linkbutton1
  ADD switch1
  ADD switch2
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
  CMN Hexpand TRUE 
  CMN Sensitive FALSE
;

SPIN_BUTTON spin_button1
  CMN Hexpand TRUE 
  SET Adjustment adjustment1
;

LABEL label2s
  CMN Hexpand TRUE 
  SET Text "label"
  CMN Sensitive FALSE
;

LABEL label1s
  CMN Hexpand TRUE 
  SET Text "label"
;

HBOX hbox4v2
  SET Spacing 20
  ADD label1s
  ADD label2s
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
  ADD separator1
  ADD vbox3h1
  ADD separator2
  ADD vbox3h2
  ADD separator3
  ADD box26
  ADD separator4
  ADD box4
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
