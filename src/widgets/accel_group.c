#include "gml.h"
#include "fmtout.h"
#include "accel_group.h" 

void accel_group_new(char *widget)
{
        this = syminst(TYPE_ACCEL_GROUP, widget, widget);

        putdef("GtkAccelGroup *", widget, "gtk_accel_group_new", 0);
}

void accel_group_add_accelerator(char *accelerator
                               , char *flags
                               , char *func
                               , char *user_data)
{
        char *widget        = wrptype("GTK_ACCEL_GROUP", this);
        char *key           = concat(this, "_accel_key");
        char *mods          = concat(this, "_accel_mods");
        char *pkey          = concat("&", key);
        char *pmods         = concat("&", mods);
        char *closure       = concat(this, "_closure");
        char *callback_func = concatv(3, "G_CALLBACK(", func, ")");

        prtstr(3, "guint ", key, ";\n");
        prtstr(3, "GdkModifierType ", mods, ";\n");
        putfun("gtk_accelerator_parse", 3, accelerator, pkey, pmods);

        putdef("GClosure *"
             , closure
             , "g_cclosure_new"
             , 3
             , callback_func
             , user_data
             , "NULL");

        putfun("gtk_accel_group_connect"
             , 5
             , widget
             , key
             , mods
             , flags
             , closure);

        free(accelerator);
        free(flags);
        free(func);
        free(user_data);
        free(widget);
        free(key);
        free(mods);
        free(pkey);
        free(pmods);
        free(closure);
        free(callback_func);
}

void accelerator_set_default_mod_mask(char *setting)
{
        putfun("gtk_accelerator_set_default_mod_mask", 1, setting);

        free(setting);
}

