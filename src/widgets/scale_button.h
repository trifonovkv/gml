/*
 * Creates a GtkScaleButton, with a range between min and max, with a stepping
 * of step.
 */
void scale_button_new(char *widget
                    , char *size
                    , char *min
                    , char *max
                    , char *step);

/*
 * Sets the GtkAdjustment to be used as a model for the GtkScaleButton’s scale.
 */
void scale_button_set_adjustment(char *setting);


void scale_button_add_icon(char *setting);

/*
 * Sets the icons to be used by the scale button. For details, see the “icons”
 * property.
 */
void scale_button_set_icons();


/* 
 * Sets the current value of the scale; if the value is outside the minimum or
 * maximum range values, it will be clamped to fit inside them. The scale
 * button emits the “value-changed” signal if the value changes.
 */
void scale_button_set_value(char *setting);

