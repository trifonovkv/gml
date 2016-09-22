/*
 * Sets the type of operation that the chooser is performing; the user
 * interface is adapted to suit the selected action. For example, an option to
 * create a new folder might be shown if the action is
 * GTK_FILE_CHOOSER_ACTION_SAVE but not if the action is
 * GTK_FILE_CHOOSER_ACTION_OPEN.
 */
void file_chooser_set_action(char *setting);

/* 
 * Sets whether only local files can be selected in the file selector. If
 * local_only is TRUE (the default), then the selected file or files are
 * guaranteed to be accessible through the operating systems native file system
 * and therefore the application only needs to worry about the filename
 * functions in GtkFileChooser, like gtk_file_chooser_get_filename(), rather
 * than the URI functions like gtk_file_chooser_get_uri(),
 * 
 * On some systems non-native files may still be available using the native
 * filesystem via a userspace filesystem (FUSE).
 */
void file_chooser_set_local_only(char *setting);

/* 
 * Sets whether multiple files can be selected in the file selector. This is
 * only relevant if the action is set to be GTK_FILE_CHOOSER_ACTION_OPEN or
 * GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER.
 */
void file_chooser_set_select_multiple(char *setting);

/* 
 * Sets whether hidden files and folders are displayed in the file selector.
 */
void file_chooser_set_show_hidden(char *setting);

/* 
 * Sets whether a file chooser in GTK_FILE_CHOOSER_ACTION_SAVE mode will
 * present a confirmation dialog if the user types a file name that already
 * exists. This is FALSE by default.
 * 
 * If set to TRUE, the chooser will emit the “confirm-overwrite” signal when
 * appropriate.
 * 
 * If all you need is the stock confirmation dialog, set this property to TRUE.
 * You can override the way confirmation is done by actually handling the
 * “confirm-overwrite” signal; please refer to its documentation for the
 * details.
 */
void file_chooser_set_do_overwrite_confirmation(char *setting);

/* 
 * Sets whether file choser will offer to create new folders. This is only
 * relevant if the action is not set to be GTK_FILE_CHOOSER_ACTION_OPEN.
 */
void file_chooser_set_create_folders(char *setting);

/* 
 * Sets the current name in the file selector, as if entered by the user. Note
 * that the name passed in here is a UTF-8 string rather than a filename. This
 * function is meant for such uses as a suggested name in a “Save As...”
 * dialog. You can pass “Untitled.doc” or a similarly suitable suggestion for
 * the name .
 * 
 * If you want to preselect a particular existing file, you should use
 * gtk_file_chooser_set_filename() or gtk_file_chooser_set_uri() instead.
 * Please see the documentation for those functions for an example of using
 * gtk_file_chooser_set_current_name() as well.
 */
void file_chooser_set_current_name(char *setting);

/* 
 * Sets filename as the current filename for the file chooser, by changing to
 * the file’s parent folder and actually selecting the file in list; all other
 * files will be unselected. If the chooser is in GTK_FILE_CHOOSER_ACTION_SAVE
 * mode, the file’s base name will also appear in the dialog’s file name entry.
 * 
 * Note that the file must exist, or nothing will be done except for the
 * directory change.
 * 
 * You should use this function only when implementing a save dialog for which
 * you already have a file name to which the user may save. For example, when
 * the user opens an existing file and then does Save As... to save a copy or a
 * modified version. If you don’t have a file name already — for example, if
 * the user just created a new file and is saving it for the first time, do not
 * call this function. Instead, use something similar to this:
 */
void file_chooser_set_filename(char *setting);

/* 
 * Sets the current folder for chooser from a local filename. The user will be
 * shown the full contents of the current folder, plus user interface elements
 * for navigating to other folders.
 * 
 * In general, you should not use this function. See the section on setting up
 * a file chooser dialog for the rationale behind this.
 */
void file_chooser_set_current_folder(char *setting);

/* 
 * Sets the file referred to by uri as the current file for the file chooser,
 * by changing to the URI’s parent folder and actually selecting the URI in the
 * list. If the chooser is GTK_FILE_CHOOSER_ACTION_SAVE mode, the URI’s base
 * name will also appear in the dialog’s file name entry.
 * 
 * Note that the URI must exist, or nothing will be done except for the
 * directory change.
 * 
 * You should use this function only when implementing a save dialog for which
 * you already have a file name to which the user may save. For example, when
 * the user opens an existing file and then does Save As... to save a copy or a
 * modified version. If you don’t have a file name already — for example, if
 * the user just created a new file and is saving it for the first time, do not
 * call this function. Instead, use something similar to this:
 */
void file_chooser_set_uri(char *setting);

/* 
 * Sets the current folder for chooser from an URI. The user will be shown the
 * full contents of the current folder, plus user interface elements for
 * navigating to other folders.
 * 
 * In general, you should not use this function. See the section on setting up
 * a file chooser dialog for the rationale behind this.
 */
void file_chooser_set_current_folder_uri(char *setting);

/* 
 * Sets an application-supplied widget to use to display a custom preview of
 * the currently selected file. To implement a preview, after setting the
 * preview widget, you connect to the “update-preview” signal, and call
 * gtk_file_chooser_get_preview_filename() or
 * gtk_file_chooser_get_preview_uri() on each change. If you can display a
 * preview of the new file, update your widget and set the preview active using
 * gtk_file_chooser_set_preview_widget_active(). Otherwise, set the preview
 * inactive.
 * 
 * When there is no application-supplied preview widget, or the
 * application-supplied preview widget is not active, the file chooser will
 * display no preview at all.
 */
void file_chooser_set_preview_widget(char *setting);

/* 
 * Sets whether the preview widget set by gtk_file_chooser_set_preview_widget()
 * should be shown for the current filename. When active is set to false, the
 * file chooser may display an internally generated preview of the current file
 * or it may display no preview at all. See
 * gtk_file_chooser_set_preview_widget() for more details.
 */
void file_chooser_set_preview_widget_active(char *setting);

/* 
 * Sets whether the file chooser should display a stock label with the name of
 * the file that is being previewed; the default is TRUE. Applications that
 * want to draw the whole preview area themselves should set this to FALSE and
 * display the name themselves in their preview widget.
 */ 
void file_chooser_set_use_preview_label(char *setting);

