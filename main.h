#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(int c, int index, char *buffer);
int _print_string(char *str, int index, char *buffer);
void _print_buffer(char *BUFF, int index);

extern char buffer[BUF_SIZE]; /* Declare buffer as an external variable */

#endif /* MAIN_H */