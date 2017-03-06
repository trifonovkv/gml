/*
 * Creates a new GMenu.
 * The new menu has no items.
 */
void g_menu_new(char *menu);

/*
 * Convenience function for appending a new normal menu item to the end of
 * menu .
 */
void g_menu_append_new_item(char *label, char *detailed_action);

/*
 * Convenience function for appending a new section menu item to the end of
 * menu.
 */
void g_menu_append_new_section(char *label, char *section);

/*
 * Convenience function for appending a new submenu menu item to the end of
 * menu.
 */
void g_menu_append_new_submenu(char *label, char *submenu);

/*
 * Sets or unsets an attribute on menu_item.
 * 
 * The attribute to set or unset is specified by attribute . This can be one of
 * the standard attribute names G_MENU_ATTRIBUTE_LABEL,
 * G_MENU_ATTRIBUTE_ACTION, G_MENU_ATTRIBUTE_TARGET, or a custom attribute
 * name. Attribute names are restricted to lowercase characters, numbers and
 * '-'. Furthermore, the names must begin with a lowercase character, must not
 * end with a '-', and must not contain consecutive dashes.
 * 
 * If format_string is non-NULL then the proper position parameters are
 * collected to create a GVariant instance to use as the attribute value. If it
 * is NULL then the positional parameterrs are ignored and the named attribute
 * is unset.
 * 
 * See also g_menu_item_set_attribute_value() for an equivalent call that
 * directly accepts a GVariant.
 */
void g_menu_item_set_attribute(char *attribute, char *format_string);
