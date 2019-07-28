#include "holberton.h"

/**
 * _print_heX - a function that prints a hexadecimal number
 * @number: input number
 * Return: length of hexadecimal number
 */

int _print_heX(unsigned int number)
{
	int i, j, remainder, count = 0;
	unsigned int num_copy;
	num_copy = number;
	while (num_copy != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}
	char hexArray[count];
	for (i = 0; number != 0; i++)
	{
		remainder = 0;
		remainder = number % 16;
		if (remainder < 10)
		{
			hexArray[i] = remainder + '0';
			i++;
		}
		else
		{
			hexArray[i] = remainder + '7';
			i++;
		}
		number = number	/ 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexArray[j]);

	return (count);
}
