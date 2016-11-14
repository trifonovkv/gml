/*
 * Creates a new GtkScale.
 */
void scale_new(char *widget, char *orientation, char *adjustment);

/* 
 * Sets the number of decimal places that are displayed in the value. Also
 * causes the value of the adjustment to be rounded off to this number of
 * digits, so the retrieved value matches the value the user saw.
 */
void scale_set_digits(char *setting);

/*  
 * Specifies whether the current value is displayed as a string next to the
 * slider.
 */
void scale_set_draw_value(char *setting);

/*  
 * If has_origin is set to TRUE (the default), the scale will highlight the
 * part of the scale between the origin (bottom or left side) of the scale and
 * the current value.
 */
void scale_set_has_origin(char *setting);

/* 
 * Sets the position in which the current value is displayed.
 */
void scale_set_value_pos(char *setting);

/*  
 * Adds a mark at value .
 * 
 * A mark is indicated visually by drawing a tick mark next to the scale, and
 * GTK+ makes it easy for the user to position the scale exactly at the marks
 * value.
 * 
 * If markup is not NULL, text is shown next to the tick mark.
 * 
 * To remove marks from a scale, use gtk_scale_clear_marks().
 * 
 * Parameters
 * 
 * scale
 * a GtkScale
 *  
 * value
 * the value at which the mark is placed, must be between the lower and upper
 * limits of the scales’ adjustment
 *  
 * position
 * where to draw the mark. For a horizontal scale, GTK_POS_TOP and GTK_POS_LEFT
 * are drawn above the scale, anything else below. For a vertical scale,
 * GTK_POS_LEFT and GTK_POS_TOP are drawn to the left of the scale, anything
 * else to the right.
 *  
 * markup
 * Text to be shown at the mark, using Pango markup, or NULL.
 * [allow-none]
 */
void scale_add_mark(char *value, char *position, char *markup);

