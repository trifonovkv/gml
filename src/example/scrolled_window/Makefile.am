ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = scrolled_window  

scrolled_window_CFLAGS = `pkg-config --cflags gtk+-3.0`
scrolled_window_LDFLAGS = `pkg-config --libs gtk+-3.0`
scrolled_window_SOURCES = scrolled_window.c handlers.c

scrolled_window.c: scrolled_window.gml
				$(top_builddir)/src/gml $(srcdir)/scrolled_window.gml scrolled_window.c

CLEANFILES = *~	

MAINTAINERCLEANFILES =          \
				Makefile.in             \
				scrolled_window.c       \
				$(NULL)
