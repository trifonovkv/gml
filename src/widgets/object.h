/*
 * Sets properties on an object.
 */
void object_set(char *name, char *value);

/*
 * Each object carries around a table of associations from strings to pointers.
 * This function lets you set an association.
 */
void object_set_data(char *key, char *data);
