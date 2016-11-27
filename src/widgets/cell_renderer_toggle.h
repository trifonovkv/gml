/*
 * Creates a new GtkCellRendererToggle. Adjust rendering parameters using
 * object properties. Object properties can be set globally (with
 * g_object_set()). Also, with GtkTreeViewColumn, you can bind a property to a
 * value in a GtkTreeModel. For example, you can bind the “active” property on
 * the cell renderer to a boolean value in the model, thus causing the check
 * button to reflect the state of the model.
 */
void cell_renderer_toggle_new(char *widget);

/*
 * If radio is TRUE, the cell renderer renders a radio toggle (i.e. a toggle in
 * a group of mutually-exclusive toggles). If FALSE, it renders a check toggle
 * (a standalone boolean option). This can be set globally for the cell
 * renderer, or changed just before rendering each cell in the model (for
 * GtkTreeView, you set up a per-row setting using GtkTreeViewColumn to
 * associate model columns with cell renderer properties).
 */
void cell_renderer_toggle_set_radio(char *setting);

/*  
 * Activates or deactivates a cell renderer.
 */
void cell_renderer_toggle_set_active(char *setting);

/*  
 * Makes the cell renderer activatable.
 */
void cell_renderer_toggle_set_activatable(char *setting);

