#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_SIZE 1024

/**
 * struct printFunc - struct for the print functions
 *
 * @c: first member (format specifier)
 * @f: second member (function pointer)
 *
 * Desc: the functions are in an array
 *		this struct is used to find the right func
 */

typedef struct printFunc
{
	char c;
	int (*f)(va_list ap, int);
} pF;

/*write function*/
int _putchar(char c);

/*main function*/
int _printf(const char *format, ...);

/*finds suitable function*/
int (*get_func(char s))(va_list, int);

/* handles char and str*/
int _print_char(va_list ap, int index);
int _print_string(va_list ap, int index);

/*handles percentage*/
int _print_perc(va_list ap, int index);

/*handles int*/
int _print_int(va_list ap, int index);
int _print_unknown_base(va_list ap, int index);
int _actual_print(int n, int *index);

/* print binary */
int _print_binary(va_list ap, int index);
int _actual_print_binary(unsigned int n, int *index);

extern char buffer[BUF_SIZE]; /* Declare buffer as an external variable */

#endif /* MAIN_H */
