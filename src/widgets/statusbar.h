/*
 * Creates a new GtkStatusbar ready for messages.
 */
void statusbar_new(char *widget);

/*
 * Pushes a new message onto a statusbar’s stack.
 */
void statusbar_push(char *context_id, char *text);
