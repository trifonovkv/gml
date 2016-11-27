void list_store_add_column(char *column_type);

/*
 * Creates a new list store as with n_columns columns each of the types passed
 * in. Note that only types derived from standard GObject fundamental types are
 * supported.
 * 
 * As an example, gtk_list_store_new (3, G_TYPE_INT, G_TYPE_STRING,
 * GDK_TYPE_PIXBUF); will create a new GtkListStore with three columns, of type
 * int, string and GdkPixbuf respectively.
 */
void list_store_new(char *widget);

/* 
 * This function is meant primarily for GObjects that inherit from
 * GtkListStore, and should only be used when constructing a new GtkListStore.
 * It will not function after a row has been added, or a method on the
 * GtkTreeModel interface is called.
 * 
 * n_columns  Number of columns for the list store
 * types      An array length n of GTypes.
 */
void list_store_set_column_types(char *n_columns, char *types);

