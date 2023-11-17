#include "main.h"

/**
 * _print_unsigned - handles unsigned integer
 *
 * @ap: argument to print
 * @index: characters printed so far
 * Return: characters printed after function is executed
 **/
int _print_unsigned(va_list ap, int index)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i = 0, num, last = n % 10, digit, exp = 1;

	if (n / 10 == 0)
	{
		_putchar(n + '0');
		i++;
		return (index + i);
	}

	n = n / 10;
	num = n;

	if (num == 0)
	{
		_putchar('0');
		i++;
		return (index + i);
	}

	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
	_putchar(last + '0');
	i++;

	return (index + i);
}
