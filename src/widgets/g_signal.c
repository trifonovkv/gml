#include "gml.h"
#include "fmtout.h"
#include "g_signal.h" 

void signal_connect(char *signal, char *handler, char *data)
{
        char *widget = this;
        char *callback = wrptype("G_CALLBACK", handler);

        putfun("g_signal_connect"
              , 4
              , widget
              , signal
              , callback
              , data);

        free(callback);
}

void signal_connect_swapped(char *signal, char *handler, char *data)
{
        char *widget = this;
        char *callback = wrptype("G_CALLBACK", handler);

        putfun("g_signal_connect_swapped"
              , 4
              , widget
              , signal
              , callback
              , data);

        free(callback);
}
