#include "main.h"

char buffer[BUF_SIZE]; /* buffer to hold chars to print */

int _printf(const char *format, ...)
{
	va_list(ap);
	int index;
	const char *p;
	char buffer[BUF_SIZE];

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
					index = _print_char(va_arg(ap, int), index, buffer);
					break;
				case ('s'):
					index = _print_string(va_arg(ap, char *), index, buffer);
					break;
				case ('d'):
					index = _print_int(va_arg(ap, int), index, buffer);
					break;
				case ('%'):
					buffer[index] = '%';
					index++;
					break;
				default:
					buffer[index] = '%';
					if (*p != '\0')
					{
						buffer[index] = *p;
						index++;
					}
					break;
				}
			}
			else
			{
				buffer[index] = *p;
				index++;
			}
			p++;
		}
	}
	_print_buffer(buffer, index);
	return (index);
}

int _print_char(int c, int index, char *buffer)
{
	buffer[index] = c;
	index++;

	return (index);
}

int _print_string(char *str, int index, char *buffer)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		buffer[index] = str[i];
		i++;
		index++;
	}
	return (index);
}

void _print_buffer(char *buffer, int index)
{
	int i;

	i = 0;
	while (i <= index)
	{
		_putchar(buffer[i]);
		i++;
	}
}

int _print_int(int n, int index, char *buffer)
{

	int num, temp_index;
	char temp[BUF_SIZE];

	if (n < 0)
	{
		buffer[index] = '-';
		n = -n;
		index++;
	}

	if (n == 0)
	{
		buffer[index] = '0';
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
			buffer[index] = temp[temp_index];
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
