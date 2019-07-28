#include "holberton.h"

/**
 * print_unsigned - prints an unsigned number
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_unsigned(char *format, va_list args)
{
	unsigned int num = va_arg(args, int);
	int count;
	(void)format;

	count = _print_unsigned(num);
	return (count);
}
