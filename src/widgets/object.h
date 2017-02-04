/*
 * Sets properties on an object.
 * 
 * Note that the "notify" signals are queued and only emitted (in reverse
 * order) after all properties have been set. See g_object_freeze_notify().
 */
void object_set(char *name, char *value);
