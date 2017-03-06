/*
 * Creates a new GtkAccelGroup.
 */
void accel_group_new(char *widget);

/* 
 * Installs an accelerator in this group. 
 */
void accel_group_add_accelerator(char *accelerator
                               , char *flags
                               , char *func
                               , char *user_data);

/* 
 * Sets the modifiers that will be considered significant for keyboard
 * accelerators. The default mod mask depends on the GDK backend in use, but
 * will typically include GDK_CONTROL_MASK | GDK_SHIFT_MASK | GDK_MOD1_MASK |
 * GDK_SUPER_MASK | GDK_HYPER_MASK | GDK_META_MASK. In other words, Control,
 * Shift, Alt, Super, Hyper and Meta. Other modifiers will by default be
 * ignored by GtkAccelGroup.
 * 
 * You must include at least the three modifiers Control, Shift and Alt in any
 * value you pass to this function.
 * 
 * The default mod mask should be changed on application startup, before using
 * any accelerator groups.
 */
void accelerator_set_default_mod_mask(char *setting);


