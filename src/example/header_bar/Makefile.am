ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = header_bar  

header_bar_CFLAGS = `pkg-config --cflags gtk+-3.0`
header_bar_LDFLAGS = `pkg-config --libs gtk+-3.0`
header_bar_SOURCES =                  \
				header_bar.c                  \
				handlers.c                    \
				$(NULL)

header_bar.c: header_bar.gml
				$(top_builddir)/src/gml $(srcdir)/header_bar.gml header_bar.c

CLEANFILES = *~ 

MAINTAINERCLEANFILES =                  \
				Makefile.in                     \
				header_bar.c                    \
				$(NULL)
