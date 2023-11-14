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
	int len_m;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("%%");
	len_c = _printf("%c", 'A');
	_printf("%s", "Hello, World!");
	_printf("%s", NULL);
	len_m = _printf("%% %c %s", 'B', "Testing");
	_printf("Zero: %d", 0);
	_printf("Zero: %d", 0);
	_printf("%% %c %s %d", 'C', "Mixed", 123);
	_printf("%d %d%f %d %d", len, len2, len_c, len_m);

	return (0);
}
