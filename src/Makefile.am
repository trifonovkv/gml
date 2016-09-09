ACLOCAL_AMFLAGS = -I m4

AM_YFLAGS = -d

AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = gml

gml_SOURCES =                                 \
								gml.c                         \
								gml_bison.y                   \
								gml_flex.l                    \
								fmtout.c                      \
								style_context.c               \
								widgets/window.c              \
								widgets/box.c                 \
								widgets/entry.c               \
								widgets/button.c              \
								widgets/widget.c              \
								widgets/header_bar.c          \
								widgets/scrolled_window.c     \
								widgets/adjustment.c          \
								widgets/text_view.c           \
								widgets/stack.c               \
								widgets/stack_switcher.c      \
								widgets/application.c         \
								widgets/button_box.c          \
								widgets/combo_box.c           \
								widgets/combo_box_text.c      \
								widgets/label.c               \
								widgets/spin_button.c         \
								widgets/container.c           \
								widgets/grid.c                \
								widgets/check_button.c        \
								$(NULL)

noinst_HEADERS = gml.h

BUILT_SOURCES = gml_bison.h

CLEANFILES = *~

MAINTAINERCLEANFILES =                \
				Makefile.in                   \
				$(NULL)
