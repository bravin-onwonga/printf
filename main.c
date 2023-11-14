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
	char str[] = "Let's try to printf a simple sentence.";
	int num = 012;

	len = _printf("%s\n", str);
	_printf("%d", len);
	printf("%d", num);

	return (0);
}
