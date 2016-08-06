ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = widget_factory  

widget_factory_CFLAGS = `pkg-config --cflags gtk+-3.0`
widget_factory_LDFLAGS = `pkg-config --libs gtk+-3.0`
widget_factory_SOURCES =                  \
				widget_factory.c                  \
				handlers.c                    \
				$(NULL)

widget_factory.c: widget_factory.gml
				$(top_builddir)/src/gml $(srcdir)/widget_factory.gml widget_factory.c

CLEANFILES = *~                         \
				widget_factory.c                \
				$(NULL)

MAINTAINERCLEANFILES =                  \
				Makefile.in                     \
				$(NULL)
