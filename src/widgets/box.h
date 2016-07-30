/*
 * Creates a new GtkBox.
 */
void box_horizontal_new (char *widget);
void box_vertical_new   (char *widget);

/*
 *
 * void
 * gtk_box_pack_start (GtkBox *box,
 *                     GtkWidget *child,
 *                     gboolean expand,
 *                     gboolean fill,
 *                     guint padding);
 * Adds child to box , packed with reference to the start of box. 
 * The child is packed after any other child packed with reference to 
 * the start of box .
 * 
 * Parameters
 * 
 * box      a GtkBox
 * child    the GtkWidget to be added to box
 * expand   TRUE if the new child is to be given extra space allocated to box.
 * The extra space will be divided evenly between all children that use this 
 * option
 * fill     TRUE if space given to child by the expand option is actually 
 * allocated to child , rather than just padding it. This parameter has no 
 * effect if expand is set to FALSE. A child is always allocated the full 
 * height of a horizontal GtkBox and the full width of a vertical GtkBox. 
 * This option affects the other dimension
 * padding  extra space in pixels to put between this child and its neighbors,
 * over and above the global amount specified by “spacing” property. If child
 * is a widget at one of the reference ends of box, then padding pixels are 
 * also put between child and the reference edge of box
 *
 */

/* 
 * void
 * gtk_box_pack_end (GtkBox *box,
 *                   GtkWidget *child,
 *                   gboolean expand,
 *                   gboolean fill,
 *                   guint padding);
 * Adds child to box , packed with reference to the end of box . The child 
 * is packed after (away from end of) any other child packed with reference 
 * to the end of box .
 * 
 * Parameters
 * 
 * box      a GtkBox
 * child    the GtkWidget to be added to box
 * expand   TRUE if the new child is to be given extra space allocated to box.
 * The extra space will be divided evenly between all children of box that 
 * use this option
 * fill     TRUE if space given to child by the expand option is actually 
 * allocated to child, rather than just padding it. This parameter has no 
 * effect if expand is set to FALSE. A child is always allocated the full 
 * height of a horizontal GtkBox and the full width of a vertical GtkBox. 
 * This option affects the other dimension
 * padding  extra space in pixels to put between this child and its neighbors,
 * over and above the global amount specified by “spacing” property. If child
 * is a widget at one of the reference ends of box, then padding pixels are 
 * also put between child and the reference edge of box
 *
 */

/* 
 * Sets the “homogeneous” property of box , controlling whether or not all 
 * children of box are given equal space in the box.
 */
void box_set_homogeneous(char *setting);

/* 
 * Sets the “spacing” property of box , which is the number of pixels to 
 * place between children of box .
 */
void box_set_spacing(char *setting);

/*
 * Moves child to a new position in the list of box children. The list 
 * contains widgets packed GTK_PACK_START as well as widgets packed 
 * GTK_PACK_END, in the order that these widgets were added to box .
 * 
 * A widget’s position in the box children list determines where the widget 
 * is packed into box . A child widget at some position in the list will be 
 * packed just after all other widgets of the same packing type that appear 
 * earlier in the list.
 */
void box_reorder_child(char *child, char *setting);

/* 
 * Sets the way child is packed into box.
 */
void box_set_pack_type  (char *child, char *setting);
void box_set_expand     (char *child, char *setting);
void box_set_fill       (char *child, char *setting);
void box_set_padding    (char *child, char *setting);

/* 
 * Sets the baseline position of a box. This affects only horizontal boxes 
 * with at least one baseline aligned child. If there is more vertical 
 * space available than requested, and the baseline is not allocated by the 
 * parent then position is used to allocate the baseline wrt the extra space 
 * available.
 */
void box_set_baseline_position(char *setting);

/* 
 * Sets a center widget; that is a child widget that will be centered with 
 * respect to the full width of the box, even if the children at either side 
 * take up different amounts of space.
 */
void box_set_center_widget(char *child);

