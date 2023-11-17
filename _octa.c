#include "main.h"
/**
 * _print_oct - handles octal number
 *
 * @ap: arguments
 * @index: chars printed so far
 * Return: chars printed after function is executed
 **/

int _print_oct(va_list ap, int index)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);

	index = index + count;
	return (index);
}
