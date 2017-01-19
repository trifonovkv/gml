/*
 * Creates a new GtkNotebook widget with no pages.
 */
void notebook_new(char *widget);

/* 
 * Appends a page to notebook.
 */
void notebook_append_page(char *child, char *tab_label);

/* 
 * Appends a page to notebook, specifying the widget to use as the label in
 * the popup menu.
 */
void notebook_append_page_menu(char *child, char *tab_label, char *menu_label);

/* 
 * Prepends a page to notebook.
 */
void notebook_prepend_page(char *child, char *tab_label);

/* 
 * Prepends a page to notebook, specifying the widget to use as the label in
 * the popup menu.
 */
void notebook_prepend_page_menu(char *child, char *tab_label, char *menu_label);

/* 
 * Insert a page into notebook at the given position.
 */
void notebook_insert_page(char *child, char *tab_label, char *position);

/* 
 * Insert a page into notebook at the given position, specifying the widget to
 * use as the label in the popup menu.
 */
void notebook_insert_page_menu(char *child
                             , char *tab_label
                             , char *menu_label
                             , char *position);

/*  
 * Sets the edge at which the tabs for switching pages in the notebook are
 * drawn.
 */
void notebook_set_tab_pos(char *setting);

/*  
 * Sets whether to show the tabs for the notebook or not.
 */
void notebook_set_show_tabs(char *setting);

/*  
 * Sets whether a bevel will be drawn around the notebook pages. This only has
 * a visual effect when the tabs are not shown. See
 * gtk_notebook_set_show_tabs().
 */
void notebook_set_show_border(char *setting);

/*  
 * Sets whether the tab label area will have arrows for scrolling if there are
 * too many tabs to fit in the area.
 */
void notebook_set_scrollable(char *setting);

/*  
 * Enables the popup menu: if the user clicks with the right mouse button on
 * the tab labels, a menu with all the pages will be popped up.
 */
void notebook_set_popup_enable(char *setting);

/*  
 * Changes the menu label for the page containing child.
 */
void notebook_set_menu_label(char *child, char *menu_label);

/*
 * Creates a new label and sets it as the menu label of child.
 */
void notebook_set_menu_label_text(char *child, char *menu_text);

/*  
 * Changes the tab label for child . If NULL is specified for tab_label , then
 * the page will have the label “page N”.
 */
void notebook_set_tab_label(char *child, char *tab_label);

/*
 * Creates a new label and sets it as the tab label for the page containing
 * child.
 */
void notebook_set_tab_label_text(char *child, char *tab_text);

/*  
 * Sets whether the notebook tab can be reordered via drag and drop or not.
 */
void notebook_set_tab_reorderable(char *child, char *reorderable);

/* 
 * Sets whether the tab can be detached from notebook to another notebook or
 * widget.
 * 
 * Note that 2 notebooks must share a common group identificator (see
 * gtk_notebook_set_group_name()) to allow automatic tabs interchange between
 * them.
 * 
 * If you want a widget to interact with a notebook through DnD (i.e.: accept
 * dragged tabs from it) it must be set as a drop destination and accept the
 * target “GTK_NOTEBOOK_TAB”. The notebook will fill the selection with a
 * GtkWidget** pointing to the child widget that corresponds to the dropped
 * tab.
 * 
 * Note that you should use gtk_notebook_detach_tab() instead of
 * gtk_container_remove() if you want to remove the tab from the source
 * notebook as part of accepting a drop. Otherwise, the source notebook will
 * think that the dragged tab was removed from underneath the ongoing drag
 * operation, and will initiate a drag cancel animation.
 * If you want a notebook to accept drags from other widgets, you will have to
 * set your own DnD code to do it.
 */
void notebook_set_tab_detachable(char *child, char *detachable);

/*  
 * Sets a group name for notebook.
 * 
 * Notebooks with the same name will be able to exchange tabs via drag and
 * drop. A notebook with a NULL group name will not be able to exchange tabs
 * with any other notebook.
 */
void notebook_set_group_name(char *setting);

/* 
 * Sets widget as one of the action widgets. Depending on the pack type the
 * widget will be placed before or after the tabs. You can use a GtkBox if you
 * need to pack more than one widget on the same side.
 * 
 * Note that action widgets are “internal” children of the notebook and thus
 * not included in the list returned from gtk_container_foreach().
 */
void notebook_set_action_widget(char *child, char *pack_type);

