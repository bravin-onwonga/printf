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

	_printf("%u\n", 1024);
	len = _printf("%u\n", -1024);
	printf("%u\n", -1024);
	_printf("%u\n", 0);
	_printf("%d", len);

	return (0);
}
