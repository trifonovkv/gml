#ifndef GIL_H
#define GIL_H

#include <stdio.h>  /* FILE */
#include <stdlib.h> /* malloc */
#include <string.h> /* strlen */

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
void        accels_add      (char *action_name, char *accel_key);
char*       append_flag     (char *flags, char *or, char *flag);
void        tab_insert      ();
void        main_start      ();
void        main_end        ();
void        include_insert  (char *include);
void        block_close     (char *start);
void        signal_connect  (char *signal, char *handler, char *data);
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

