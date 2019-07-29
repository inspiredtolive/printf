#include "holberton.h"

/**
 * print_hexUpper - prints a hexadecimal
 * @format: format to print hexadecimal
 * @args: va_list that contains the hexadecimal to print
 * Return: number of digits printed
 */
int print_hexUpper(char *format, va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int count;
	(void)format;

	count = _print_hexUpper(number);
	return (count);
}
