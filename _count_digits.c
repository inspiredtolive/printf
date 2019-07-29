#include "holberton.h"

/**
 * _abs - calculates the absolute value of a number
 * @n: input number
 * Return: A positive value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}

/**
 * _count_digits - a function that counts the digits of a number.
 * @n: input integer
 * Return: digit count
 */

int _count_digits(int n)
{
	int count = 0;
	int num_copy = n;

	while (_abs(num_copy) != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}
	if (n < 0)
		count += 1;

	return (count);
}
