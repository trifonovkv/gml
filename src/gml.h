#ifndef GIL_H
#define GIL_H

#include <stdio.h>  /* FILE */
#include <stdlib.h> /* malloc */
#include <string.h> /* strlen */

#define APP_VAR_NAME "app"

extern FILE *yyin;
extern FILE *yyout;

int yyparse(void);

/* Types of widgets */
typedef enum
{
        TYPE_NONE
        , TYPE_STRING
        , TYPE_ADJUSTMENT        
        , TYPE_HBOX              
        , TYPE_VBOX              
        , TYPE_BUTTON           
        , TYPE_ENTRY            
        , TYPE_HEADER_BAR       
        , TYPE_SCROLLED_WINDOW  
        , TYPE_TEXT_VIEW        
        , TYPE_WIDGET           
        , TYPE_WINDOW
        , TYPE_BUTTON_BOX
        , TYPE_STACK
        , TYPE_STACK_SWITCHER
        , TYPE_APPLICATION
        , TYPE_COMBO_BOX
        , TYPE_COMBO_BOX_ENTRY
        , TYPE_COMBO_BOX_TEXT
        , TYPE_COMBO_BOX_TEXT_ENTRY
        , TYPE_STYLE_CONTEXT
        , TYPE_LABEL
        , TYPE_SPIN_BUTTON
        , TYPE_GRID
        , TYPE_CHECK_BUTTON
        , TYPE_RADIO_BUTTON
        , TYPE_SPINER
        , TYPE_TOGGLE_BUTTON
        , TYPE_FONT_BUTTON
        , TYPE_COLOR_BUTTON
        , TYPE_FILE_CHOOSER_BUTTON
        , TYPE_LINK_BUTTON
        , TYPE_SWITCH
        , TYPE_PROGRESS_BAR
        , TYPE_LEVEL_BAR
        , TYPE_SCALE
        , TYPE_RANGE
        , TYPE_FRAME
        , TYPE_TREE_VIEW
        , TYPE_TREE_VIEW_COLUMN
        , TYPE_CELL_RENDERER_TOGGLE
        , TYPE_CELL_RENDERER_PIXBUF
        , TYPE_CELL_RENDERER_TEXT
        , TYPE_LIST_STORE
        , TYPE_COLUMN
        , TYPE_ITER
        , TYPE_COLOR_CHOOSER
        , TYPE_NOTEBOOK
        , TYPE_OVERLAY
        , TYPE_REVEALER
        , TYPE_VOLUME_BUTTON
        , TYPE_SCALE_BUTTON
        , TYPE_ICON
        , TYPE_ICONS
        , TYPE_TEXT_BUFFER
        , TYPE_IMAGE
        , TYPE_ACTION_BAR
        , TYPE_MENU_BUTTON
        , TYPE_G_MENU
        , TYPE_G_MENU_ITEM
        , TYPE_LIST_BOX
        , TYPE_LIST_BOX_ROW
        , TYPE_SIZE_GROUP
        , TYPE_MENU_ITEM
        , TYPE_SEPARATOR_MENU_ITEM
        , TYPE_MENU
        , TYPE_CHECK_MENU_ITEM
        , TYPE_RADIO_MENU_ITEM
        , TYPE_MENU_BAR
        , TYPE_TOOL_BUTTON
        , TYPE_TOOL_ITEM
        , TYPE_TOOLBAR
        , TYPE_SEARCH_ENTRY
        , TYPE_SEARCH_BAR
        , TYPE_INFO_BAR
        , TYPE_STATUSBAR
        , TYPE_PANED
        , TYPE_ACCEL_GROUP
        , TYPE_APPLICATION_ID
        , TYPE_APPLICATION_FLAGS
        , TYPE_CALENDAR
        , TYPE_ICON_VIEW
        , TYPE_EXPANDER
        , TYPE_MESSAGE_DIALOG
        , TYPE_DIALOG
} widget_type;

/* Keyboard accelerators and action */
struct accels
{
        char*           action;
        char*           key;
        struct accels*  next;
};

typedef struct accels accels;

/* Table of keyboard accelerators */
extern accels *accels_table;

/* Data type for links in the chain of symbols. */
struct symrec
{
        char*           name;        /* name of symbol */ 
        char*           value;
        widget_type     type;
        struct symrec*  next;        /* link field */
};

typedef struct symrec symrec;

/* The symbol table: a chain of 'struct symrec'. */
extern symrec *sym_table;

extern char *this;

void        prtlst          ();
char*       append_flag     (char *flags, char *or, char *flag);
void        tab_insert      ();
void        main_start      ();
void        main_end        ();
void        include_insert  (char *include);
void        block_close     (char *start);
void        button_box_new  (char *widget);

symrec*     get_symbol_by_type(widget_type type);
widget_type getsymtype  (char *sym_name);
symrec*     getsym      (char *sym_name);
char*       getsymval   (char *sym_name);
void        delete_symbol (symrec *sym);
void        symdel      (char *sym_name);
void        symdelto    (char *sym_name);
char*       syminst     (widget_type sym_type, char *sym_name, char *sym_value);
symrec*     putsym      (widget_type sym_type, char *sym_name, char *sym_value);

#endif

