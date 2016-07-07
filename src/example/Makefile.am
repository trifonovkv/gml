ACLOCAL_AMFLAGS = -I m4

SUBDIR = scrolled_window

noinst_PROGRAMS = window header_bar

window_CFLAGS = `pkg-config --cflags gtk+-3.0`
window_LDFLAGS = `pkg-config --libs gtk+-3.0`
window_SOURCES = window.c handlers.c

window.c: window.gml
				$(top_builddir)/src/gml $(srcdir)/window.gml $(builddir)/window.c

header_bar_CFLAGS = `pkg-config --cflags gtk+-3.0`
header_bar_LDFLAGS = `pkg-config --libs gtk+-3.0`
header_bar_SOURCES = header_bar.c handlers.c

header_bar.c: header_bar.gml
				$(top_builddir)/src/gml $(srcdir)/header_bar.gml $(builddir)/header_bar.c

CLEANFILES = *~                   \ 
				$(builddir)/window.c      \ 
				$(builddir)/header_bar.c  \
				$(NULL)

MAINTAINERCLEANFILES =    \
				Makefile.in       \
				$(NULL)
