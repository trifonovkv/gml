ACLOCAL_AMFLAGS = -I m4

noinst_PROGRAMS = test 

test_CFLAGS = `pkg-config --cflags gtk+-3.0`
test_LDFLAGS = `pkg-config --libs gtk+-3.0`
test_SOURCES = test.c handlers.c

test.c: test.gml
				$(top_builddir)/src/gml $(srcdir)/test.gml test.c

CLEANFILES = *~                   \
				$(builddir)/test.c        \
				$(NULL)

MAINTAINERCLEANFILES =            \
				Makefile.in               \
				$(builddir)/test.c        \
				$(NULL)
