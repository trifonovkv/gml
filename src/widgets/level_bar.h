/*
 * Creates a new GtkLevelBar.
 */
void level_bar_new(char *widget);

/* 
 * Sets the value of the “mode” property.
 */
void level_bar_set_mode(char *setting);

/* 
 * Sets the value of the “value” property.
 */
void level_bar_set_value(char *setting);

/* 
 * Sets the value of the “min-value” property.
 * 
 * You probably want to update preexisting level offsets after calling this
 * function.
 */
void level_bar_set_min_value(char *setting);

/* 
 * Sets the value of the “max-value” property.
 * 
 * You probably want to update preexisting level offsets after calling this
 * function.
 */
void level_bar_set_max_value(char *setting);

/* 
 * Sets the value of the “inverted” property.
 */
void level_bar_set_inverted(char *setting);

/* 
 * Adds a new offset marker on self at the position specified by value . When
 * the bar value is in the interval topped by value (or between value and
 * “max-value” in case the offset is the last one on the bar) a style class
 * named level-name will be applied when rendering the level bar fill. If
 * another offset marker named name exists, its value will be replaced by value
 * .
 */
void level_bar_add_offset_value(char *name, char *value);
