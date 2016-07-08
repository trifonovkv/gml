ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = window  

window_CFLAGS = `pkg-config --cflags gtk+-3.0`
window_LDFLAGS = `pkg-config --libs gtk+-3.0`
window_SOURCES =                  \
				window.c                  \
				handlers.c                \
				$(NULL)

window.c: window.gml
				$(top_builddir)/src/gml $(srcdir)/window.gml window.c

CLEANFILES = *~ 

MAINTAINERCLEANFILES =              \
				Makefile.in                 \
				window.c                    \
				$(NULL)
