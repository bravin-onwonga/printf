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

	if (!format)
		return (-1);

	index = 0;
	for (p = format; *p; p++)
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
	}
	va_end(ap);
	return (index);
}
