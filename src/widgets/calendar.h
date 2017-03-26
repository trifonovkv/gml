/*
 * Creates a new calendar, with the current date being selected.
 */
void calendar_new(char *widget);

/*    
 * Sets display options (whether to display the heading and the month headings).
 */
void calendar_set_display_options(char *setting);

/*
 * Installs a function which provides Pango markup with detail information for
 * each day. Examples for such details are holidays or appointments. That
 * information is shown below each day when “show-details” is set. A tooltip
 * containing with full detail information is provided, if the entire text
 * should not fit into the details area, or if “show-details” is not set.
 * 
 * The size of the details area can be restricted by setting the
 * “detail-width-chars” and “detail-height-rows” properties.
 */
void calendar_set_detail_func(char *func, char *data, char *destroy);

/*
 * Updates the width of detail cells. See “detail-width-chars”.
 */
void calendar_set_detail_width_chars(char *setting);

/*
 * Updates the height of detail cells. See “detail-height-rows”.
 */
void calendar_set_detail_height_rows(char *setting);

