void editable_set_editable(char *setting);

/*
 * Creates a new entry.
 */
void entry_new(char *widget);
 
/* 
 * Sets the text in the widget to the given value, replacing the current 
 * contents.
 */
void entry_set_text(char *setting);

/* 
 * Sets whether the contents of the entry are visible or not. When visibility 
 * is set to FALSE, characters are displayed as the invisible char, and will 
 * also appear that way when the text in the entry widget is copied elsewhere.
 * 
 * By default, GTK+ picks the best invisible character available in the 
 * current font, but it can be changed with gtk_entry_set_invisible_char().
 * 
 * Note that you probably want to set “input-purpose” to 
 * GTK_INPUT_PURPOSE_PASSWORD or GTK_INPUT_PURPOSE_PIN to inform input 
 * methods about the purpose of this entry, in addition to setting visibility 
 * to FALSE.
 */
void entry_set_visibility(char *setting);

/* 
 * void
 * gtk_entry_set_invisible_char (GtkEntry *entry,
 *                               gunichar ch);
 * Sets the character to use in place of the actual text when gtk_entry_set_
 * visibility() has been called to set text visibility to FALSE. i.e. this is 
 * the character used in “password mode” to show the user how many characters 
 * have been typed. By default, GTK+ picks the best invisible char available 
 * in the current font. If you set the invisible char to 0, then the user will 
 * get no feedback at all; there will be no text on the screen as they type.
 * 
 * Parameters
 * 
 * entry  a GtkEntry
 * ch     a Unicode character
 */

/* 
 * Sets the maximum allowed length of the contents of the widget. If the 
 * current contents are longer than the given length, then they will be 
 * truncated to fit.
 */
void entry_set_max_length(char *setting);

/* 
 * If setting is TRUE, pressing Enter in the entry will activate the default 
 * widget for the window containing the entry. This usually means that the 
 * dialog box containing the entry will be closed, since the default widget 
 * is usually one of the dialog buttons.
 * 
 * (For experts: if setting is TRUE, the entry calls gtk_window_activate_
 * default() on the window containing the entry, in the default handler for 
 * the “activate” signal.)
 */
void entry_set_activates_default(char *setting);

/* 
 * Sets whether the entry has a beveled frame around it.
 */
void entry_set_has_frame(char *setting);

/* 
 * gtk_entry_set_width_chars ()
 * 
 * void
 * gtk_entry_set_width_chars (GtkEntry *entry,
 *                            gint n_chars);
 * Changes the size request of the entry to be about the right size for 
 * n_chars characters. Note that it changes the size request, the size can 
 * still be affected by how you pack the widget into containers. If n_chars 
 * is -1, the size reverts to the default entry size.
 * 
 * Parameters
 * 
 * entry    a GtkEntry
 * n_chars  width in chars
 */

/* 
 * Sets the desired maximum width in characters of entry .
 */
void entry_set_max_width_chars(char *setting);

/* 
 * Sets the alignment for the contents of the entry. This controls the 
 * horizontal positioning of the contents when the displayed text is shorter 
 * than the width of the entry.
 */
void entry_set_alignment(char *setting);

/* 
 * Sets text to be displayed in entry when it is empty and unfocused. This can 
 * be used to give a visual hint of the expected contents of the GtkEntry.
 * 
 * Note that since the placeholder text gets removed when the entry received 
 * focus, using this feature is a bit problematic if the entry is given the 
 * initial focus in a window. Sometimes this can be worked around by delaying 
 * the initial focus setting until the first key event arrives.
 */
void entry_set_placeholder_text(char *setting);

/* 
 * Sets whether the text is overwritten when typing in the GtkEntry.
 */
void entry_set_overwrite_mode(char *setting);

/* 
 * gtk_entry_set_icon_from_icon_name ()
 * 
 * void
 * gtk_entry_set_icon_from_icon_name (GtkEntry *entry,
 *                                    GtkEntryIconPosition icon_pos,
 *                                    const gchar *icon_name);
 * Sets the icon shown in the entry at the specified position from the current 
 * icon theme.
 * 
 * If the icon name isn’t known, a “broken image” icon will be displayed 
 * instead.
 * 
 * If icon_name is NULL, no icon will be shown in the specified position.
 * 
 * Parameters
 * 
 * entry      A GtkEntry
 * icon_pos   The position at which to set the icon
 * icon_name  An icon name, or NULL.
 */
 
/* 
 * gtk_entry_set_icon_activatable ()
 * 
 * void
 * gtk_entry_set_icon_activatable (GtkEntry *entry,
 *                                 GtkEntryIconPosition icon_pos,
 *                                 gboolean activatable);
 * Sets whether the icon is activatable.
 * 
 * Parameters
 * 
 * entry        A GtkEntry
 * icon_pos     Icon position
 * activatable  TRUE if the icon should be activatable
 */
 
/* 
 * gtk_entry_set_icon_sensitive ()
 * 
 * void
 * gtk_entry_set_icon_sensitive (GtkEntry *entry,
 *                               GtkEntryIconPosition icon_pos,
 *                               gboolean sensitive);
 * Sets the sensitivity for the specified icon.
 * 
 * Parameters
 * 
 * entry      A GtkEntry
 * icon_pos   Icon position
 * sensitive  Specifies whether the icon should appear sensitive or insensitive
 */

/* 
 * gtk_entry_set_icon_tooltip_text ()
 * 
 * void
 * gtk_entry_set_icon_tooltip_text (GtkEntry *entry,
 *                                  GtkEntryIconPosition icon_pos,
 *                                  const gchar *tooltip);
 * Sets tooltip as the contents of the tooltip for the icon at the specified 
 * position.
 * 
 * Use NULL for tooltip to remove an existing tooltip.
 * 
 * Parameters
 * 
 * entry    a GtkEntry
 * icon_pos the icon position
 * tooltip  the contents of the tooltip for the icon, or NULL.
 */

/* 
 * gtk_entry_set_icon_tooltip_markup ()
 * 
 * void
 * gtk_entry_set_icon_tooltip_markup (GtkEntry *entry,
 *                                    GtkEntryIconPosition icon_pos,
 *                                    const gchar *tooltip);
 * Sets tooltip as the contents of the tooltip for the icon at the specified 
 * position. tooltip is assumed to be marked up with the Pango text markup 
 * language.
 * 
 * Use NULL for tooltip to remove an existing tooltip.
 * 
 * 
 * Parameters
 * 
 * entry    a GtkEntry
 * icon_pos the icon position
 * tooltip  the contents of the tooltip for the icon, or NULL.
 */

/* 
 * Sets the “input-purpose” property which can be used by on-screen keyboards 
 * and other input methods to adjust their behaviour.
 */
void entry_set_input_purpose(char *setting);
