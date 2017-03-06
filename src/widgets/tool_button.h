/*
 * Creates a new GtkToolButton using icon_widget as contents and label as label.
 */
void tool_button_new(char *widget);

/* 
 * Sets label as the label used for the tool button. The “label” property only
 * has an effect if not overridden by a non-NULL “label-widget” property. If
 * both the “label-widget” and “label” properties are NULL, the label is
 * determined by the “stock-id” property. If the “stock-id” property is also
 * NULL, button will not have a label.
 */
void tool_button_set_label(char *setting);

/* 
 * If set, an underline in the label property indicates that the next character
 * should be used for the mnemonic accelerator key in the overflow menu. For
 * example, if the label property is “_Open” and use_underline is TRUE, the
 * label on the tool button will be “Open” and the item on the overflow menu
 * will have an underlined “O”.
 * 
 * Labels shown on tool buttons never have mnemonics on them; this property
 * only affects the menu item on the overflow menu.
 */
void tool_button_set_use_underline(char *setting);

/* 
 * Sets the icon for the tool button from a named themed icon. See the docs for
 * GtkIconTheme for more details. The “icon-name” property only has an effect
 * if not overridden by non-NULL “label-widget”, “icon-widget” and “stock-id”
 * properties.
 */
void tool_button_set_icon_name(char *setting);

/* 
 * Sets icon as the widget used as icon on button . If icon_widget is NULL the
 * icon is determined by the “stock-id” property. If the “stock-id” property is
 * also NULL, button will not have an icon.
 */
void tool_button_set_icon_widget(char *setting);

/* 
 * Sets label_widget as the widget that will be used as the label for button.
 * If label_widget is NULL the “label” property is used as label. If “label” is
 * also NULL, the label in the stock item determined by the “stock-id” property
 * is used as label. If “stock-id” is also NULL, button does not have a label.
 */
void tool_button_set_label_widget(char *setting);

