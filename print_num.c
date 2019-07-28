#include "holberton.h"

/**
 * print_num - prints a number
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_num(char *format, va_list args)
{
	int num = va_arg(args, int);
	int count;
	(void)format;

	count = _print_number(num);
	return (count);
}
