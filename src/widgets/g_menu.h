/*
 * Creates a new GMenu.
 * The new menu has no items.
 */
void g_menu_new(char *menu);

/*
 * Creates a new GMenuItem.
 */
void g_menu_item_new(char *widget);

/*
 * Appends item to the end of menu.
 */
void g_menu_append_item(char *setting);

/*
 * Sets the "action" and possibly the "target" attribute of menu_item .
 * 
 * The format of detailed_action is the same format parsed by
 * g_action_parse_detailed_name().
 */
void g_menu_item_set_detailed_action(char *setting);

/*
 * Sets or unsets the "label" attribute of menu_item .
 * 
 * If label is non-NULL it is used as the label for the menu item. If it is
 * NULL then the label attribute is unset.
 */
void g_menu_item_set_label(char *setting);

/*
 * Sets (or unsets) the icon on menu_item .
 * 
 * This call is the same as calling g_icon_serialize() and using the result
 * as the value to g_menu_item_set_attribute_value() for
 * G_MENU_ATTRIBUTE_ICON.
 * 
 * This API is only intended for use with "noun" menu items; things like
 * bookmarks or applications in an "Open With" menu. Don't use it on menu
 * items corresponding to verbs (eg: stock icons for 'Save' or 'Quit').
 * 
 * If icon is NULL then the icon is unset.
 */
void g_menu_item_set_icon(char *setting);

/*
 * Sets or unsets the "section" link of menu_item to section .
 * 
 * The effect of having one menu appear as a section of another is exactly as
 * it sounds: the items from section become a direct part of the menu that
 * menu_item is added to. See g_menu_item_new_section() for more information
 * about what it means for a menu item to be a section.
 */
void g_menu_item_set_section(char *setting);

/*
 * Sets or unsets the "submenu" link of menu_item to submenu .
 * 
 * If submenu is non-NULL, it is linked to. If it is NULL then the link is
 * unset.
 * 
 * The effect of having one menu appear as a submenu of another is exactly as
 * it sounds.
 */
void g_menu_item_set_submenu(char *setting);

/*
 * Sets or unsets an attribute on menu_item .
 * 
 * The attribute to set or unset is specified by attribute . This can be one
 * of the standard attribute names G_MENU_ATTRIBUTE_LABEL,
 * G_MENU_ATTRIBUTE_ACTION, G_MENU_ATTRIBUTE_TARGET, or a custom attribute
 * name. Attribute names are restricted to lowercase characters, numbers and
 * '-'. Furthermore, the names must begin with a lowercase character, must
 * not end with a '-', and must not contain consecutive dashes.
 * 
 * If format_string is non-NULL then the proper position parameters are
 * collected to create a GVariant instance to use as the attribute value. If
 * it is NULL then the positional parameterrs are ignored and the named
 * attribute is unset.
 * 
 * See also g_menu_item_set_attribute_value() for an equivalent call that
 * directly accepts a GVariant.
 */
void g_menu_item_set_attribute(char *attribute
                             , char *format_string
                             , char *value);

/*
 * Creates a link from menu_item to model if non-NULL, or unsets it.
 * 
 * Links are used to establish a relationship between a particular menu item
 * and another menu. For example, G_MENU_LINK_SUBMENU is used to associate a
 * submenu with a particular menu item, and G_MENU_LINK_SECTION is used to
 * create a section. Other types of link can be used, but there is no
 * guarantee that clients will be able to make sense of them. Link types are
 * restricted to lowercase characters, numbers and '-'. Furthermore, the
 * names must begin with a lowercase character, must not end with a '-', and
 * must not contain consecutive dashes.
 */
void g_menu_item_set_link(char *link, char *model);

/*
 * Set accelerator label on menu item.
 */
void g_menu_item_set_accelerator_label(char *accelerator_key
                                     , char *accelerator_mods);
