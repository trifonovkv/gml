#ifndef GIL_H
#define GIL_H

#include<stdio.h>  /* FILE */
#include<stdlib.h> /* malloc */
#include<string.h> /* strlen */

extern FILE *yyin;
extern FILE *yyout;

int yyparse(void);

/* Types of widgets */
typedef enum
{
        NONE_TYPE
        ,GTK_ADJUSTMENT        
        ,GTK_HBOX              
        ,GTK_VBOX              
        ,GTK_BUTTON           
        ,GTK_ENTRY            
        ,GTK_HEADER_BAR       
        ,GTK_SCROLLED_WINDOW  
        ,GTK_TEXT_VIEW        
        ,GTK_WIDGET           
        ,GTK_WINDOW
        ,GTK_BUTTON_BOX
} widget_type;

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

void tab_insert(FILE *out);

void    main_start      (FILE *out);
void    main_end        (FILE *out);
void    include_insert  (FILE *out, char *include);
void    block_close     (char *start);
void    signal_connect  (FILE *out, char *signal, char *handler, char *data);
void    container_add   (FILE *out, char *widget);
void    button_box_new  (FILE *out, char *widget);

widget_type getsymtype  (char *sym_name);
symrec*     getsym      (char *sym_name);
char*       getsymval   (char *sym_name);
void        symdelto    (char *sym_name);
void        syminst     (widget_type sym_type, char *sym_name, char *sym_value);
symrec*     putsym      (widget_type sym_type, char *sym_name, char *sym_value);

#endif

