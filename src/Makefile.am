ACLOCAL_AMFLAGS = -I m4

AM_YFLAGS = -d

AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = gml

gml_SOURCES =                               \
								gml.c                       \
								gml_bison.y                 \
								gml_flex.l                  \
								widgets/window.c            \
								widgets/box.c               \
								widgets/entry.c             \
								widgets/button.c            \
								widgets/widget.c            \
								widgets/header_bar.c        \
								widgets/scrolled_window.c   \
								widgets/adjustment.c        \
								$(NULL)

noinst_HEADERS = gml.h

BUILT_SOURCES = gml_bison.h

CLEANFILES = *~

MAINTAINERCLEANFILES =                \
				Makefile.in                   \
				$(NULL)
