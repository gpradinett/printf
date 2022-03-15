#ifndef _PRINTF_
#define _PRINTF_
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
typedef struct specifiers
{
        char *t;
        int (*f)(va_list);
} specifiers_t;

int (*get_op_func(char *c))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_str(va_list s);
int print_chars(char *str);
int print_perc(va_list __attribute__((unused)) p);

static const specifiers_t array[] = {
                {"c", print_char},
                {"s", print_str},
                {"%", print_perc},
                {NULL, NULL},
};
#endif
