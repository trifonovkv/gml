#include "gml.h"
#include "fmtout.h"
#include "text_buffer.h"

void text_buffer_new(char *widget)
{
        this = syminst(TYPE_TEXT_BUFFER, widget, widget);
                
        putdef("GtkTextBuffer *", widget, "gtk_text_buffer_new", 1, "NULL");
}

void text_buffer_set_text(char *setting)
{
        char *str = concat(this, "_str");
        char *widget = wrptype("GTK_TEXT_BUFFER", this);

        prtstr(5, "char *", str, " = ", setting, ";\n");
         
        putfun("gtk_text_buffer_set_text", 3, widget, str, "-1");

        free(str);
        free(setting);
}

void text_buffer_set_modified(char *setting)
{
        char *widget = wrptype("GTK_TEXT_BUFFER", this);

        putfun("gtk_text_buffer_set_modified", 3, widget, setting);

        free(setting);
}

