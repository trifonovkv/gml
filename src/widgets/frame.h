/*
 * Creates a new GtkFrame, with optional label label. If label is NULL, the
 * label is omitted.
 */
void frame_new(char *widget);

/*
 * Sets the text of the label. If label is NULL, the current label is removed.
 */
/*
 *void frame_set_label(char *setting);
 */

/*
 * Sets the label widget for the frame. This is the widget that will appear
 * embedded in the top edge of the frame as a title.
 */
void frame_set_label_widget(char *setting);

/*
 * Sets the alignment of the frame widget’s label. The default values for a
 * newly created frame are 0.0 and 0.5.
 * 
 * xalign
 * The position of the label along the top edge of the widget. A value of 0.0
 * represents left alignment; 1.0 represents right alignment.
 *  
 * yalign
 * The y alignment of the label. A value of 0.0 aligns under the frame; 1.0
 * aligns above the frame. If the values are exactly 0.0 or 1.0 the gap in the
 * frame won’t be painted because the label will be completely above or below
 * the frame.
 */
void frame_set_label_align(char *xalign, char *yaling);

/*  
 * Sets the shadow type for frame .
 */
void frame_set_shadow_type(char *setting);

