#include "gml.h"
#include "fmtout.h"
#include "window.h" 

void window_add_action(char *name
                     , char *activate
                     , char *parameter_type
                     , char *state
                     , char *change_state
                     , char *user_data)
{
        char *dequote_name = dequote(name);
        char *action_var = concat("action_", dequote_name);
        char *state_var = concat("state_", dequote_name);
        char *parameter_type_var = concat("parameter_type_", dequote_name);
        char *action_map = wrptype("G_ACTION_MAP", this);
        char *action_name = wrptype("G_ACTION", action_var);
        char *activate_callback = wrptype("G_CALLBACK", activate);
        char *change_state_callback = wrptype("G_CALLBACK", change_state);

        prtstr(3, "const GVariantType *", parameter_type_var, ";\n");
        prtstr(3, "GSimpleAction *", action_var, ";\n");

        if (strcmp(parameter_type, "NULL") != 0) {
                prtstr(4
                     , parameter_type_var
                     , " = G_VARIANT_TYPE("
                     , parameter_type
                     , ");\n");

        } else {
                prtstr(2, parameter_type_var, " = NULL;\n");
        }

        if (strcmp(state, "NULL") != 0) {
                prtstr(3, "GVariant *", state_var, ";\n");

                putdef(""
                     , state_var
                     , "g_variant_parse"
                     , 5
                     , "NULL"
                     , state
                     , "NULL"
                     , "NULL"
                     , "NULL");
          
                putdef(""
                     , action_var
                     , "g_simple_action_new_stateful"
                     , 3
                     , name
                     , parameter_type_var
                     , state_var);

                prtstr(3, "g_variant_unref(", state_var, ");\n");
      } else {
                putdef(""
                     , action_var
                     , "g_simple_action_new"
                     , 2
                     , name
                     , parameter_type_var);
      }

      if (strcmp(activate, "NULL") != 0)
                putfun("g_signal_connect"
                     , 4
                     , action_var
                     , "\"activate\""
                     , activate_callback
                     , user_data);

      if (strcmp(change_state, "NULL") != 0)
                putfun("g_signal_connect"
                     , 4
                     , action_var
                     , "\"change-state\""
                     , change_state_callback
                     , user_data);

      putfun("g_action_map_add_action", 2, action_map, action_name);
      prtstr(3, "g_object_unref(", action_var, ");\n");

      free(name);
      free(dequote_name);
      free(activate);
      free(parameter_type);
      free(parameter_type_var);
      free(state);
      free(state_var);
      free(change_state);
      free(user_data);
      free(action_var);
      free(action_map);
      free(action_name);
      free(activate_callback);
      free(change_state_callback);
}

void window_add_accel_group(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_add_accel_group", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_titlebar(char *titlebar)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_titlebar", 2, widget, titlebar);

        free(widget);
}

void window_set_default_geometry(char *width, char *height)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_default_geometry", 3, widget, width, height);

        free(widget);
        free(width);
        free(height);
}

void window_set_hide_titlebar_when_maximized(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_hide_titlebar_when_maximized"
              , 2
              , widget
              , setting);

        free(widget);
        free(setting);
}

void window_set_keep_above(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_keep_above", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_keep_below(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_keep_below", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_startup_id(char *string)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_startup_id", 2, widget, string);

        free(widget);
        free(string);
}

void window_set_role(char *string)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_role", 2, widget, string);

        free(widget);
        free(string);
}

void window_set_icon_name(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_icon_name", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_mnemonics_visible(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_mnemonics_visible", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_focus_visible(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_focus_visible", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_decorated(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_decorated", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_gravity(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_gravity", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_type_hint(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_type_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_position(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_position", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_skip_pager_hint(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_skip_pager_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_modal(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_modal", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_focus_on_map(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_focus_on_map", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_skip_taskbar_hint(char *setting)
{ 
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_skip_taskbar_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_destroy_with_parent(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_destroy_with_parent", 2, widget, setting); 

        free(widget);
        free(setting);
}

void window_set_accept_focus(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_accept_focus", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_urgency_hint(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_urgency_hint", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_deletable(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_deletable", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_resizable(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_resizable", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_new(char *widget)
{
        this = syminst(TYPE_WINDOW, widget, widget);

        putdef("GtkWidget *"
             , widget
             , "gtk_application_window_new"
             , 1
             , APP_VAR_NAME );
}

void window_set_title(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_title", 2, widget, setting);

        free(widget);
        free(setting);
}

void window_set_default_size(char *width, char *height)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_default_size", 3, widget, width, height);

        free(widget);
        free(width);
        free(height);
}

void window_set_application(char *setting)
{
        char *widget = wrptype("GTK_WINDOW", this);

        putfun("gtk_window_set_application", 2, widget, setting);

        free(widget);
        free(setting);
}

