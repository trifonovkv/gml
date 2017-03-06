/*
 * Creates a new GtkToolItem
 */
void tool_item_new(char *widget);

/* 
 * Sets whether tool_item is to be allocated the same size as other homogeneous
 * items. The effect is that all homogeneous items will have the same width as
 * the widest of the items.
 */
void tool_item_set_homogeneous(char *setting);

/*
 * Sets whether tool_item is allocated extra space when there is more room on
 * the toolbar then needed for the items. The effect is that the item gets
 * bigger when the toolbar gets bigger and smaller when the toolbar gets
 * smaller.
 */
void tool_item_set_expand(char *setting);

/* 
 * Sets the text to be displayed as tooltip on the item. See
 * gtk_widget_set_tooltip_text().
 */
void tool_item_set_tooltip_text(char *setting);

/* 
 * Sets the markup text to be displayed as tooltip on the item. See
 * gtk_widget_set_tooltip_markup().
 */
void tool_item_set_tooltip_markup(char *setting);

/* 
 * Sets whether tool_item has a drag window. When TRUE the toolitem can be used
 * as a drag source through gtk_drag_source_set(). When tool_item has a drag
 * window it will intercept all events, even those that would otherwise be sent
 * to a child of tool_item.
 */
void tool_item_set_use_drag_window(char *setting);

/* 
 * Sets whether tool_item is visible when the toolbar is docked horizontally.
 */
void tool_item_set_visible_horizontal(char *setting);

/* 
 * Sets whether tool_item is visible when the toolbar is docked vertically.
 * Some tool items, such as text entries, are too wide to be useful on a
 * vertically docked toolbar. If visible_vertical is FALSE tool_item will not
 * appear on toolbars that are docked vertically.
 */
void tool_item_set_visible_vertical(char *setting);

/* 
 * Sets whether tool_item should be considered important. The GtkToolButton
 * class uses this property to determine whether to show or hide its label when
 * the toolbar style is GTK_TOOLBAR_BOTH_HORIZ. The result is that only tool
 * buttons with the “is_important” property set have labels, an effect known as
 * “priority text”
 */
void tool_item_set_is_important(char *setting);

/* 
 * Sets the GtkMenuItem used in the toolbar overflow menu. The menu_item_id is
 * used to identify the caller of this function and should also be used with
 * gtk_tool_item_get_proxy_menu_item().
 */
void tool_item_set_proxy_menu_item(char *menu_item_id, char *menu_item);

