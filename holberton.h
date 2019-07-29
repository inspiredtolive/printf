#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct print_method - structure containing specifier
 * and corresponding print functions.
 * @specifier: the location and method to translate data to characters.
 * @fn: print function for specific type.
 */
typedef struct print_method
{
	char *specifier;
	int (*fn)(char *format, va_list);
} print_fn;

int _abs(int n);
int _putchar(char c);
int _count_digits(int n);
int print_char(char *format, va_list);
int _puts(char *str);
int print_percent(char *format, va_list);
int print_string(char *format, va_list);
int _print_number(int n);
int print_num(char *format, va_list args);
int print_binary(char *format, va_list args);
int print_octal(char *format, va_list args);
int _print_unsign(unsigned int n);
int print_unsign(char *format, va_list args);
int _print_rev(char *s);
int print_rev(char *format, va_list args);

int is_valid_format(char *format);
int _printf(char *format, ...);

#endif
