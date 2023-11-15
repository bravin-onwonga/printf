#include "main.h"
/**
 * print_HEX- prints hexadecimal number.
 * @ap : arguments
 * Return : count
 **/
int print_HEX(va_list ap)
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
	for (i = count - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
