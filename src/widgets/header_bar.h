/*
 * Creates a new GtkHeaderBar widget.
 */
void header_bar_new(char *widget); 

/*
 * Sets the title of the GtkHeaderBar. The title should help a user identify
 * the current view. A good title should not include the application name.
 */
void header_bar_set_title(char *string);
 
/*
 * Sets the subtitle of the GtkHeaderBar. The title should give a user an
 * additional detail to help him identify the current view.
 * 
 * Note that GtkHeaderBar by default reserves room for the subtitle, even if
 * none is currently set. If this is not desired, set the “has-subtitle”
 * property to FALSE.
 */
void header_bar_set_subtitle(char *string);
 
/*
 * Sets whether the header bar should reserve space for a subtitle, even if
 * none is currently set.
 */
void header_bar_set_has_subtitle(char *setting);

/* 
 * Sets a custom title for the GtkHeaderBar.
 * 
 * The title should help a user identify the current view. This supersedes any
 * title set by gtk_header_bar_set_title() or gtk_header_bar_set_subtitle(). To
 * achieve the same style as the builtin title and subtitle, use the “title”
 * and “subtitle” style classes.
 * 
 * You should set the custom title to NULL, for the header title label to be
 * visible again.
 */ 
void header_bar_set_custom_title(char *title_widget);

/* 
 * Adds child to bar, packed with reference to the start of the bar.
 */ 
void header_bar_pack_start(char *child);

/* 
 * Adds child to bar, packed with reference to the end of the bar.
 */ 
void header_bar_pack_end(char *child);

/* 
 * Sets whether this header bar shows the standard window decorations,
 * including close, maximize, and minimize.
 */ 
void header_bar_set_show_close_button(char *setting);

/* 
 * Sets the decoration layout for this header bar, overriding the
 * “gtk-decoration-layout” setting.
 * 
 * There can be valid reasons for overriding the setting, such as a header bar
 * design that does not allow for buttons to take room on the right, or only
 * offers room for a single close button. Split header bars are another example
 * for overriding the setting.
 * 
 * The format of the string is button names, separated by commas. A colon
 * separates the buttons that should appear on the left from those on the
 * right. Recognized button names are minimize, maximize, close, icon (the
 * window icon) and menu (a menu button for the fallback app menu).
 * 
 * For example, “menu:minimize,maximize,close” specifies a menu on the left,
 * and minimize, maximize and close buttons on the right.
 */
void header_bar_set_decoration_layout(char *string);
