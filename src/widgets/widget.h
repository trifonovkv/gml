void widget_show_all(char *widget);

/*
 * Sets the minimum size of a widget; that is, the widget’s size request 
 * will be at least width by height . You can use this function to force 
 * a widget to be larger than it normally would be.
 * 
 * In most cases, gtk_window_set_default_size() is a better choice for toplevel 
 * windows than this function; setting the default size will still allow users 
 * to shrink the window. Setting the size request will force them to leave the 
 * window at least as large as the size request. When dealing with window 
 * sizes, gtk_window_set_geometry_hints() can be a useful function as well.
 * 
 * Note the inherent danger of setting any fixed size - themes, translations 
 * into other languages, different fonts, and user action can all change the 
 * appropriate size for a given widget. So, it's basically impossible to 
 * hardcode a size that will always be correct.
 * 
 * The size request of a widget is the smallest size a widget can accept while 
 * still functioning well and drawing itself correctly. However in some strange 
 * cases a widget may be allocated less than its requested size, and in many 
 * cases a widget may be allocated more space than it requested.
 * 
 * If the size request in a given direction is -1 (unset), then the “natural” 
 * size request of the widget will be used instead.
 * 
 * The size request set here does not include any margin from the GtkWidget 
 * properties margin-left, margin-right, margin-top, and margin-bottom, but it 
 * does include pretty much all other padding or border properties set by any 
 * subclass of GtkWidget.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   width width widget should request, or -1 to unset
 *   height height widget should request, or -1 to unset
 */
// need separate width from height
void widget_set_size_request(char *width, char *height);

/*
 * Sets the bottom margin of widget . See the “margin-bottom” property.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   margin the bottom margin
 */
void widget_set_margin_bottom(char *setting);

/*
 * Sets the top margin of widget . See the “margin-top” property.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   margin the top margin
 */
void widget_set_margin_top(char *setting);

/*
 * Sets the end margin of widget . See the “margin-end” property.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   margin the end margin
 */
void widget_set_margin_end(char *setting);

/*
 * Sets the start margin of widget . See the “margin-start” property.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   margin the start margin
 */
void widget_set_margin_start(char *setting);

/*
 * Members
 * 
 * GTK_ALIGN_FILL      stretch to fill all space if possible, center if no 
 *                     meaningful way to stretch
 * GTK_ALIGN_START     snap to left or top side, leaving space on right or 
 *                      bottom
 * GTK_ALIGN_END       snap to right or bottom side, leaving space on left or 
 *                      top
 * GTK_ALIGN_CENTER    center natural width of widget inside the allocation
 * GTK_ALIGN_BASELINE  align the widget according to the baseline. Since 3.10.
 */

/*
 * Sets the vertical alignment of widget . See the “valign” property.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   align the vertical alignment
 */
void widget_set_valign(char *setting);

/*
 * Sets the horizontal alignment of widget . See the “halign” property.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   align the horizontal alignment
 */
void widget_set_halign(char *setting);

/*
 * Sets whether the vexpand flag (see gtk_widget_get_vexpand()) will be used.
 * 
 * See gtk_widget_set_hexpand_set() for more detail.
 * 
 * Parameters
 * 
 *   widget the widget
 *   set value for vexpand-set property
 */
void widget_set_vexpand_set(char *setting);

/*
 * Sets whether the widget would like any available extra vertical space.
 * 
 * See gtk_widget_set_hexpand() for more detail.
 * 
 * Parameters
 * 
 *   widget the widget
 *   expand whether to expand
 */
void widget_set_vexpand(char *setting);

/*
 * Sets whether the hexpand flag (see gtk_widget_get_hexpand()) will be used.
 * 
 * The hexpand-set property will be set automatically when you call 
 * gtk_widget_set_hexpand() to set hexpand, so the most likely reason to use 
 * this function would be to unset an explicit expand flag.
 * 
 * If hexpand is set, then it overrides any computed expand value based on 
 * child widgets. If hexpand is not set, then the expand value depends on 
 * whether any children of the widget would like to expand.
 * 
 * There are few reasons to use this function, but it’s here for completeness 
 * and consistency.
 * 
 * Parameters
 * 
 *   widget the widget
 *   set value for hexpand-set property
 */
void widget_set_hexpand_set(char *setting);

/*
 * Sets whether the widget would like any available extra horizontal space. 
 * When a user resizes a GtkWindow, widgets with expand=TRUE generally receive 
 * the extra space. For example, a list or scrollable area or document in your 
 * window would often be set to expand.
 * 
 * Call this function to set the expand flag if you would like your widget to 
 * become larger horizontally when the window has extra room.
 * 
 * By default, widgets automatically expand if any of their children want to 
 * expand. (To see if a widget will automatically expand given its current 
 * children and state, call gtk_widget_compute_expand(). A container can decide 
 * how the expandability of children affects the expansion of the container 
 * by overriding the compute_expand virtual method on GtkWidget.).
 * 
 * Setting hexpand explicitly with this function will override the automatic 
 * expand behavior.
 * 
 * This function forces the widget to expand or not to expand, regardless of 
 * children. The override occurs because gtk_widget_set_hexpand() sets the 
 * hexpand-set property (see gtk_widget_set_hexpand_set()) which causes 
 * the widget’s hexpand value to be used, rather than looking at children and 
 * widget state.
 * 
 * Parameters
 * 
 *   widget the widget
 *   expand whether to expand
 */
void widget_set_hexpand(char *setting);

/*
 * Specifies whether widget will be treated as the default widget within its 
 * toplevel when it has the focus, even if another widget is the default.
 * 
 * See gtk_widget_grab_default() for details about the meaning of “default”.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   receives_default whether or not widget can be a default widget.
 */
void widget_set_receives_default(char *setting);

/*
 * Sets the sensitivity of a widget. A widget is sensitive if the user can 
 * interact with it. Insensitive widgets are “grayed out” and the user can’t 
 * interact with them. Insensitive widgets are known as “inactive”, “disabled”, 
 * or “ghosted” in some other toolkits.
 * 
 * Parameters
 * 
 *   widget a GtkWidget 
 *   sensitive TRUE to make the widget sensitive
 */
void widget_set_sensitive(char *setting);

/*
 * Sets the “no-show-all” property, which determines whether calls to 
 * gtk_widget_show_all() will affect this widget.
 * 
 * This is mostly for use in constructing widget hierarchies with externally 
 * controlled visibility, see GtkUIManager.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   no_show_all the new value for the “no-show-all” property
 */
void widget_set_no_show_all(char *setting);

/*
 * Sets whether the application intends to draw on the widget in an “draw” 
 * handler.
 * 
 * This is a hint to the widget and does not affect the behavior of the GTK+ 
 * core; many widgets ignore this flag entirely. For widgets that do pay 
 * attention to the flag, such as GtkEventBox and GtkWindow, the effect is to 
 * suppress default themed drawing of the widget's background. (Children of 
 * the widget will still be drawn.) The application is then entirely 
 * responsible for drawing the widget background.
 * 
 * Note that the background is still drawn when the widget is mapped.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   app_paintable TRUE if the application will paint on the widget
 */
void widget_set_app_paintable(char *setting);

/*
 * Specifies whether widget can be a default widget. 
 * See gtk_widget_grab_default() for details about the meaning of “default”.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   can_default whether or not widget can be a default widget.
 */
void widget_set_can_default(char *setting);

/*
 * Specifies whether widget can own the input focus. 
 * See gtk_widget_grab_focus() for actually setting the input focus on a widget.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   can_focus whether or not widget can own the input focus.
 */
void widget_set_can_focus(char *setting);

/*
 * Sets the visibility state of widget . Note that setting this to TRUE doesn’t 
 * mean the widget is actually viewable, see gtk_widget_get_visible().
 * 
 * This function simply calls gtk_widget_show() or gtk_widget_hide() but is 
 * nicer to use when the visibility of the widget depends on some condition.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   visible whether the widget should be shown or not
 */
void widget_set_visible(char *setting);

/*
 * Sets the event mask (see GdkEventMask) for a widget. The event mask 
 * determines which events a widget will receive. Keep in mind that different 
 * widgets have different default event masks, and by changing the event mask 
 * you may disrupt a widget’s functionality, so be careful. This function must 
 * be called while a widget is unrealized. Consider gtk_widget_add_events() 
 * for widgets that are already realized, or if you want to preserve the 
 * existing event mask. This function can’t be used with widgets that have 
 * no window. (See gtk_widget_get_has_window()). To get events on those 
 * widgets, place them inside a GtkEventBox and receive events on the event box.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   events event mask
 * 
 * Members
 * 
 * GDK_EXPOSURE_MASK             receive expose events
 * GDK_POINTER_MOTION_MASK       receive all pointer motion events
 * GDK_POINTER_MOTION_HINT_MASK  deprecated. see the explanation above
 * GDK_BUTTON_MOTION_MASK        receive pointer motion events while any button 
 *                               is pressed
 * GDK_BUTTON1_MOTION_MASK       receive pointer motion events while 1 button 
 *                               is pressed
 * GDK_BUTTON2_MOTION_MASK       receive pointer motion events while 2 button 
 *                               is pressed
 * GDK_BUTTON3_MOTION_MASK       receive pointer motion events while 3 button 
 *                               is pressed
 * GDK_BUTTON_PRESS_MASK         receive button press events
 * GDK_BUTTON_RELEASE_MASK       receive button release events
 * GDK_KEY_PRESS_MASK            receive key press events
 * GDK_KEY_RELEASE_MASK          receive key release events
 * GDK_ENTER_NOTIFY_MASK         receive window enter events
 * GDK_LEAVE_NOTIFY_MASK         receive window leave events
 * GDK_FOCUS_CHANGE_MASK         receive focus change events
 * GDK_STRUCTURE_MASK            receive events about window configuration 
 *                               change
 * GDK_PROPERTY_CHANGE_MASK      receive property change events
 * GDK_VISIBILITY_NOTIFY_MASK    receive visibility change events
 * GDK_PROXIMITY_IN_MASK         receive proximity in events
 * GDK_PROXIMITY_OUT_MASK        receive proximity out events
 * GDK_SUBSTRUCTURE_MASK         receive events about window configuration 
 *                               changes of child windows
 * GDK_SCROLL_MASK               receive scroll events
 * GDK_TOUCH_MASK                receive touch events. Since 3.4
 * GDK_SMOOTH_SCROLL_MASK        receive smooth scrolling events. Since 3.4
 * GDK_ALL_EVENTS_MASK           the combination of all the above event masks.
 */
void widget_set_events(char *setting);

/*
 *Installs an accelerator for this widget in accel_group that causes accel_
 *signal to be emitted if the accelerator is activated. The accel_group needs 
 *to be added to the widget’s toplevel via gtk_window_add_accel_group(), and 
 *the signal must be of type G_SIGNAL_ACTION. Accelerators added through this 
 *function are not user changeable during runtime. If you want to support 
 *accelerators that can be changed by the user, use gtk_accel_map_add_entry() 
 *and gtk_widget_set_accel_path() or gtk_menu_item_set_accel_path() instead.
 *
 *Parameters
 *
 *  widget widget to install an accelerator on
 *  accel_signal widget signal to emit on accelerator activation
 *  accel_group accel group for this widget, added to its toplevel
 *  accel_key GDK keyval of the accelerator
 *  accel_mods modifier key combination of the accelerator
 *  accel_flags flag accelerators, e.g. GTK_ACCEL_VISIBLE
 *
 * void gtk_widget_add_accelerator (GtkWidget *widget,
 *                             const gchar *accel_signal,
 *                             GtkAccelGroup *accel_group,
 *                             guint accel_key,
 *                             GdkModifierType accel_mods,
 *                             GtkAccelFlags accel_flags);
 */

/*
 * Request the widget to be rendered partially transparent, with opacity 0 
 * being fully transparent and 1 fully opaque. (Opacity values are clamped to 
 * the [0,1] range.). This works on both toplevel widget, and child widgets, 
 * although there are some limitations:
 * 
 * For toplevel widgets this depends on the capabilities of the windowing 
 * system. On X11 this has any effect only on X screens with a compositing 
 * manager running. See gtk_widget_is_composited(). On Windows it should work 
 * always, although setting a window’s opacity after the window has been shown 
 * causes it to flicker once on Windows.
 * 
 * For child widgets it doesn’t work if any affected widget has a native window,
 * or disables double buffering.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   opacity desired opacity, between 0 and 1
 */
void widget_set_opacity(char *setting);

/*
 * Sets markup as the contents of the tooltip, which is marked up with 
 * the Pango text markup language.
 * 
 * This function will take care of setting “has-tooltip” to TRUE and of 
 * the default handler for the “query-tooltip” signal.
 * 
 * See also the “tooltip-markup” property and gtk_tooltip_set_markup().
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   markup the contents of the tooltip for widget , or NULL.
 */
void widget_set_tooltip_markup(char *setting);

/*
 * Sets the has-tooltip property on widget to has_tooltip . See “has-tooltip” 
 * for more information.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   has_tooltip whether or not widget has a tooltip.
 */
void widget_set_has_tootip(char *setting);

/*
 * Sets text as the contents of the tooltip. This function will take care of 
 * setting “has-tooltip” to TRUE and of the default handler for 
 * the “query-tooltip” signal.
 * 
 * See also the “tooltip-text” property and gtk_tooltip_set_text().
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   text the contents of the tooltip for widget.
 */
void widget_set_tooltip_text(char *setting);

/*
 * Widgets can be named, which allows you to refer to them from a CSS file. 
 * You can apply a style to widgets with a particular name in the CSS file. 
 * See the documentation for the CSS syntax (on the same page as the docs 
 * for GtkStyleContext).
 * 
 * Note that the CSS syntax has certain special characters to delimit and 
 * represent elements in a selector (period, #, >, *...), so using these will 
 * make your widget impossible to match by name. Any combination of 
 * alphanumeric symbols, dashes and underscores will suffice.
 * 
 * Parameters
 * 
 *   widget a GtkWidget
 *   name name for the widget
 */
void widget_set_name(char *setting);
