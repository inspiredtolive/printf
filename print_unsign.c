#include "holberton.h"

/**
 * _print_unsign - a function that prints an integer.
 * @n: input integer
 * Return: digit count
 */

int _print_unsign(unsigned int n)
{
	int count = 0;
	unsigned int num_copy = n;

	if (n == 0)
		count = 1;

	while (_abs(num_copy) != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}

	if (n >= 10)
		_print_unsign(n / 10);
	_putchar (n % 10 + '0');

	return (count);
}

/**
 * print_unsign - prints an unsigned number
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_unsign(char *format, va_list args)
{
	unsigned int num = va_arg(args, int);
	int count;
	(void)format;

	count = _print_unsign(num);
	return (count);
}
