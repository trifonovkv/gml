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
        ,TYPE_ADJUSTMENT        
        ,TYPE_HBOX              
        ,TYPE_VBOX              
        ,TYPE_BUTTON           
        ,TYPE_ENTRY            
        ,TYPE_HEADER_BAR       
        ,TYPE_SCROLLED_WINDOW  
        ,TYPE_TEXT_VIEW        
        ,TYPE_WIDGET           
        ,TYPE_WINDOW
        ,TYPE_BUTTON_BOX
        ,TYPE_STACK
        ,TYPE_STACK_SWITCHER
        ,TYPE_APPLICATION
        ,TYPE_STRING
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

void    accels_add      (char *action_name, char *accel_key);
char*   append_flag     (char *flags, char *or, char *flag);
void    tab_insert      ();
void    main_start      ();
void    main_end        ();
void    include_insert  (char *include);
void    block_close     (char *start);
void    signal_connect  (char *signal, char *handler, char *data);
void    container_add   (char *widget);
void    button_box_new  (char *widget);

widget_type getsymtype  (char *sym_name);
symrec*     getsym      (char *sym_name);
char*       getsymval   (char *sym_name);
void        symdelto    (char *sym_name);
void        syminst     (widget_type sym_type, char *sym_name, char *sym_value);
symrec*     putsym      (widget_type sym_type, char *sym_name, char *sym_value);

#endif

