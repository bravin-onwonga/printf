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
	int len_n;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Positive integer: %d", 123);
	_printf("Negative integer: %d", -456);
	len_n = _printf("%d", 987654321);
	_printf("Min int: %d, Max int: %d", INT_MIN, INT_MAX);
	_printf("Invalid format: %q\n");
	_printf("%b\n", 98);
	printf("%d\n", len_n);

	return (0);
}
