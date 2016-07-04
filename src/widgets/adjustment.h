#include"gml.h"

/*
 * Creates a new GtkAdjustment.
 */
void adjustment_new(FILE *out, char *widget);

/*
 * Sets the GtkAdjustment value. The value is clamped to lie between “lower” and
 * “upper”.
 * Note that for adjustments which are used in a GtkScrollbar, the effective
 * range of allowed values goes from “lower” to “upper” - “page_size”.
 */
void adjustment_set_value(FILE *out, double setting);

/*
 * Updates the “value” property to ensure that the range between lower and upper
 * is in the current page (i.e. between “value” and “value” + “page_size”). If
 * the range is larger than the page size, then only the start of it will be in
 * the current page. A “changed” signal will be emitted if the value is changed.
 */
void adjustment_clamp_page(FILE *out, double lower, double upper);

/*
 * Sets all properties of the adjustment at once.
 * Use this function to avoid multiple emissions of the “changed” signal. See
 * gtk_adjustment_set_lower() for an alternative way of compressing multiple
 * emissions of “changed” into one.
 */
void adjustment_configure(FILE *out, double value,
                                     double lower,
                                     double upper,
                                     double step_increment,
                                     double page_increment,
                                     double page_size);

/*
 * Sets the minimum value of the adjustment.
 * When setting multiple adjustment properties via their individual setters,
 * multiple “changed” signals will be emitted. However, since the emission of
 * the “changed” signal is tied to the emission of the “notify” signals of the
 * changed properties, it’s possible to compress the “changed” signals into one
 * by calling g_object_freeze_notify() and g_object_thaw_notify() around the
 * calls to the individual setters.
 * Alternatively, using a single g_object_set() for all the properties to
 * change, or using gtk_adjustment_configure() has the same effect of
 * compressing “changed” emissions.
 */
void adjustment_set_lower(FILE *out, double setting);

/*
 * Sets the page increment of the adjustment.
 * See gtk_adjustment_set_lower() about how to compress multiple emissions of
 * the “changed” signal when setting multiple adjustment properties.
 */
void adjustment_set_page_increment(FILE *out, double setting);

/*
 * Sets the page size of the adjustment.
 * See gtk_adjustment_set_lower() about how to compress multiple emissions of
 * the GtkAdjustment::changed signal when setting multiple adjustment
 * properties.
 */
void adjustment_set_page_size(FILE *out, double setting);

/*
 * Sets the step increment of the adjustment.
 * See gtk_adjustment_set_lower() about how to compress multiple emissions of
 * the “changed” signal when setting multiple adjustment properties.
 */
void adjustment_set_step_increment(FILE *out, double setting);

/*
 * Sets the maximum value of the adjustment.
 * Note that values will be restricted by upper - page-size if the page-size
 * property is nonzero.
 * See gtk_adjustment_set_lower() about how to compress multiple emissions of
 * the “changed” signal when setting multiple adjustment properties.
 */
void adjustment_set_upper(FILE *out, double setting);
