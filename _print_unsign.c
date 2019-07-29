#include "holberton.h"

/**
 * _print_unsign - a function that prints an integer.
 * @n: input integer
 * Return: digit count
 */

int _print_unsign(unsigned int n)
{
<<<<<<< HEAD
	int count = 1;
	unsigned int num_copy;	

	while (_abs(num_copy) != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}
=======
	int count;

	count = _count_digits(n);
>>>>>>> 2333fe0ea0837678ab7a60262de9a739337e966f

	if (n >= 10)
		_print_unsign(n / 10);
	_putchar (n % 10 + '0');

	return (count);
}
