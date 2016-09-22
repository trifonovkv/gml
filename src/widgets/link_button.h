/*
 * Creates a new GtkLinkButton with the URI as its text.
 */
void link_button_new(char *widget);

/*
 * Creates a new GtkLinkButton containing a label.
 */   
void link_button_new_with_label(char *wdiget, char *label);

/* 
 * Sets uri as the URI where the GtkLinkButton points. As a side-effect this
 * unsets the “visited” state of the button.
 */
void link_button_set_uri(char *setting);

/* 
 * Sets the “visited” state of the URI where the GtkLinkButton points. See
 * gtk_link_button_get_visited() for more details.
 */
void link_button_set_visited(char *setting);
