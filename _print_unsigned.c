#include "holberton.h"

/**
 * _print_unsigned - a function that prints an integer.
 * @n: input integer
 * Return: digit count
 */

int _print_unsigned(unsigned int n)
{
	int count = 0;

	if (n >= 10)
		_print_unsigned(n / 10);
	_putchar (n % 10 + '0');
	count++;

	return (count);
}
