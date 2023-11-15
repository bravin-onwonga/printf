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

	_actual_print(n, &index);

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

int _actual_print(int n, int *index)
{
	int num;

	if (n == INT_MIN)
	{
		_putchar('-');
		_actual_print((n / 10) * -1, index + 1);
		_putchar((n % 10) * -1 + '0');
		*index += 11;
	}

	else
	{

		if (n < 0)
		{
			_putchar('-');
			num = -n;
			(*index)++;
		}
		else
			num = n;

		if (num / 10)
			_actual_print(num / 10, index);
		_putchar((num % 10) + '0');
		(*index)++;
	}

	return (*index);
}

/**
 * _print_binary - handles printing binary
 *
 * @ap: va_list
 * @index: number of chars printed thus far
 * Return: number of chars printed after func
 *		is executed
 */

int _print_binary(va_list ap, int index)
{
	unsigned int n;

	n = va_arg(ap, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		index++;
		return (index);
	}
	else
		_actual_print_binary(n, &index);

	return (index);
}

/**
 * _actual_print_binary - handles printing & conversion to bin
 *
 * @n: int to convert
 * @index: count of chars printed thus far
 * Return: count of chars printed after function is executed
 */

int _actual_print_binary(unsigned int n, int *index)
{
	int bit = 0;

	if (n != 0)
	{
		bit = n & 1;
		n >>= 1;
		_actual_print_binary(n, index);
		_putchar(bit ? '1' : '0');
		(*index)++;
	}
	return (*index);
}
