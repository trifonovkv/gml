/*
 * Creates a GtkSearchBar. You will need to tell it about which widget is going
 * to be your text entry using gtk_search_bar_connect_entry().
 */
void search_bar_new(char *widget);

/*
 * Connects the GtkEntry widget passed as the one to be used in this search
 * bar. The entry should be a descendant of the search bar. This is only
 * required if the entry isn’t the direct child of the search bar (as in our
 * main example).
 */
void search_bar_connect_entry(char *setting);

/* 
 * Switches the search mode on or off.
 */
void search_bar_set_search_mode(char *setting);

/* 
 * Shows or hides the close button. Applications that already have a “search”
 * toggle button should not show a close button in their search bar, as it
 * duplicates the role of the toggle button.
 */
void search_bar_set_show_close_button(char *setting);

