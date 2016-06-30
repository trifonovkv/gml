#include"gml.h"

/* 
 * Like gtk_window_set_default_size(), but width and height are interpreted in 
 * terms of the base size and increment set with gtk_window_set_geometry_hints.
 */
void window_set_default_geometry(FILE *out, int width, int height);

/* 
 * If setting is TRUE, then window will request that it’s titlebar should be 
 * hidden when maximized. This is useful for windows that don’t convey any 
 * information other than the application name in the titlebar, to put the 
 * available screen space to better use. If the underlying window system does 
 * not support the request, the setting will not have any effect.
 * 
 * Note that custom titlebars set with gtk_window_set_titlebar() are not 
 * affected by this. The application is in full control of their content and 
 * visibility anyway.
 */
void window_set_hide_titlebar_when_maximized(FILE *out, char *setting);

/* 
 * Asks to keep window above, so that it stays on top. Note that you shouldn’t 
 * assume the window is definitely above afterward, because other entities 
 * (e.g. the user or window manager) could not keep it above, and not all 
 * window managers support keeping windows above. But normally the window will 
 * end kept above. Just don’t write code that crashes if not.
 * 
 * It’s permitted to call this function before showing a window, in which case 
 * the window will be kept above when it appears onscreen initially.
 * 
 * You can track the above state via the “window-state-event” signal on 
 * GtkWidget.
 * 
 * Note that, according to the Extended Window Manager Hints Specification, 
 * the above state is mainly meant for user preferences and should not be 
 * used by applications e.g. for drawing attention to their dialogs.
 */
void window_set_keep_above(FILE *out, char *setting);

/* 
 * Asks to keep window below, so that it stays in bottom. Note that you 
 * shouldn’t assume the window is definitely below afterward, because other 
 * entities (e.g. the user or window manager) could not keep it below, and not 
 * all window managers support putting windows below. But normally the window 
 * will be kept below. Just don’t write code that crashes if not.
 * 
 * It’s permitted to call this function before showing a window, in which case 
 * the window will be kept below when it appears onscreen initially.
 * 
 * You can track the below state via the “window-state-event” signal on 
 * GtkWidget.
 * 
 * Note that, according to the Extended Window Manager Hints Specification, 
 * the above state is mainly meant for user preferences and should not be used 
 * by applications e.g. for drawing attention to their dialogs.
 */
void window_set_keep_below(FILE *out, char *setting);

/* 
 * Startup notification identifiers are used by desktop environment to track 
 * application startup, to provide user feedback and other features. This 
 * function changes the corresponding property on the underlying GdkWindow. 
 * Normally, startup identifier is managed automatically and you should only 
 * use this function in special cases like transferring focus from other 
 * processes. You should use this function before calling gtk_window_present() 
 * or any equivalent function generating a window map event.
 * 
 * This function is only useful on X11, not with other GTK+ targets.
 */
void window_set_startup_id(FILE *out, char *string);

/* 
 * This function is only useful on X11, not with other GTK+ targets.
 * 
 * In combination with the window title, the window role allows a window 
 * manager to identify "the same" window when an application is restarted. So 
 * for example you might set the “toolbox” role on your app’s toolbox window, 
 * so that when the user restarts their session, the window manager can put 
 * the toolbox back in the same place.
 * 
 * If a window already has a unique title, you don’t need to set the role, 
 * since the WM can use the title to identify the window when restoring the 
 * session.
 */
void window_set_role(FILE *out, char *string);

/* 
 * Sets the icon for the window from a named themed icon. See the docs for 
 * GtkIconTheme for more details.
 * 
 * Note that this has nothing to do with the WM_ICON_NAME property which is 
 * mentioned in the ICCCM.
 */
void window_set_icon_name(FILE *out, char *string);

/* 
 * Sets the “mnemonics-visible” property.
 */
void window_set_mnemonics_visible(FILE *out, char *setting);

/* 
 * Sets the “focus-visible” property.
 */
void window_set_focus_visible(FILE *out, char *setting);

/*
 * Creates a new GtkWindow, which is a toplevel window that can contain other 
 * widgets. 
 */
void window_new(FILE *out, char *widget);

/* 
 * Sets the title of the GtkWindow. The title of a window will be displayed in 
 * its title bar; on the X Window System, the title bar is rendered by the 
 * window manager, so exactly how the title appears to users may vary according 
 * to a user’s exact configuration. The title should help a user distinguish 
 * this window from other windows they may have open. A good title might 
 * include the application name and current document filename, for example.
 */
void window_set_title(FILE *out, char *setting);

/* 
 * Sets whether the user can resize a window. Windows are user resizable by 
 * default.
 */
void window_set_resizable(FILE *out, char *setting);

/* 
 * Sets a window modal or non-modal. Modal windows prevent interaction with 
 * other windows in the same application. To keep modal dialogs on top of main 
 * application windows, use gtk_window_set_transient_for() to make the dialog 
 * transient for the parent; most window managers will then disallow lowering 
 * the dialog below the parent.
 */
void window_set_modal(FILE *out, char *setting);

/* 
 * Sets the default size of a window. If the window’s “natural” size (its size 
 * request) is larger than the default, the default will be ignored. More 
 * generally, if the default size does not obey the geometry hints for the 
 * window (gtk_window_set_geometry_hints() can be used to set these explicitly),
 * the default size will be clamped to the nearest permitted size.
 */
void window_set_default_size(FILE *out, int width, int height);

/* 
 * Window gravity defines the meaning of coordinates passed to 
 * gtk_window_move(). See gtk_window_move() and GdkGravity for more details.
 * 
 * The default window gravity is GDK_GRAVITY_NORTH_WEST which will typically 
 * “do what you mean.”
 */
void window_set_gravity(FILE *out, char *setting);

/* 
 * Sets a position constraint for this window. If the old or new constraint is 
 * GTK_WIN_POS_CENTER_ALWAYS, this will also cause the window to be 
 * repositioned to satisfy the new constraint.
 */
void window_set_position(FILE *out, char *setting);

/* 
 * If setting is TRUE, then destroying the transient parent of window will 
 * also destroy window itself. This is useful for dialogs that shouldn’t 
 * persist beyond the lifetime of the main window they're associated with, 
 * for example.
 */
void window_set_destroy_with_parent(FILE *out, char *setting);

/* 
 * By default, windows are decorated with a title bar, resize controls, etc. 
 * Some window managers allow GTK+ to disable these decorations, creating a 
 * borderless window. If you set the decorated property to FALSE using this 
 * function, GTK+ will do its best to convince the window manager not to 
 * decorate the window. Depending on the system, this function may not have 
 * any effect when called on a window that is already visible, so you should 
 * call it before calling gtk_widget_show().
 */
void window_set_decorated(FILE *out, char *setting);

/* 
 * By default, windows have a close button in the window frame. Some window 
 * managers allow GTK+ to disable this button. If you set the deletable 
 * property to FALSE using this function, GTK+ will do its best to convince 
 * the window manager not to show a close button. Depending on the system, 
 * this function may not have any effect when called on a window that is 
 * already visible, so you should call it before calling gtk_widget_show().
 */
void window_set_deletable(FILE *out, char *setting);

/* 
 * By setting the type hint for the window, you allow the window manager to 
 * decorate and handle the window in a way which is suitable to the function 
 * of the window in your application.
 * 
 * This function should be called before the window becomes visible.
 */
void window_set_type_hint(FILE *out, char *setting);

/* 
 * Windows may set a hint asking the desktop environment not to display the 
 * window in the task bar. This function sets this hint.
 */
void window_set_skip_taskbar_hint(FILE *out, char *setting);

/* 
 * Windows may set a hint asking the desktop environment not to display the 
 * window in the pager. This function sets this hint. (A "pager" is any 
 * desktop navigation tool such as a workspace switcher that displays a 
 * thumbnail representation of the windows on the screen.)
 */
void window_set_skip_pager_hint(FILE *out, char *setting);

/* 
 * Windows may set a hint asking the desktop environment to draw the users 
 * attention to the window. This function sets this hint.
 */
void window_set_urgency_hint(FILE *out, char *setting);

/* 
 * Windows may set a hint asking the desktop environment not to receive the 
 * input focus. This function sets this hint.
 */
void window_set_accept_focus(FILE *out, char *setting);

/* 
 * Windows may set a hint asking the desktop environment not to receive the 
 * input focus when the window is mapped. This function sets this hint.
 */
void window_set_focus_on_map(FILE *out, char *setting);
