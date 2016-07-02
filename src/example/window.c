#include<gtk/gtk.h>
#include"handlers.h"
int main(int argc, char **argv)
{
	gtk_init(&argc, &argv);
	GtkWidget *button=gtk_button_new();
	gtk_button_set_label(GTK_BUTTON(button), "Hello World");
	g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);
	GtkWidget *button_box=gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
	gtk_container_add(GTK_CONTAINER(button_box), button);
	GtkWidget *window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Hello");
	gtk_container_add(GTK_CONTAINER(window), button_box);
	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}