#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct
{
	char *specifier;
	int (*f)(char *format, va_list);
} print_fn;

int _putchar(char c);
int print_char(char *format, va_list);
int _printf(char *format, ...);

#endif
