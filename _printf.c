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

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
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
					_putchar('%');
					if (*p != '\0')
					{
						_putchar(*p);
						index += 2;
					}
				}
				else
				{
					index = func(ap, index);
					p++;
				}
			}
			else
			{
				_putchar('%');
				index++;
			}
		}
		else
		{
			_putchar(*p);
			index++;
		}
		p++;
	}
	va_end(ap);
	return (index);
}
