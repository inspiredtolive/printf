#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>

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
int _printf(char *format, ...);

#endif
