#include "main.h"
/**
 * print_char - print type char
 *
 * @c: pointer to argument
 * Return: Nothing
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_str - print type char *
 * @s: pointer to argument
 *
 * Return: Nothing
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
/**
 * print_chars - print characteres
 *
 * @str: string passed
 * Return: len of str
 */
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
