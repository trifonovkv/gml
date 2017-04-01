/*
 * Connects a GCallback function to a signal for a particular object.
 * The handler will be called before the default handler of the signal.
 */
void signal_connect(char *signal, char *handler, char *data);

/*
 * Connects a GCallback function to a signal for a particular object.
 * The instance on which the signal is emitted and data will be swapped when
 * calling the handler. This is useful when calling pre-existing functions to
 * operate purely on the data , rather than the instance : swapping the
 * parameters avoids the need to write a wrapper function.
 */
void signal_connect_swapped(char *signal, char *handler, char *data);

