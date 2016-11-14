/*
 * Set the new position of the fill level indicator.
 * 
 * The “fill level” is probably best described by its most prominent use case,
 * which is an indicator for the amount of pre-buffering in a streaming media
 * player. In that use case, the value of the range would indicate the current
 * play position, and the fill level would be the position up to which the
 * file/stream has been downloaded.
 * 
 * This amount of prebuffering can be displayed on the range’s trough and is
 * themeable separately from the trough. To enable fill level display, use
 * gtk_range_set_show_fill_level(). The range defaults to not showing the fill
 * level.
 * 
 * Additionally, it’s possible to restrict the range’s slider position to
 * values which are smaller than the fill level. This is controller by
 * gtk_range_set_restrict_to_fill_level() and is by default enabled.
 */
void range_set_fill_level(char *setting);

/*
 * Sets whether the slider is restricted to the fill level. See
 * gtk_range_set_fill_level() for a general description of the fill level
 * concept.
 */
void range_set_restrict_to_fill_level(char *setting);

/* 
 * Sets whether a graphical fill level is show on the trough. See
 * gtk_range_set_fill_level() for a general description of the fill level
 * concept.
 */
void range_set_show_fill_level(char *setting);

/* 
 * Sets the adjustment to be used as the “model” object for this range widget.
 * The adjustment indicates the current range value, the minimum and maximum
 * range values, the step/page increments used for keybindings and scrolling,
 * and the page size. The page size is normally 0 for GtkScale and nonzero for
 * GtkScrollbar, and indicates the size of the visible area of the widget being
 * scrolled. The page size affects the size of the scrollbar slider.
 */
void range_set_adjustment(char *setting);

/*  
 * Ranges normally move from lower to higher values as the slider moves from
 * top to bottom or left to right. Inverted ranges have higher values at the
 * top or on the right rather than on the bottom or left.
 */
void range_set_inverted(char *setting);

/*  
 * Sets the current value of the range; if the value is outside the minimum or
 * maximum range values, it will be clamped to fit inside them. The range emits
 * the “value-changed” signal if the value changes.
 */
void range_set_value(char *setting);

/*  
 * Sets the step and page sizes for the range. The step size is used when the
 * user clicks the GtkScrollbar arrows or moves GtkScale via arrow keys. The
 * page size is used for example when moving via Page Up or Page Down keys.
 */
void range_set_increments(char *step, char *page);

/*  
 * Sets the allowable values in the GtkRange, and clamps the range value to be
 * between min and max . (If the range has a non-zero page size, it is clamped
 * between min and max - page-size.)
 */
void range_set_range(char *min, char *max);

/*  
 * Sets the number of digits to round the value to when it changes. See
 * “change-value”.
 */
void range_set_round_digits(char *setting);

/* 
 * Sets the sensitivity policy for the stepper that points to the 'lower' end
 * of the GtkRange’s adjustment.
 */
void range_set_lower_stepper_sensitivity(char *setting);

/* 
 * Sets the sensitivity policy for the stepper that points to the 'upper' end
 * of the GtkRange’s adjustment.
 */
void range_set_upper_stepper_sensitivity(char *setting);

/* 
 * If a range is flippable, it will switch its direction if it is horizontal
 * and its direction is GTK_TEXT_DIR_RTL.
 * 
 * See gtk_widget_get_direction().
 */
void range_set_flippable(char *setting);

/* 
 * Sets whether the range’s slider has a fixed size, or a size that depends on
 * its adjustment’s page size.
 * 
 * This function is useful mainly for GtkRange subclasses.
 */
void range_set_slider_size_fixed(char *setting);

