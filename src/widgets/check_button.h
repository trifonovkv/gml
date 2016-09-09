/*
 * Creates a new GtkCheckButton.
 */
void check_button_new(char *widget);

/* 
 * Creates a new GtkCheckButton with a GtkLabel to the right of it.
 */
void check_button_new_with_label(char *widget, char *setting);

/*
 * Creates a new GtkCheckButton containing a label. The label will be created
 * using gtk_label_new_with_mnemonic(), so underscores in label indicate the
 * mnemonic for the check button.
 */
void check_button_new_with_mnemonic(char *widget, char *setting);

