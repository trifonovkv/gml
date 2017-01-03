#include <stdarg.h>
#include "gml.h"
#include "fmtout.h"

int tabs_count = 0;

void tabins(int n)
{
        for (int i = 0; i < n; i++)
                fprintf(yyout, "\t");
}

int tabget()
{
        return tabs_count;
}

int tabdec(int n)
{
        tabs_count -= n;
        return tabs_count;
}

int tabinc(int n)
{
        tabs_count += n;
        return tabs_count;
}

void tabset(int n)
{
        tabs_count = n;
}

void prtstr(int n_args, ...)
{
        va_list ap;
        
        tabins(tabs_count);
        va_start(ap, n_args);

        for (int i = 1; i <= n_args; i++)
                fprintf(yyout, "%s", va_arg(ap, char *));

        va_end(ap);
}

char* concatv(int n_args, ...)
{
        char *str;
        va_list ap;

        va_start(ap, n_args);

        if (n_args > 1) 
                str = va_arg(ap, char *);
        else
                return NULL;

        for (int i = 2; i <= n_args; i++) {
                str = concat(str, va_arg(ap, char *));
        }

        va_end(ap);
}

char* concat(char *s1, char *s2) 
{
        if (s1 == NULL) s1 = "";
        if (s2 == NULL) s2 = "";

        size_t len1 = strlen(s1);
        size_t len2 = strlen(s2);                      

/*
 *         if (s1 != NULL) len1 = strlen(s1);
 *         if (s2 != NULL) len2 = strlen(s2);                      
 * 
 */
        char *result = malloc(len1 + len2 + 1);

        if (!result) {
            fprintf(stderr, "malloc() failed: insufficient memory!\n");
            return NULL;
        }

        memcpy(result, s1, len1);
        memcpy(result + len1, s2, len2 + 1);    

        return result;
}

char* wrptype(char *type, char *var)
{
        if ((type == NULL) || (var == NULL)) {
                fprintf(stderr, "wrptype() failed: type or var is NULL\n");
                exit(1);
        }

        size_t len1 = strlen(type);
        size_t len2 = strlen("(");
        size_t len3 = strlen(var);
        size_t len4 = strlen(")");

        size_t n = len1 + len2 + len3 + len4 + 1;

        char *dest = calloc(n, sizeof(char));

        if(!dest) {
            fprintf(stderr, "calloc() failed: insufficient memory!\n");
            exit(1);
        }

        strncat(dest, type, len1);
        strncat(dest, "(",  len2);
        strncat(dest, var,  len3);
        strncat(dest, ")",  len4);

        return dest;
}

void putdef(char *type, char *var, char *func_name, int n_args, ...)
{
        va_list ap;

        tabins(tabs_count);

        fprintf(yyout, "%s %s=%s(", type, var, func_name);

        va_start(ap, n_args);

        if (n_args > 0) 
                fprintf(yyout, "%s", va_arg(ap, char *));
        for (int i = 2; i <= n_args; i++)
                fprintf(yyout, ", %s", va_arg(ap, char *));
        fprintf(yyout, ");\n");

        va_end(ap);
}

void putfun(char *func_name, int n_args, ...)
{
        va_list ap;

        tabins(tabs_count);

        fprintf(yyout, "%s(", func_name);

        va_start(ap, n_args);

        if (n_args > 0) 
                fprintf(yyout, "%s", va_arg(ap, char *));
        for (int i = 2; i <= n_args; i++)
                fprintf(yyout, ", %s", va_arg(ap, char *));
        fprintf(yyout, ");\n");

        va_end(ap);
}

