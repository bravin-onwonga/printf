#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define BUF_SIZE 1024

char BUFF[BUF_SIZE];

int _putchar(char c);
int _printf(const char *format, ...);
unsigned int _print_char(char *str, unsigned int index);
unsigned int _print_string(char *str, unsigned int index);
void _print_buffer(char *BUFF, unsigned int index);

#endif /* MAIN_H */