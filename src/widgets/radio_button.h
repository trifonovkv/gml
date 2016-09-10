/*
 * Creates a new GtkRadioButton. To be of any practical value, a widget should
 * then be packed into the radio button.
 */
void radio_button_new(char *widget);

/* 
 * Creates a new GtkRadioButton with a text label.
 */
void radio_button_new_with_label(char *widget, char *setting);

/* 
 * Creates a new GtkRadioButton containing a label, adding it to the same group
 * as group . The label will be created using gtk_label_new_with_mnemonic(), so
 * underscores in label indicate the mnemonic for the button.
 */
void radio_button_new_with_mnemonic(char *widget, char *setting);

/*
 * Joins a GtkRadioButton object to the group of another GtkRadioButton object
 */
void radio_button_join_group(char *setting);

