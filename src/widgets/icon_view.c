#include "gml.h"
#include "fmtout.h"
#include "icon_view.h" 

void icon_view_new(char *widget)
{
        this = syminst(TYPE_ICON_VIEW, widget, widget);

        putdef("GtkWidget *", widget, "gtk_icon_view_new", 0);
}

void icon_view_new_with_area(char *widget, char *setting)
{
        this = syminst(TYPE_ICON_VIEW, widget, widget);
        char *area = wrptype("GTK_CELL_AREA", setting);
  
        putdef("GtkWidget *"
             , widget
             , "gtk_icon_view_new_with_area"
             , 1
             , area);
        
        free(area);
        free(setting);
}

void icon_view_set_model(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);
        char *model = wrptype("GTK_TREE_MODEL", setting);

        putfun("gtk_icon_view_set_model", 2, widget, model);

        free(widget);
        free(setting);
        free(model);
}

void icon_view_set_text_column(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_text_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_markup_column(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_markup_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_pixbuf_column(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_pixbuf_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_selection_mode(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_selection_mode", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_item_orientation(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_item_orientation", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_columns(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_columns", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_item_width(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_item_width", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_spacing(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_spacing", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_row_spacing(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_row_spacing", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_column_spacing(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_column_spacing", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_margin(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_margin", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_item_padding(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_item_padding", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_activate_on_single_click(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_activate_on_single_click"
             , 2
             , widget
             , setting);

        free(widget);
        free(setting);
}

void icon_view_set_tooltip_column(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_tooltip_column", 2, widget, setting);

        free(widget);
        free(setting);
}

void icon_view_set_reorderable(char *setting)
{
        char *widget = wrptype("GTK_ICON_VIEW", this);

        putfun("gtk_icon_view_set_reorderable", 2, widget, setting);

        free(widget);
        free(setting);
}

