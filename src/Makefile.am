AM_LDFLAGS = -lm

ACLOCAL_AMFLAGS = -I m4

AM_YFLAGS = -d

AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = gml

gml_SOURCES =                                     \
								gml.c                             \
								gml_bison.y                       \
								gml_flex.l                        \
								fmtout.c                          \
								style_context.c                   \
								widgets/window.c                  \
								widgets/box.c                     \
								widgets/entry.c                   \
								widgets/button.c                  \
								widgets/widget.c                  \
								widgets/header_bar.c              \
								widgets/scrolled_window.c         \
								widgets/adjustment.c              \
								widgets/text_view.c               \
								widgets/stack.c                   \
								widgets/stack_switcher.c          \
								widgets/application.c             \
								widgets/button_box.c              \
								widgets/combo_box.c               \
								widgets/combo_box_text.c          \
								widgets/label.c                   \
								widgets/spin_button.c             \
								widgets/container.c               \
								widgets/grid.c                    \
								widgets/check_button.c            \
								widgets/radio_button.c            \
								widgets/spinner.c                 \
								widgets/toggle_button.c           \
								widgets/separator.c               \
								widgets/font_button.c             \
								widgets/color_button.c            \
								widgets/file_chooser.c            \
								widgets/file_chooser_button.c     \
								widgets/link_button.c             \
								widgets/switch.c                  \
								widgets/progress_bar.c            \
								widgets/level_bar.c               \
								widgets/scale.c                   \
								widgets/range.c                   \
							  widgets/orientation.c             \
								widgets/frame.c                   \
								widgets/tree_view.c               \
								widgets/tree_view_column.c        \
								widgets/cell_renderer_toggle.c    \
								widgets/cell_renderer_pixbuf.c    \
								widgets/cell_renderer_text.c      \
								widgets/list_store.c              \
								widgets/cell_layout.c             \
								widgets/color_chooser.c           \
								widgets/notebook.c                \
								widgets/overlay.c                 \
								widgets/revealer.c                \
								widgets/volume_button.c           \
								widgets/scale_button.c            \
								widgets/text_buffer.c             \
								widgets/image.c                   \
								widgets/object.c                  \
								widgets/action_bar.c              \
								widgets/menu_button.c             \
								widgets/g_menu.c                  \
								widgets/list_box.c                \
								widgets/size_group.c              \
								widgets/menu_item.c               \
								widgets/separator_menu_item.c     \
								widgets/menu.c                    \
								widgets/check_menu_item.c         \
								widgets/radio_menu_item.c         \
								widgets/menu_bar.c                \
								widgets/tool_button.c             \
								widgets/tool_item.c               \
								widgets/toolbar.c                 \
								widgets/search_entry.c            \
								widgets/search_bar.c              \
								widgets/info_bar.c                \
								widgets/statusbar.c               \
								widgets/paned.c                   \
								widgets/accel_group.c             \
								widgets/calendar.c                \
								widgets/icon_view.c               \
								widgets/expander.c                \
								$(NULL)

noinst_HEADERS = gml.h

BUILT_SOURCES = gml_bison.h

CLEANFILES = *~

MAINTAINERCLEANFILES =                \
				Makefile.in                   \
				$(NULL)
