#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int print_char(va_list c)
{
        _putchar(va_arg(c, int));
        return (1);
}

/**
 *
 *
 *
 *
 *
 */
int print_str(va_list s)
{
        char *str = va_arg(s, char *);
        int i = 0;

        if (str == NULL)
        {
                str = "(null)";
        }
        i = print_chars(str);
        return (i);
}
int print_chars(char *str)
{
        int i = 0;

        if (str)
        {
                while (*str)
                {
                        _putchar(*str);
                        str++;
                        i++;
                }
        }
        return (i);
}
