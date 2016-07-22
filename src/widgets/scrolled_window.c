#include"scrolled_window.h"

void scrolled_window_new(FILE *out, char *widget)
{
        syminst(TYPE_SCROLLED_WINDOW, widget, widget);
        syminst(TYPE_SCROLLED_WINDOW, "this", widget);
        tab_insert(out); 
        fprintf(out, "GtkWidget *%s=gtk_scrolled_window_new(NULL, NULL);\n",
                widget);
}

void scrolled_window_set_policy(FILE *out, char *hscroolbar, char *vscrollbar)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(%s), %s, %s);\n",
                widget, hscroolbar, vscrollbar);
}

void scrolled_window_set_placement(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_placement(GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}

void scrolled_window_set_shadow_type(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}

void scrolled_window_set_hadjustment(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_hadjustment (GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}

void scrolled_window_set_vadjustment(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_vadjustment(GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}

void scrolled_window_set_min_content_width(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW(%s), %d);\n",
                widget, setting);
}

void scrolled_window_set_min_content_height(FILE *out, int setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW(%s), %d);\n",
                widget, setting);
}

void scrolled_window_set_kinetic_scrolling(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_kinetic_scrolling(GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}

void scrolled_window_set_capture_button_press(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_capture_button_press(GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}

void scrolled_window_set_overlay_scrolling(FILE *out, char *setting)
{
        char *widget = getsymval("this");                                      
        tab_insert(out); 
        fprintf(out, 
"gtk_scrolled_window_set_overlay_scrolling(GTK_SCROLLED_WINDOW(%s), %s);\n",
                widget, setting);
}
