#include "main.h"

/**
 * _print_hex - prints hexadecimal number.
 * @ap: arguments
 * @index: chars printed so far
 * Return: chars printed after function is executed
 **/

int _print_hex(va_list ap, int index)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);

	index = index + count;
	return (index);
}
