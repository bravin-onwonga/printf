#include "main.h"

/**
 * _print_char - prints a char
 *
 * @ap: va_list
 * @index: count for arguments printed
 * Return: argument count
 */

int _print_char(va_list ap, int index)
{
	_putchar(va_arg(ap, int));
	index++;

	return (index);
}

/**
 * _print_perc - handles %%
 *
 * @ap: va_list
 * @index: count for arguments printed
 * Return: argument count
 */
int _print_perc(va_list ap, int index)
{
	(void)ap;
	_putchar('%');
	index++;

	return (index);
}

/**
 * _print_string - prints a string
 *
 * @ap: va_list
 * @index: count for arguments printed
 * Return: argument count
 */

int _print_string(va_list ap, int index)
{
	char *str;
	int i;

	str = va_arg(ap, char *);

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		index++;
	}
	return (index);
}
