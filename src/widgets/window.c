#include"window.h" 

char *WINDOW_TYPE = "GTK_WINDOW_TOPLEVEL";

/*
 * void window_set_type(FILE *out, char *setting)
 * {
 *         WINDOW_TYPE = setting;
 * }
 */

void window_set_titlebar(FILE *out, char *titlebar)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_titlebar(GTK_WINDOW(%s), %s);\n",
                widget, titlebar);
}

void window_set_default_geometry(FILE *out, int width, int height)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
                "gtk_window_set_default_geometry(GTK_WINDOW(%s), %d, %d);\n",
                widget, width, height);
}

void window_set_hide_titlebar_when_maximized(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, 
          "gtk_window_set_hide_titlebar_when_maximized(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_keep_above(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_keep_above(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_keep_below(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_keep_below(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_startup_id(FILE *out, char *string)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_startup_id(GTK_WINDOW(%s), %s);\n",
                widget, string);
}

void window_set_role(FILE *out, char *string)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_role(GTK_WINDOW(%s), %s);\n",
                widget, string);
}

void window_set_icon_name(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_icon_name(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_mnemonics_visible(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_mnemonics_visible(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_focus_visible(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_focus_visible(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_decorated(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_decorated(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_gravity(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_gravity(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_type_hint(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_type_hint(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_position(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_position(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_skip_pager_hint(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_skip_pager_hint(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_modal(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_modal(GTK_WINDOW(%s), %s);\n", 
                widget, setting);
}
void window_set_focus_on_map(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_focus_on_map(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}
void window_set_skip_taskbar_hint(FILE *out, char *setting)
{ 
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_skip_taskbar_hint(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_destroy_with_parent(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_destroy_with_parent(GTK_WINDOW(%s), %s);\n",
                widget, setting); 
}
void window_set_accept_focus(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_accept_focus(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_urgency_hint(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_urgency_hint(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

void window_set_deletable(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_deletable(GTK_WINDOW(%s), %s);\n", 
                widget, setting);
}

void window_set_resizable(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_resizable(GTK_WINDOW(%s), %s);\n", 
                widget, setting);
}

void window_new(FILE *out, char *widget)
{
        syminst(TYPE_WINDOW, widget, widget);
        syminst(TYPE_WINDOW, "this", widget);
        tab_insert(out);
        fprintf(out, "GtkWidget *%s=gtk_application_window_new(app);\n",
                widget);
}

void window_set_title(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_title(GTK_WINDOW(%s), %s);\n", 
                widget, setting);
}

void window_set_default_size(FILE *out, int width, int height)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_default_size(GTK_WINDOW(%s), %d, %d);\n", 
                widget, width, height);
}

void window_set_application(FILE *out, char *setting)
{
        char *widget = getsymval("this");
        tab_insert(out);
        fprintf(out, "gtk_window_set_application(GTK_WINDOW(%s), %s);\n",
                widget, setting);
}

