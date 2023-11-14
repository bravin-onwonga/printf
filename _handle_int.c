#include "main.h"

/**
 * _print_int - handles printing int
 *
 * @ap: va_list
 * @index: count for arguments printed
 * Return: arguments printed thus far
 */

int _print_int(va_list ap, int index)
{

	int n, num, temp_index;
	char temp[BUF_SIZE];

	n = va_arg(ap, int);
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
	return (index);
}
