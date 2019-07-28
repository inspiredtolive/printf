#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct print_fn - structure containing specifier
 * and corresponding print functions.
 * @specifier: the location and method to translate data to characters.
 * @fn: print function for specific type.
 */

typedef struct
{
	char *specifier;
	int (*fn)(char *format, va_list);
} print_fn;

int _putchar(char c);
int print_char(char *format, va_list);
int _puts(char *str);
int print_string(char *format, va_list);
int _print_number(int n);
int print_num(char *format, va_list args);
int print_binary(char *format, va_list args);
int _print_rev(char *s);
int print_rev(char *format, va_list args);	

int _printf(char *format, ...);

#endif
