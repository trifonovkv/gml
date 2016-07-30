#include"handlers.h"
#include<stdio.h>

void quit_activated(GSimpleAction *action,
                    GVariant      *parameter,
                    gpointer       app)
{
        g_application_quit (G_APPLICATION (app));
}

/*
 *void fmtout.hello(GtkWidget *widget, gpointer data)
 */
void print_hello(GSimpleAction *action,
                 GVariant      *parameter,
                 gpointer       app)
{
        g_print ("Hello World\n");
}
