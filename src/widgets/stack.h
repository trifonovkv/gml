#include"gml.h"

/* 
 * Creates a new GtkStack container.
 */
void stack_new(FILE *out, char *widget);

/*
 * Adds a child to stack . The child is identified by the name . The title will
 * be used by GtkStackSwitcher to represent child in a tab bar, so it should be
 * short.
 */
void stack_add_titled(FILE *out, char *child, char *name, char *title);

/* 
 * Sets the GtkStack to be homogeneous or not. If it is homogeneous, the
 * GtkStack will request the same size for all its children. If it isn't, the
 * stack may change size when a different child becomes visible.
 */
void stack_set_homogeneous(FILE *out, char *setting);

/* 
 * Sets the GtkStack to be horizontally homogeneous or not. If it is
 * homogeneous, the GtkStack will request the same width for all its children.
 * If it isn't, the stack may change width when a different child becomes
 * visible.
 */
void stack_set_hhomogeneous(FILE *out, char *setting);

/* 
 * Sets the GtkStack to be vertically homogeneous or not. If it is homogeneous,
 * the GtkStack will request the same height for all its children. If it isn't,
 * the stack may change height when a different child becomes visible.
 */
void stack_set_vhomogeneous(FILE *out, char *setting);
 
/* 
 * Sets the duration that transitions between pages in stack will take.
 */
void stack_set_transition_duration(FILE *out, int setting);

/* 
 * Sets the type of animation that will be used for transitions between pages
 * in stack  Available types include various kinds of fades and slides.
 * The transition type can be changed without problems at runtime, so it is
 * possible to change the animation based on the page that is about to become
 * current.
 */
void stack_set_transition_type(FILE *out, char *setting);
