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
	int n;

	n = va_arg(ap, int);

	index = _actual_print(n, index);

	return (index);
}

/**
 * _actual_print - does the printing
 *
 * @n: integer to print
 * @index: number of args printed so far
 * Return: number of args printed after
 *		int is printed
 */

int _actual_print(int n, int index)
{
	int num;

	if (n == INT_MIN)
	{
		_putchar('-');
		_actual_print((n / 10) * -1, index + 1);
		_putchar((n % 10) * -1 + '0');
		return (index + 11);
	}

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		index++;
	}
	else
		num = n;

	if (num / 10)
		_actual_print(num / 10, index + 1);
	_putchar((num % 10) + '0');

	return (index);
}
