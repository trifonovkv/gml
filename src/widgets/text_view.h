#include"gml.h"

/*
 * Creates a new GtkTextView. If you don’t call gtk_text_view_set_buffer()
 * before using the text view, an empty default buffer will be created for you.
 * Get the buffer with gtk_text_view_get_buffer(). If you want to specify your
 * own buffer, consider gtk_text_view_new_with_buffer().
 */
void text_view_new(FILE *out, char *widget);

/*  
 * Sets the width of GTK_TEXT_WINDOW_LEFT or GTK_TEXT_WINDOW_RIGHT, or the
 * height of GTK_TEXT_WINDOW_TOP or GTK_TEXT_WINDOW_BOTTOM. Automatically
 * destroys the corresponding window if the size is set to 0, and creates the
 * window if the size is set to non-zero. This function can only be used for
 * the “border windows,” it doesn’t work with GTK_TEXT_WINDOW_WIDGET,
 * GTK_TEXT_WINDOW_TEXT, or GTK_TEXT_WINDOW_PRIVATE.
 */
void text_view_set_border_window_size(FILE *out, char *type, int size);

/* 
 * Sets the line wrapping for the view.
 */
void text_view_set_wrap_mode(FILE *out, char *setting);

/*  
 * Sets the default editability of the GtkTextView. You can override this
 * default setting with tags in the buffer, using the “editable” attribute of
 * tags.
 */
void text_view_set_editable(FILE *out, char *setting);

/*  
 * Toggles whether the insertion point is displayed. A buffer with no editable
 * text probably shouldn’t have a visible cursor, so you may want to turn the
 * cursor off.
 */
void text_view_set_cursor_visible(FILE *out, char *setting);

/*  
 * Changes the GtkTextView overwrite mode.
 */
void text_view_set_overwrite(FILE *out, char *setting);

/*  
 * Sets the default number of blank pixels above paragraphs in text_view . Tags
 * in the buffer for text_view may override the defaults.
 */
void text_view_set_pixels_above_lines(FILE *out, int setting);

/*  
 * Sets the default number of pixels of blank space to put below paragraphs in
 * text_view . May be overridden by tags applied to text_view ’s buffer.
 */
void text_view_set_pixels_below_lines(FILE *out, int setting);

/*  
 * Sets the default number of pixels of blank space to leave between
 * display/wrapped lines within a paragraph. May be overridden by tags in
 * text_view ’s buffer.
 */
void text_view_set_pixels_inside_wrap(FILE *out, int setting);

/*  
 * Sets the default justification of text in text_view. Tags in the view’s
 * buffer may override the default.
 */
void text_view_set_justification(FILE *out, char *setting);

/*  
 * Sets the default left margin for text in text_view. Tags in the buffer may
 * override the default.
 */
void text_view_set_left_margin(FILE *out, int setting);

/*  
 * Sets the default right margin for text in the text view. Tags in the buffer
 * may override the default.
 */
void text_view_set_right_margin(FILE *out, int setting);

/*  
 * Sets the default indentation for paragraphs in text_view. Tags in the
 * buffer may override the default.
 */
void text_view_set_indent(FILE *out, int setting);

/*  
 * Sets the behavior of the text widget when the Tab key is pressed. If
 * accepts_tab is TRUE, a tab character is inserted. If accepts_tab is FALSE
 * the keyboard focus is moved to the next widget in the focus chain.
 */
void text_view_set_accepts_tab(FILE *out, char *setting);

/*  
 * Sets the “input-purpose” property which can be used by on-screen keyboards
 * and other input methods to adjust their behaviour.
 */
void text_view_set_input_purpose(FILE *out, char *setting);

/*  
 * Sets the “input-hints” property, which allows input methods to fine-tune
 * their behaviour.
 */
void text_view_set_input_hints(FILE *out, char *setting);
