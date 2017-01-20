/*
 * Creates a new GtkRevealer.
 */
void revealer_new(char *widget);

/* 
 * Tells the GtkRevealer to reveal or conceal its child.
 * The transition will be animated with the current transition type of revealer.
 */
void revealer_set_reveal_child(char *setting);

/* 
 * Sets the duration that transitions will take.
 */
void revealer_set_transition_duration(char *setting);

/* 
 * Sets the type of animation that will be used for transitions in revealer.
 * Available types include various kinds of fades and slides.
 */
void revealer_set_transition_type(char *setting);
