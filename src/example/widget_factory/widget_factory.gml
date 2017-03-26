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

LIST_STORE lrmodel
  ADD Column 0 G_TYPE_STRING
  SET Row
  SET Id 0 "Left"
  SET Row
  SET Id 0 "Middle"
  SET Row
  SET Id 0 "Right"
;

TEXT_BUFFER textbuffer1
  SET Text "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n\
Nullam fringilla, est ut feugiat ultrices, elit lacus ultricies nibh, \
id commodo tortor nisi id elit.\nClass aptent taciti sociosqu ad litora \
torquent per conubia nostra, per inceptos himenaeos.\nMorbi vel elit erat. \
Maecenas dignissim, dui et pharetra rutrum, tellus lectus rutrum mi, a conval \
is libero nisi quis tellus.\nNulla facilisi. Nullam eleifend lobortis nisl, in \
porttitor tellus malesuada vitae.\nAenean lacus tellus, pellentesque quis \
molestie quis, fringilla in arcu.\nDuis elementum, tellus sed tristique semper, \
metus metus accumsan augue, et porttitor augue orci a libero.\nUt sed justo \
ac felis placerat laoreet sed id sem. Proin mattis tincidunt odio vitae \
tristique.\nMorbi massa libero, congue vitae scelerisque vel, ultricies vel \
nisl.\nVestibulum in tortor diam, quis aliquet quam. Praesent ut justo neque, \
tempus rutrum est.\nDuis eu lectus quam. Vivamus eget metus a mauris molestie \
venenatis pulvinar eleifend nisi.\nNulla facilisi. Pellentesque at dolor sit \
amet purus dapibus pulvinar molestie quis neque.\nSuspendisse feugiat quam quis \
dolor accumsan cursus."
;

TEXT_BUFFER textbuffer2
  SET Text "* Translation updates:\n\
 Aragonese\n\
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

G_MENU_ITEM brownies
  SET Label "Brownies" 
  SET Detailed_action "app.dessert"
  SET Attribute "target" "s" "brownies"
;

G_MENU_ITEM sundae
  SET Label "Banana Sundae" 
  SET Detailed_action "app.dessert"
  SET Attribute "target" "s" "sundae"
;

G_MENU_ITEM bars
  SET Label "Lemon Bars" 
  SET Detailed_action "app.dessert"
  SET Attribute "target" "s" "bars"
;

G_MENU section4_content
  ADD Item brownies
  ADD Item sundae
  ADD Item bars
;

G_MENU_ITEM section4
  SET Section section4_content
;

G_MENU submenu_content
  ADD Item section4
;

G_MENU_ITEM submenu
  SET Label "Dessert"
  SET Submenu submenu_content
;

G_MENU_ITEM cash
  SET Label "Cash"
  SET Detailed_action "app.pay"
  SET Attribute "target" "s" "cash"
  SET Attribute "verb-icon" "s" "document-save-symbolic"
;

G_MENU_ITEM card
  SET Label "Credit Card"
  SET Detailed_action "app.pay"
  SET Attribute "target" "s" "card"
  SET Attribute "verb-icon" "s" "document-send-symbolic"
;

G_MENU_ITEM cheque
  SET Label "Cheque" 
  SET Detailed_action "app.pay"
  SET Attribute "target" "s" "cheque"
  SET Attribute "verb-icon" "s" "document-save-as-symbolic"
;

G_MENU section5_content
  ADD Item cash
  ADD Item card
  ADD Item cheque
;

G_MENU_ITEM section5
  SET Section section5_content
  SET Attribute "display-hint" "s" "horizontal-buttons"
;

G_MENU section3_content
  ADD Item submenu
  ADD Item section5
;

G_MENU_ITEM section3
  SET Section section3_content
;

G_MENU_ITEM water
  SET Label "Water" 
  SET Detailed_action "app.water"
;

G_MENU_ITEM beer
  SET Label "Beer" 
  SET Detailed_action "app.beer"
;

G_MENU_ITEM wine  
  SET Label "Wine" 
  SET Detailed_action "app.wine"
;

G_MENU section2_content
  ADD Item wine
  ADD Item beer
  ADD Item water
;

G_MENU_ITEM section2
  SET Section section2_content
;

G_MENU_ITEM steak
  SET Label "Steak" 
  SET Detailed_action "app.main"
  SET Attribute "target" "s" "steak"
;

G_MENU_ITEM pizza
  SET Label "Pizza" 
  SET Detailed_action "app.main"
  SET Attribute "target" "s" "pizza"
;

G_MENU section1_content
  ADD Item steak
  ADD Item pizza
;

G_MENU_ITEM section1
  SET Section section1_content
;

G_MENU dinner_menu
  ADD Item section1
  ADD Item section2
  ADD Item section3
;


SEPARATOR separator10
  SET Orientation GTK_ORIENTATION_VERTICAL
;

CALENDAR calendar
  CMN Halign GTK_ALIGN_CENTER
;

SEPARATOR separator11
  SET Orientation GTK_ORIENTATION_HORIZONTAL
;

CELL_RENDERER_PIXBUF iconviewcell
  PRT "stock-size" "2"
;

/*
<object class="GtkIconView" id="iconview1">
                                        <property name="can_focus">1</property>
                                        <property name="selection_mode">multiple</property>
                                        <property name="model">iconsmodel</property>
                                        <child>
                                          iconviewcell
                                          <attributes>
                                            <attribute name="icon-name">0</attribute>
                                          </attributes>
                                        </child>
                                      </object>
*/

/*
<object class="GtkScrolledWindow" id="scrolledwindow3">
                                    <property name="can_focus">1</property>
                                    <property name="shadow_type">in</property>
                                    <property name="margin-top">6</property>
                                    <property name="height_request">226</property>
                                    <child>
                                      iconview1
                                    </child>
                                  </object>
*/

/*
<object class="GtkBox"> box16a
                                <property name="orientation">vertical</property>
                                <child>
                                  scrolledwindow3
                                </child>
                                <child>
                                  <object class="GtkToolbar">
                                    <property name="icon-size">1</property>
                                    <property name="toolbar-style">icons</property>
                                    <style>
                                      <class name="inline-toolbar"/>
                                    </style>
                                    <child>
                                      <object class="GtkToolButton" id="decrease_button">
                                        <property name="icon-name">zoom-out-symbolic</property>
                                        <property name="label">Remove item</property>
                                        <signal name="clicked" handler="decrease_icon_size" object="iconview1" swapped="yes"/>
                                      </object>
                                    </child>
                                    <child>
                                      <object class="GtkToolButton" id="increase_button">
                                        <property name="icon-name">zoom-in-symbolic</property>
                                        <property name="label">Add item</property>
                                        <signal name="clicked" handler="increase_icon_size" object="iconview1" swapped="yes"/>
                                      </object>
                                    </child>
                                    <child>
                                      <object class="GtkToolButton" id="reset_button">
                                        <property name="icon-name">zoom-original-symbolic</property>
                                        <property name="label">Refresh</property>
                                        <signal name="clicked" handler="reset_icon_size" object="iconview1" swapped="yes"/>
                                      </object>
                                    </child>
                                  </object>
                                </child>
                              </object>
*/

/*
<object class="GtkExpander" id="expander1">
                            <property name="can_focus">1</property>
                            <property name="expanded">1</property>
                            <child>
                              box16a
                            </child>
                            <child type="label">
                              <object class="GtkLabel" id="label19">
                                <property name="label" translatable="yes">Expander</property>
                              </object>
                            </child>
                          </object>
*/

/*
<object class="GtkBox" id="filler2">
                        <property name="orientation">vertical</property>
                        <property name="spacing">10</property>
                        <child>
                          calendar
                        </child>
                        <child>
                          separator11
                        </child>
                        <child>
                          expander1
                        </child>
                        <child>
                          <object class="GtkButton" id="info_dialog_button">
                            <property name="label" translatable="yes">_Inform</property>
                            <property name="use_underline">1</property>
                          </object>
                        </child>
                        <child>
                          <object class="GtkButton" id="action_dialog_button">
                            <property name="label" translatable="yes">_Act</property>
                            <property name="use_underline">1</property>
                          </object>
                        </child>
                        <child>
                          <object class="GtkButton" id="preference_dialog_button">
                            <property name="label" translatable="yes">_Configure</property>
                            <property name="use_underline">1</property>
                          </object>
                        </child>
                        <child>
                          <object class="GtkButton" id="selection_dialog_button">
                            <property name="label" translatable="yes">_Select</property>
                            <property name="use_underline">1</property>
                          </object>
                        </child>
                      </object>
*/

/*
                    <child>
                      separator10
                    </child>
                    <child>
                      filler2
                    </child>
                  </object>
                </child>
              </object>
              <packing>
                <property name="name">page2</property>
                <property name="title" translatable="yes">Page 2</property>
              </packing>
</child>
*/

SEPARATOR separator8
  SET Orientation GTK_ORIENTATION_HORIZONTAL
;

MENU_ITEM menuitem101
  SET Label "_New"
  SET Use_underline TRUE
;

MENU_ITEM menuitem102
  SET Label "_Open"
  SET Use_underline TRUE
;

MENU_ITEM menuitem103
  SET Label "_Save"
  SET Use_underline TRUE
;

MENU_ITEM menuitem104
  SET Label "Save _As"
  SET Use_underline TRUE
;

SEPARATOR_MENU_ITEM separatormenuitem1
;

MENU_ITEM quitmenuitem
  SET Label "_Quit"
  SET Use_underline TRUE
  SET Accelerator_label GDK_KEY_q GDK_CONTROL_MASK
  PRT "action_name" "app.quit"
;

MENU menu1
  ADD menuitem101
  ADD menuitem102
  ADD menuitem103
  ADD menuitem104
  ADD separatormenuitem1
  ADD quitmenuitem
;

MENU_ITEM menuitem1
  SET Label "_File"
  SET Use_underline TRUE
  SET Submenu menu1
;

MENU_ITEM menuitem106
  SET Label "Cu_t"
  SET Use_underline TRUE
;

MENU_ITEM menuitem107
  SET Label "_Copy"
  SET Use_underline TRUE
;

MENU_ITEM menuitem108
  SET Label "_Paste"
  SET Use_underline TRUE
;

MENU_ITEM deletemenuitem
  SET Label "_Delete"
  SET Use_underline TRUE
  SET Accelerator_label GDK_KEY_Delete GDK_RELEASE_MASK
  PRT "action_name" "win.delete"
;                             

MENU_ITEM searchmenuitem
  SET Label "_Search"
  SET Use_underline TRUE
  SET Accelerator_label GDK_KEY_s GDK_CONTROL_MASK
  PRT "action_name" "win.search"
;

CHECK_MENU_ITEM_WITH_MNEMONIC checkmenuitem1
  SET Mnemonic "_Check"
  SET Use_underline TRUE
;                             

CHECK_MENU_ITEM_WITH_MNEMONIC checkmenuitem2
  SET Mnemonic "_Check"
  SET Active TRUE
  SET Use_underline TRUE
  CMN Sensitive FALSE
;

CHECK_MENU_ITEM_WITH_MNEMONIC checkmenuitem3
  SET Mnemonic "_Check"
  SET Use_underline TRUE
  SET Inconsistent TRUE
;                                                       

CHECK_MENU_ITEM_WITH_MNEMONIC checkmenuitem4
  SET Mnemonic "_Check"
  SET Use_underline TRUE
;

CHECK_MENU_ITEM_WITH_MNEMONIC checkmenuitem5
  SET Mnemonic "_Check"
  SET Use_underline TRUE
  CMN Sensitive FALSE
;

CHECK_MENU_ITEM_WITH_MNEMONIC checkmenuitem6
  SET Mnemonic "_Check"
  SET Inconsistent TRUE
  SET Use_underline TRUE
  CMN Sensitive FALSE
;

SEPARATOR_MENU_ITEM separatormenuitem
;

RADIO_MENU_ITEM_WITH_MNEMONIC radiomenuitem1
  SET Mnemonic "_Radio"
  SET Active TRUE
  SET Use_underline TRUE
;

RADIO_MENU_ITEM_WITH_MNEMONIC radiomenuitem2
  SET Mnemonic "_Radio"
  SET Active TRUE
  SET Use_underline TRUE
  CMN Sensitive FALSE
;

RADIO_MENU_ITEM_WITH_MNEMONIC radiomenuitem3
  SET Mnemonic "_Radio"
  SET Inconsistent TRUE
  SET Use_underline TRUE
;

RADIO_MENU_ITEM_WITH_MNEMONIC radiomenuitem4
  SET Mnemonic "_Radio"
  SET Use_underline TRUE
; 

RADIO_MENU_ITEM_WITH_MNEMONIC radiomenuitem5
  SET Mnemonic "_Radio"
  SET Use_underline TRUE
  CMN Sensitive FALSE
;

RADIO_MENU_ITEM_WITH_MNEMONIC radiomenuitem6
  SET Mnemonic "_Radio"
  SET Use_underline TRUE
  SET Inconsistent TRUE
  CMN Sensitive FALSE
;

MENU togglessubmenu
  ADD checkmenuitem1
  ADD checkmenuitem2
  ADD checkmenuitem3
  ADD checkmenuitem4
  ADD checkmenuitem5
  ADD checkmenuitem6
  ADD separatormenuitem
  ADD radiomenuitem1
  ADD radiomenuitem2
  ADD radiomenuitem3
  ADD radiomenuitem4
  ADD radiomenuitem5
  ADD radiomenuitem6
;

MENU_ITEM togglesmenuitem
  SET Label "Checks & Radios"
  SET Use_underline TRUE
  SET Submenu togglessubmenu
;

MENU menu2
  ADD menuitem106
  ADD menuitem107
  ADD menuitem108
  ADD deletemenuitem
  ADD searchmenuitem
  ADD togglesmenuitem
;

MENU_ITEM menuitem2
  SET Label "_Edit"
  SET Use_underline TRUE
  SET Submenu menu2
;

CHECK_MENU_ITEM_WITH_MNEMONIC darkmenuitem
  SET Mnemonic "_Dark theme"
  SET Use_underline TRUE
  SET Accelerator_label GDK_KEY_d GDK_CONTROL_MASK
  PRT "action_name" "win.dark"
;

CHECK_MENU_ITEM_WITH_MNEMONIC toolbarmenuitem
  SET Mnemonic "_Toolbar"
  SET Active TRUE
  SET Use_underline TRUE
  PRT "action_name" "win.toolbar"
;

CHECK_MENU_ITEM_WITH_MNEMONIC statusbarmenuitem
  SET Mnemonic "_Statusbar"
  SET Active TRUE
  SET Use_underline TRUE
  PRT "action_name" "win.statusbar"
;

MENU_ITEM_WITH_MNEMONIC bgmenuitem
  SET Mnemonic "_Select Background"
  SET Use_underline TRUE
  SET Accelerator_label GDK_KEY_b GDK_CONTROL_MASK
  PRT "action_name" "win.background"
;

MENU view_menu
  ADD darkmenuitem
  ADD toolbarmenuitem
  ADD statusbarmenuitem
  ADD bgmenuitem
;

MENU_ITEM menuitem3
  SET Label "_View"
  SET Use_underline TRUE
  SET Submenu view_menu
;

MENU_ITEM_WITH_MNEMONIC aboutmenuitem
  SET Mnemonic "_About"
  SET Use_underline TRUE
  SET Accelerator_label GDK_KEY_F1 GDK_RELEASE_MASK
  PRT "action_name" "app.about"
;

MENU menu3
  ADD aboutmenuitem
;

MENU_ITEM menuitem4
  SET Label "_Help"
  SET Use_underline TRUE
  SET Submenu menu3
;

MENU_BAR menubar
  ADD menuitem1
  ADD menuitem2
  ADD menuitem3
  ADD menuitem4
;

TOOL_BUTTON toolbutton1a
  SET Label "New"
  SET Icon_name "document-new"
  SET Tooltip_text "Create a new document"
;

TOOL_BUTTON toolbutton2a
  SET Label "Save"
  SET Icon_name "document-save"
  SET Tooltip_text "Save the current document"
;

SEARCH_ENTRY searchentry
;

SEARCH_BAR searchbar
  SET Connect_entry searchentry
  ADD searchentry
;

TOOL_BUTTON toolbutton3a
  SET Label "Search"
  SET Icon_name "edit-find"
  SET Tooltip_text "Search for it"
  PRT "action_name" "win.search"
;

TOOL_BUTTON toolbutton4a
  SET Label "Insert"
  SET Icon_name "insert-image"
  SET Tooltip_text "Insert something"
  CMN Sensitive FALSE
;

TOOLBAR toolbar
  ADD toolbutton1a
  ADD toolbutton2a
  ADD toolbutton3a
  ADD toolbutton4a
;

LABEL label17a
  SET Label "You wanted to delete something."
  CMN Visible TRUE
;

HBOX box11a
  ADD label17a
  CMN Visible TRUE
;

INFO_BAR infobar
  SET Show_close_button TRUE
  ADD Content_area box11a
  SIGNAL "response" info_bar_response 
  CMN Visible FALSE
  CMN No_show_all TRUE
;

/*
<object class="MyTextView" id="text3">
                                        <property name="visible">True</property>
                                        <property name="can_focus">True</property>
                                        <property name="buffer">textbuffer1</property>
                                        <property name="wrap_mode">2</property>
                                        <property name="left_margin">10</property>
                                        <property name="right_margin">10</property>
                                      </object>
*/

TEXT_VIEW text3
  SET Buffer textbuffer1
  SET Wrap_mode GTK_WRAP_WORD
  SET Left_margin 10 
  SET Right_margin 10
;

SCROLLED_WINDOW scrolledwindow2a
  SET Shadow_type GTK_SHADOW_IN
  CMN Vexpand TRUE
  ADD text3
;

STATUSBAR statusbar
  SIGNAL "show" show_statusbar
;

VBOX box12a
  ADD menubar
  ADD toolbar
  ADD searchbar
  ADD infobar
  ADD scrolledwindow2a
  ADD statusbar
;

FRAME page2frame2
  ADD box12a
;

SEPARATOR separator9
  SET Orientation GTK_ORIENTATION_HORIZONTAL
;

LABEL label18a
  SET Label "Left"
;


LABEL label19a
  SET Label "Right"
;

PANED paned1a
  SET Orientation GTK_ORIENTATION_HORIZONTAL
  STYLE Add_class "view"
  ADD label18a
  ADD label19a
;

FRAME panedframe1
  ADD paned1a
;

LABEL label20a
  SET Label "Top"
;

LABEL label21a
  SET Label "Bottom"
;

PANED paned2a
  SET Orientation GTK_ORIENTATION_VERTICAL
  STYLE Add_class "view"
  ADD label20a
  ADD label21a
;

FRAME panedframe2
/*
                                    <property name="expand">1</property>
*/
  ADD paned2a
;

HBOX box14a
  SET Spacing 10
/*
                                <property name="expand">1</property>
*/
  ADD panedframe1
  ADD panedframe2
  PACK panedframe1 Expand TRUE
  PACK panedframe2 Expand TRUE
;

HBOX box13a
  ADD box14a
  PACK box14a Expand TRUE
;

VBOX box15a
  SET Spacing 10
  ADD page2frame2
  ADD separator9
  ADD box13a
  PACK box13a Expand TRUE
;

SWITCH listboxrow1switch
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 12
  CMN Margin_end 12
;

IMAGE listboxrow3image
  SET Image_from_icon_name "object-select-symbolic" GTK_ICON_SIZE_MENU
  CMN Halign GTK_ALIGN_END
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 12
  CMN Margin_end 12
  CMN Opacity 0.0
;

SCALE scale1a
  ARG GTK_ORIENTATION_HORIZONTAL
  ARG adjustment1
  SET Draw_value FALSE
  CMN Halign GTK_ALIGN_END
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 12
  CMN Margin_end 12
  CMN Size_request 150 0
;

IMAGE image1a
  SET Image_from_icon_name "object-select-symbolic" GTK_ICON_SIZE_MENU
  CMN Halign GTK_ALIGN_END
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 12
  CMN Margin_end 12
  CMN Opacity 0.0
;

IMAGE listboxrow5buttonimage  
  SET Image_from_icon_name "appointment-soon-symbolic" GTK_ICON_SIZE_BUTTON
;

BUTTON listboxrow5button
  CMN Halign GTK_ALIGN_END
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 12
  CMN Margin_end 12
  SET Image listboxrow5buttonimage
;

CHECK_BUTTON checkbutton1a
  CMN Halign GTK_ALIGN_END
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 12
  CMN Margin_end 12
;

LABEL label1a
  SET Label "Row 1"
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 6
  CMN Margin_end 6
;

LABEL label2a
  SET Label "Row 2"
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 6
  CMN Margin_end 6
;

LABEL label3a
  SET Label "Row 3"
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 6
  CMN Margin_end 6
;

LABEL label4a
  SET Label "Row 4"
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 6
  CMN Margin_end 6
;

LABEL label5a
  SET Label "Row 5"
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 6
  CMN Margin_end 6
;

LABEL label6a
  SET Label "Row 6"
  CMN Halign GTK_ALIGN_START
  CMN Valign GTK_ALIGN_CENTER
  CMN Margin_top 6
  CMN Margin_bottom 6
  CMN Margin_start 6
  CMN Margin_end 6
;

HBOX box5a
  ADD label1a
  PACK label1a Expand TRUE
  ADD listboxrow1switch
;

HBOX box6a
  ADD label2a
  PACK label2a Expand TRUE
  ADD scale1a
;

HBOX box7a
  ADD label3a
  PACK label3a Expand TRUE
  ADD listboxrow3image
;

HBOX box8a
  ADD label4a
  PACK label4a Expand TRUE
  ADD image1a
;

HBOX box9a
  ADD label5a
  PACK label5a Expand TRUE
  ADD listboxrow5button
;

HBOX box10a
  ADD label6a
  PACK label6a Expand TRUE
  ADD checkbutton1a
;

LIST_BOX_ROW listboxrow1
  SET Activatable FALSE
  SET Selectable FALSE
  ADD box5a
;

LIST_BOX_ROW listboxrow2
  SET Activatable FALSE
  ADD box6a
;

LIST_BOX_ROW listboxrow3
  ADD box7a
;

LIST_BOX_ROW listboxrow4
  ADD box8a
;

LIST_BOX_ROW listboxrow5
  SET Activatable FALSE
  ADD box9a
;

LIST_BOX_ROW listboxrow6
  SET Activatable FALSE
  ADD box10a
;

SIZE_GROUP size_group
  SET Mode GTK_SIZE_GROUP_VERTICAL
  ADD Widget listboxrow1
  ADD Widget listboxrow2
  ADD Widget listboxrow3
  ADD Widget listboxrow4
  ADD Widget listboxrow5
  ADD Widget listboxrow6
; 


LIST_BOX listbox
  SET Selection_mode GTK_SELECTION_NONE
  SET Header_func update_header NULL NULL
  ADD listboxrow1
  ADD listboxrow2
  ADD listboxrow3
  ADD listboxrow4
  ADD listboxrow5
  ADD listboxrow6
  SIGNAL "row-activated" row_activated NULL
;

SCROLLED_WINDOW scrolledwindow1a
  SET Shadow_type GTK_SHADOW_IN
  SET Policy GTK_POLICY_NEVER GTK_POLICY_AUTOMATIC
  SET Min_content_height 200
  ADD listbox
;

SEPARATOR separator7
  SET Orientation GTK_ORIENTATION_HORIZONTAL
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
  ADD separator7
  ADD scrolledwindow1a
;

HBOX box1a
  SET Spacing 10
  ADD box2a
  ADD separator8
  ADD box15a
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
  ARG adjustment1
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
  ARG adjustment1
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
  SET Join_group radiobutton1
;

RADIO_BUTTON_WITH_LABEL radiobutton3
  SET Label_text "radiobutton"
  SET Join_group radiobutton1
  SET Inconsistent TRUE
;

RADIO_BUTTON_WITH_LABEL radiobutton4
  SET Label_text "radiobutton"
  CMN Sensitive FALSE
;

RADIO_BUTTON_WITH_LABEL radiobutton5
  SET Label_text "radiobutton"
  CMN Sensitive FALSE
  SET Join_group radiobutton3
;

RADIO_BUTTON_WITH_LABEL radiobutton6
  SET Label_text "radiobutton"
  CMN Sensitive FALSE
  SET Join_group radiobutton3
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
  SIGNAL "notify::visible-child-name" page_changed_cb
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
  ADD Action "dark" NULL NULL "false" change_theme_state NULL
  ADD Action "transition" NULL NULL "false" change_transition_state 
toplevel_stack
  ADD Action "search" activate_search NULL NULL NULL searchbar
  ADD Action "delete" activate_delete NULL NULL NULL infobar
  ADD Action "busy" get_busy NULL NULL NULL window
  ADD Action "background" activate_background NULL NULL NULL window
  ADD Action "open" activate_open NULL NULL NULL window
  ADD Action "record" activate_record NULL NULL NULL window
  ADD Action "lock" activate_lock NULL NULL NULL window
  ADD Action "statusbar" change_visible NULL NULL NULL statusbar
  ADD Action "toolbar" change_visible NULL NULL NULL toolbar
  CMN Show_all
;

APPLICATION app
  ARG Application_id "org.gtk.WidgetFactory"
  ARG Flags G_APPLICATION_NON_UNIQUE
  ADD Action "about" activate_about NULL NULL NULL app
  ADD Action "quit" activate_quit NULL NULL NULL app
  ADD Action "main" NULL "s" "\"steak\"" NULL NULL
  ADD Action "wine" NULL NULL "false" NULL NULL
  ADD Action "beer" NULL NULL "false" NULL NULL
  ADD Action "water" NULL NULL "true" NULL NULL
  ADD Action "dessert" NULL "s" "\"bars\"" NULL NULL
  ADD Action "pay" NULL "s" NULL NULL NULL
  ADD Window window
  SET Accels_for_action "app.about" "F1"
  SET Accels_for_action "app.quit" "<Primary>q"
  SET Accels_for_action "win.dark" "<Primary>d"
  SET Accels_for_action "win.search" "<Primary>s"
  SET Accels_for_action "win.delete" "Delete"
  SET Accels_for_action "win.background" "<Primary>b"
  SET Accels_for_action "win.open" "<Primary>o"
  SET Accels_for_action "win.record" "<Primary>r"
  SET Accels_for_action "win.lock" "<Primary>l"
;
