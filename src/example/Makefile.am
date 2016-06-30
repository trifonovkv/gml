noinst_PROGRAMS = example

example_CFLAGS = `pkg-config --cflags gtk+-3.0 --libs gtk+-3.0`
example_SOURCES = example.c handlers.c

example.c: example.gil
				../gml example.gil example.c

CLEANFILES = *~ example.c

MAINTAINERCLEANFILES = 		\
				Makefile.in				\
				$(NULL)
