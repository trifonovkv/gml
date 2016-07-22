#include"handlers.h"
#include<stdio.h>

void quit_activated(GSimpleAction *action,
                    GVariant      *parameter,
                    gpointer       app)
{
        g_application_quit (G_APPLICATION (app));
}

void print_hello(GtkWidget *widget, gpointer data)
{
        g_print ("Hello World\n");
}
