#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int len_c;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("%%\n");
	len_c = _printf("%c\n", 'A');
	_printf("%s\n", "Hello, World!");
	_printf("%s\n", NULL);
	_printf("%% %c %s\n", 'B', "Testing");
	_printf("Zero: %d\n", 0);
	_printf("Zero: %d\n", 0);
	_printf("%% %c %s %d\n", 'C', "Mixed", 123);
	_printf("%d %d%f %d", len, len2, len_c);

	return (0);
}
