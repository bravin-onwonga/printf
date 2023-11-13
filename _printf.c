#include "main.h"

int _printf(const char *format, ...)
{
	va_list(ap);
	unsigned int index;
	char *p;

	va_start(ap, format);

	index = 0;

	p = format;
	if (p)
	{
		while (*p != '\0')
		{
			switch (*p)
			{
				if (p == '%')
				{
					p++;
				case ('c'):
					index = _print_char(va_arg(ap, int), index);
					break;
				case ('s'):
					index = _print_string(va_arg(ap, char *), index);
				case ('%'):
					BUFF[index] = '%';
				}
			}
			BUFF[index] = *p;
			p++;
			index++;
		}
	}
	_print_buffer(BUFF, index);
	return (0);
}

unsigned int _print_char(char *c, unsigned int index)
{
	BUFF[index] = c[0];
	index++;

	free(c);
	return (index);
}

unsigned int _print_string(char *str, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		BUFF[index] = str[i];
		i++;
		index++;
	}
	free(str);
	return (index);
}

void _print_buffer(char *BUFF, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i <= index)
	{
		_putchar(BUFF[i]);
		i++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
