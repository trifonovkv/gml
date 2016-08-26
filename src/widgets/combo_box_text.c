#include "gml.h"
#include "fmtout.h"
#include "combo_box_text.h"

void combo_box_text_new(char *widget)
{
        syminst(TYPE_COMBO_BOX_TEXT, widget, widget);
        syminst(TYPE_COMBO_BOX_TEXT, "this", widget);
        
        putdef("GtkWidget *", widget, "gtk_combo_box_text_new", 0);
}

void combo_box_text_new_with_entry(char *widget)
{
        syminst(TYPE_COMBO_BOX_TEXT_ENTRY, widget, widget);
        syminst(TYPE_COMBO_BOX_TEXT_ENTRY, "this", widget);
        
        putdef("GtkWidget *", widget, "gtk_combo_box_text_new_with_entry", 0);
}
