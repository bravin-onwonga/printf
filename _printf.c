#include "main.h"

int _printf(const char *format, ...)
{
	va_list(ap);
	int index;
	const char *p;

	va_start(ap, format);

	index = 0;

	p = format;
	if (p)
	{
		while (*p != '\0')
		{

			if (*p == '%')
			{
				p++;
				switch (*p)
				{
				case ('c'):
					index = _print_char(va_arg(ap, int), index);
					break;
				case ('s'):
					index = _print_string(va_arg(ap, char *), index);
					break;
				case ('d'):
					index = _print_int(va_arg(ap, int), index);
					break;
				case ('%'):
					_putchar('%');
					index++;
					break;
				default:
					_putchar('%');
					if (*p != '\0')
					{
						_putchar(*p);
						index++;
					}
					break;
				}
			}
			else
			{
				_putchar(*p);
				index++;
			}
			p++;
		}
	}
	index--;
	return (index);
}

int _print_char(int c, int index)
{
	_putchar(c);
	index++;

	return (index);
}

int _print_string(char *str, int index)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		index++;
	}
	return (index);
}

int _print_int(int n, int index)
{

	int num, temp_index;
	char temp[BUF_SIZE];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		index++;
	}

	if (n == 0)
	{
		_putchar('0');
		index++;
	}
	else
	{
		temp_index = 0;

		while (n > 0)
		{
			num = n % 10;
			temp[temp_index] = num + '0';
			n = n / 10;
			temp_index++;
		}

		while (temp_index > 0)
		{
			temp_index--;
			_putchar(temp[temp_index]);
			index++;
		}
	}
	return index;
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
