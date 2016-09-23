/*
 * Creates a new GtkProgressBar.
 */
void progress_bar_new(char *widget);

/*
 * Causes the progress bar to “fill in” the given fraction of the bar. The
 * fraction should be between 0.0 and 1.0, inclusive.
 */
void progress_bar_set_fraction(char *setting);

/*
 * Progress bars normally grow from top to bottom or left to right. Inverted
 * progress bars grow in the opposite direction.
 */
void progress_bar_set_inverted(char *setting);

/* 
 * Sets whether the progress bar will show text superimposed over the bar. The
 * shown text is either the value of the “text” property or, if that is NULL,
 * the “fraction” value, as a percentage.
 * To make a progress bar that is styled and sized suitably for containing text
 * (even if the actual text is blank), set “show-text” to TRUE and “text” to
 * the empty string (not NULL).
 */
void progress_bar_set_show_text(char *setting);

/* 
 * Causes the given text to appear superimposed on the progress bar.
 * If text is NULL and “show-text” is TRUE, the current value of “fraction”
 * will be displayed as a percentage.
 * If text is non-NULL and “show-text” is TRUE, the text will be displayed. In
 * this case, it will not display the progress percentage. If text is the empty
 * string, the progress bar will still be styled and sized suitably for
 * containing text, as long as “show-text” is TRUE.
 */
void progress_bar_set_text(char *setting);

/* 
 * Sets the mode used to ellipsize (add an ellipsis: "...") the text if there
 * is not enough space to render the entire string.
 */
void progress_bar_set_ellipsize(char *setting);

/* 
 * Sets the fraction of total progress bar length to move the bouncing block
 * for each call to gtk_progress_bar_pulse().
 */
void progress_bar_set_pulse_step(char *setting);
