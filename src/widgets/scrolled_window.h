#include"gml.h"

/* 
 * Creates a new scrolled window.
 * The two arguments are the scrolled window’s adjustments; these will be
 * shared with the scrollbars and the child widget to keep the bars in sync
 * with the child. Usually you want to pass NULL for the adjustments, which
 * will cause the scrolled window to create them for you.
 */
void scrolled_window_new(FILE *out, char *widget);

/*  
 * Sets the scrollbar policy for the horizontal and vertical scrollbars.
 * 
 * The policy determines when the scrollbar should appear; it is a value from
 * the GtkPolicyType enumeration. If GTK_POLICY_ALWAYS, the scrollbar is always
 * present; if GTK_POLICY_NEVER, the scrollbar is never present; if
 * GTK_POLICY_AUTOMATIC, the scrollbar is present only if needed (that is, if
 * the slider part of the bar would be smaller than the trough — the display is
 * larger than the page size).
 */
void scrolled_window_set_policy(FILE *out, char *hscroolbar, char *vscrollbar);

/* 
 * Sets the placement of the contents with respect to the scrollbars for the
 * scrolled window.
 * 
 * The default is GTK_CORNER_TOP_LEFT, meaning the child is in the top left,
 * with the scrollbars underneath and to the right. Other values in
 * GtkCornerType are GTK_CORNER_TOP_RIGHT, GTK_CORNER_BOTTOM_LEFT, and
 * GTK_CORNER_BOTTOM_RIGHT.
 * 
 * See also gtk_scrolled_window_get_placement() and
 * gtk_scrolled_window_unset_placement().
 */
void scrolled_window_set_placement(FILE *out, char *setting);

/*  
 * Changes the type of shadow drawn around the contents of scrolled_window .
 */
void scrolled_window_set_shadow_type(FILE *out, char *setting);

/*
 * Sets the GtkAdjustment for the horizontal scrollbar.
 */
void scrolled_window_set_hadjustment(FILE *out, char *setting);

/*
 * Sets the GtkAdjustment for the vertical scrollbar.
 */
void scrolled_window_set_vadjustment(FILE *out, char *setting);

/*  
 * Sets the minimum width that scrolled_window should keep visible. Note that
 * this can and (usually will) be smaller than the minimum size of the content.
 */
void scrolled_window_set_min_content_width(FILE *out, int setting);

/*  
 * Sets the minimum height that scrolled_window should keep visible. Note that
 * this can and (usually will) be smaller than the minimum size of the content.
 */
void scrolled_window_set_min_content_height(FILE *out, int setting);

/*  
 * Turns kinetic scrolling on or off. Kinetic scrolling only applies to devices
 * with source GDK_SOURCE_TOUCHSCREEN.
 */
void scrolled_window_set_kinetic_scrolling(FILE *out, char *setting);

/*  
 * Changes the behaviour of scrolled_window wrt. to the initial event that
 * possibly starts kinetic scrolling. When capture_button_press is set to TRUE,
 * the event is captured by the scrolled window, and then later replayed if it
 * is meant to go to the child widget.
 * 
 * This should be enabled if any child widgets perform non-reversible actions
 * on “button-press-event”. If they don't, and handle additionally handle
 * “grab-broken-event”, it might be better to set capture_button_press to
 * FALSE.
 * 
 * This setting only has an effect if kinetic scrolling is enabled.
 */
void scrolled_window_set_capture_button_press(FILE *out, char *setting);

/* 
 * Enables or disables overlay scrolling for this scrolled window.
 */
void scrolled_window_set_overlay_scrolling(FILE *out, char *setting);
