/* 
 * Creates a new GtkSpinButton.
 */
void spin_button_new(char *widget);

/* 
 * Replaces the GtkAdjustment associated with spin_button .
 */
void spin_button_set_adjustment(char *setting);

/*
 * Set the precision to be displayed by spin_button. Up to 20 digit precision
 * is allowed.
 */
void spin_button_set_digits(char *setting);

/*
 * Sets the step and page increments for spin_button. This affects how quickly
 * the value changes when the spin button’s arrows are activated.
 */
void spin_button_set_increments(char *step, char *page);

/*
 * Sets the minimum and maximum allowable values for spin_button .
 * 
 * If the current value is outside this range, it will be adjusted to fit
 * within the range, otherwise it will remain unchanged.
 */
void spin_button_set_range(char *min, char *max);

/* 
 * Sets the value of spin_button .
 */
void spin_button_set_value(char *setting);

/*
 * Sets the update behavior of a spin button. This determines whether the spin
 * button is always updated or only when a valid value is set.
 */
void spin_button_set_update_policy(char *setting);

/*
 * Sets the flag that determines if non-numeric text can be typed into the spin
 * button.
 */
void spin_button_set_numeric(char *setting);

/*
 * Increment or decrement a spin button’s value in a specified direction by a
 * specified amount.
 */
void spin_button_spin(char *direction, char *increment);

/*
 * Sets the flag that determines if a spin button value wraps around to the
 * opposite limit when the upper or lower limit of the range is exceeded.
 */
void spin_button_set_wrap(char *setting);

/*
 * Sets the policy as to whether values are corrected to the nearest step
 * increment when a spin button is activated after providing an invalid value.
 */
void spin_button_set_snap_to_ticks(char *setting);

