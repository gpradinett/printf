#include "main.h"
/**
 * _printf - imprime format printf
 * @format: pointer check format
 * Return: length
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, res, len;

	res = 0;
	len = 0;
	va_start(ap, format);
	if (format == NULL)
		exit(98);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			for (j = 0; array[j].t; j++)
			{
				if (format[i + 1] == *array[j].t)
				{
					len += array[j].f(ap);
					break;
				}
			}
				if (array[j].t == NULL && format[i + 1] != '\0')
			{
				_putchar(*(format + i));
				i--;
				len++;
			}
				if (array[j].t == NULL && format[i + 1] == '\0')
			{
					return (-1);
			}
			i++;
		}
			else if (*(format + i) != '%')
			{
			_putchar(format[i]);
			res++;
			}
	}
	va_end(ap);
	return (res + len);
}
