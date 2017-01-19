#include "gml.h"
#include "fmtout.h"
#include "notebook.h" 

void notebook_new(char *widget)
{
        this = syminst(TYPE_NOTEBOOK, widget, widget);

        putdef("GtkWidget *", widget, "gtk_notebook_new", 0);
}

void notebook_append_page(char *child, char *tab_label)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_append_page", 3, widget, child, tab_label);

        free(widget);
        free(child);
        free(tab_label);
}

void notebook_append_page_menu(char *child, char *tab_label, char *menu_label)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_append_page_menu"
             , 4
             , widget
             , child
             , tab_label
             , menu_label);

        free(widget);
        free(child);
        free(tab_label);
        free(menu_label);
}

void notebook_prepend_page(char *child, char *tab_label)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_prepend_page", 3, widget, child, tab_label);

        free(widget);
        free(child);
        free(tab_label);
}

void notebook_prepend_page_menu(char *child, char *tab_label, char *menu_label)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_prepend_page_menu"
             , 4
             , widget
             , child
             , tab_label
             , menu_label);

        free(widget);
        free(child);
        free(tab_label);
        free(menu_label);
}

void notebook_insert_page(char *child, char *tab_label, char *position)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_insert_page"
             , 4
             , widget
             , child
             , tab_label
             , position);

        free(widget);
        free(child);
        free(tab_label);
        free(position);
}

void notebook_insert_page_menu(char *child
                             , char *tab_label
                             , char *menu_label
                             , char *position)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_insert_page_menu"
             , 5
             , widget
             , child
             , tab_label
             , menu_label
             , position);

        free(widget);
        free(child);
        free(tab_label);
        free(menu_label);
        free(position);
}

void notebook_set_tab_pos(char *setting)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_tab_pos", 2, widget, setting);

        free(widget);
        free(setting);
}

void notebook_set_show_tabs(char *setting)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_show_tabs", 2, widget, setting);

        free(widget);
        free(setting);
}

void notebook_set_show_border(char *setting)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_show_border", 2, widget, setting);

        free(widget);
        free(setting);
}

void notebook_set_scrollable(char *setting)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_scrollable", 2, widget, setting);

        free(widget);
        free(setting);
}

void notebook_set_popup_enable(char *setting)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        if (strcmp(setting, "TRUE") == 0) {
                putfun("gtk_notebook_popup_enable", 1, widget);
        } else {
                putfun("gtk_notebook_popup_disable", 1, widget);
        }
      

        free(widget);
        free(setting);
}

void notebook_set_menu_label(char *child, char *menu_label)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_menu_label", 3, widget, child, menu_label);

        free(widget);
        free(child);
        free(menu_label);
}

void notebook_set_menu_label_text(char *child, char *menu_text)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_menu_label_text", 3, widget, child, menu_text);

        free(widget);
        free(child);
        free(menu_text);
}

void notebook_set_tab_label(char *child, char *tab_label)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_tab_label", 3, widget, child, tab_label);

        free(widget);
        free(child);
        free(tab_label);
}

void notebook_set_tab_label_text(char *child, char *tab_text)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_tab_label_text", 3, widget, child, tab_text);

        free(widget);
        free(child);
        free(tab_text);
}

void notebook_set_tab_reorderable(char *child, char *reorderable)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_tab_reorderable"
             , 2
             , widget
             , child
             , reorderable);

        free(widget);
        free(child);
        free(reorderable);
}

void notebook_set_tab_detachable(char *child, char *detachable)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_tab_detachable", 3, widget, child, detachable);

        free(widget);
        free(child);
        free(detachable);
}

void notebook_set_group_name(char *setting)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_group_name", 2, widget, setting);

        free(widget);
        free(setting);
}

void notebook_set_action_widget(char *child, char *pack_type)
{
        char *widget = wrptype("GTK_NOTEBOOK", this);

        putfun("gtk_notebook_set_action_widget", 3, widget, child, pack_type);

        free(widget);
        free(child);
        free(pack_type);
}
