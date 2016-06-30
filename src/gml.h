#ifndef GIL_H
#define GIL_H

#include<stdio.h>  /* FILE */
#include<stdlib.h> /* malloc */
#include<string.h> /* strlen */

extern FILE *yyin;
extern FILE *yyout;

int yyparse(void);

/* Data type for links in the chain of symbols. */
struct symrec
{
        char *name;                 /* name of symbol */ 
        char *value;
        struct symrec *next;        /* link field */
};

typedef struct symrec symrec;

/* The symbol table: a chain of 'struct symrec'. */
extern symrec *sym_table;

void tab_insert(FILE *out);

void main_start(FILE *out);
void main_end(FILE *out);
void include_insert(FILE *out, char *include);
void block_close(const char *start);
void signal_connect(FILE *out, char *signal, char *handler, char *data);
void container_add(FILE *out, char *widget);
void button_box_new(FILE *out, char *widget);

char *getsymval(const char *sym_name);
void symdelto(const char *sym_name);
void syminst(const char *sym_name, const char *sym_value);
symrec *putsym(const char *sym_name, const char *sym_value);
symrec *getsym(const char *sym_name);

#endif
