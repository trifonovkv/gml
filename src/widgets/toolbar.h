/*
 * Creates a new toolbar.
 */
void toolbar_new(char *widget);

/* 
 * Sets whether to show an overflow menu when toolbar doesn’t have room for all
 * items on it. If TRUE, items that there are not room are available through an
 * overflow menu.
 */
void toolbar_set_show_arrow(char *setting);

/*  
 * Alters the view of toolbar to display either icons only, text only, or both.
 */
void toolbar_set_style(char *setting);

/*  
 * This function sets the size of stock icons in the toolbar. You can call it
 * both before you add the icons and after they’ve been added. The size you set
 * will override user preferences for the default icon size.
 * 
 * This should only be used for special-purpose toolbars, normal application
 * toolbars should respect the user preferences for the size of icons.
 */
void toolbar_set_icon_size(char *setting);

