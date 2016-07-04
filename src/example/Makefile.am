ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = window header_bar 

window_CFLAGS = `pkg-config --cflags gtk+-3.0`
window_LDFLAGS = `pkg-config --libs gtk+-3.0`
window_SOURCES = window.c handlers.c

window.c: window.gml
				../gml window.gml window.c

header_bar_CFLAGS = `pkg-config --cflags gtk+-3.0`
header_bar_LDFLAGS = `pkg-config --libs gtk+-3.0`
header_bar_SOURCES = header_bar.c handlers.c

header_bar.c: header_bar.gml
				../gml header_bar.gml header_bar.c

CLEANFILES = *~ window.c header_bar.c

MAINTAINERCLEANFILES = 		\
				Makefile.in				\
				$(NULL)
