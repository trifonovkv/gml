#include"gml.h"

void application(FILE *out);

void application_set_name(char *name);

void application_set_flags(char *flags);

void application_set_id(char *id);

/* 
 * Sets zero or more keyboard accelerators that will trigger the given action.
 * The first item in accels will be the primary accelerator, which may be
 * displayed in the UI.
 * To remove all accelerators for an action, use an empty, zero-terminated
 * array for accels .
 */
void application_set_accels_for_action(FILE *out, char *action, char *accels);
