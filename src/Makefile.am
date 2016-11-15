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
								widgets/radio_button.c        \
								widgets/spinner.c             \
								widgets/toggle_button.c       \
								widgets/separator.c           \
								widgets/font_button.c         \
								widgets/color_button.c        \
								widgets/file_chooser.c        \
								widgets/file_chooser_button.c \
								widgets/link_button.c         \
								widgets/switch.c              \
								widgets/progress_bar.c        \
								widgets/level_bar.c           \
								widgets/scale.c               \
								widgets/range.c               \
							  widgets/orientation.c         \
								$(NULL)

noinst_HEADERS = gml.h

BUILT_SOURCES = gml_bison.h

CLEANFILES = *~

MAINTAINERCLEANFILES =                \
				Makefile.in                   \
				$(NULL)
