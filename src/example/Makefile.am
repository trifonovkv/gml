ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = window header_bar scrolled_window

window_CFLAGS = `pkg-config --cflags gtk+-3.0`
window_LDFLAGS = `pkg-config --libs gtk+-3.0`
window_SOURCES = window.c handlers.c

window.c: window.gil
				../gml window.gil window.c

header_bar_CFLAGS = `pkg-config --cflags gtk+-3.0`
header_bar_LDFLAGS = `pkg-config --libs gtk+-3.0`
header_bar_SOURCES = header_bar.c handlers.c

header_bar.c: header_bar.gil
				../gml header_bar.gil header_bar.c

scrolled_window_CFLAGS = `pkg-config --cflags gtk+-3.0`
scrolled_window_LDFLAGS = `pkg-config --libs gtk+-3.0`
scrolled_window_SOURCES = scrolled_window.c handlers.c

scrolled_window.c: scrolled_window.gil
				../gml scrolled_window.gil scrolled_window.c

CLEANFILES = *~ example.c header_bar.c scrolled_window.c

MAINTAINERCLEANFILES = 		\
				Makefile.in				\
				$(NULL)
