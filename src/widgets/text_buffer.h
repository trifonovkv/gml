/*
 * Creates a new text buffer.
 */
void text_buffer_new(char *widget);

/*  
 * Deletes current contents of buffer , and inserts text instead. If len is -1,
 * text must be nul-terminated. text must be valid UTF-8.
 */
void text_buffer_set_text(char *setting);

/*  
 * Used to keep track of whether the buffer has been modified since the last
 * time it was saved. Whenever the buffer is saved to disk, call
 * gtk_text_buffer_set_modified (buffer , FALSE). When the buffer is modified,
 * it will automatically toggled on the modified bit again. When the modified
 * bit flips, the buffer emits the “modified-changed” signal.
 */
void text_buffer_set_modified(char *setting);

