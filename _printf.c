#include "main.h"

/**
 * _printf - function similar to printf
 *
 * @format: string containing format specifiers
 *		and/or normal string
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	va_list(ap);
	int index;
	const char *p;
	int (*func)(va_list, int);

	va_start(ap, format);

	/* Checks if while(!*format++) is true */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	/* Checks for string after space */
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (!format)
		return (-1);
	index = 0;
	p = format;
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			if (*p != '\0')
			{
				func = get_func(*p);
				if (!func)
				{
					_printf("%%%c", *p);
					index += 2;
				}
				else
				{
					index = func(ap, index);
					p++;
					continue;
				}
			}
			else
				index += _putchar('%');
		}
		else
			index += _putchar(*p);
		p++;
	}
	va_end(ap);
	return (index);
}
