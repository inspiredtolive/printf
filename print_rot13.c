#include "holberton.h"

/**
 * print_rot13 - prints a number that is rot13'ed
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_rot13(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int count;
	(void)format;

	count = _print_rot13(string);
	return (count);
}
