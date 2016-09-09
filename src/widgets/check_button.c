#include "gml.h"
#include "fmtout.h"
#include "check_button.h" 

/*
 * Creates a new GtkCheckButton.
 */
void check_button_new(char *widget)
{
        this = syminst(TYPE_CHECK_BUTTON, widget, widget);

        putdef("GtkWidget *", widget, "gtk_check_button_new", 0);
}

/* 
 * Creates a new GtkCheckButton with a GtkLabel to the right of it.
 */
void check_button_new_with_label(char *widget, char *setting)
{
        this = syminst(TYPE_CHECK_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_check_button_new_with_label"
              , 1
              , setting);
}

/*
 * Creates a new GtkCheckButton containing a label. The label will be created
 * using gtk_label_new_with_mnemonic(), so underscores in label indicate the
 * mnemonic for the check button.
 */
void check_button_new_with_mnemonic(char *widget, char *setting)
{
        this = syminst(TYPE_CHECK_BUTTON, widget, widget);

        putdef("GtkWidget *"
              , widget
              , "gtk_check_button_new_with_mnemonic"
              , 1
              , setting);
}


