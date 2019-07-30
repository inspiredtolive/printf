#include "holberton.h"

/**
 * _print_number - a function that prints an integer.
 * @n: input integer
 * Return: digit count
 */

int _print_number(int n)
{
	unsigned int m;
	int count;

	count = _count_digits(n);

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if (m >= 10)
		_print_number(m / 10);
	_putchar(m % 10 + '0');

	return (count);
}

/**
 * print_number - prints a number
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_number(char *format, va_list args)
{
	int num = va_arg(args, int);
	int count;
	(void)format;

	count = _print_number(num);
	return (count);
}
