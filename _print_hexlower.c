#include "holberton.h"

/**
 *  * _print_hexlower - a function that prints a hexadecimal number
 *   * @number: input number
 *    * Return: length of hexadecimal number
 *     */

int _print_hexlower(unsigned int number)
{
	int i, j, remainder, count = 0;
	unsigned int num_copy = number;
	char *hexadecimal;

	if (number == 0)
		return (_putchar('0'));

	while (num_copy != 0)
	{
		num_copy /= 16;
		count++;
	}
	hexadecimal = malloc(count);

	for (i = 0; number != 0; i++)
	{
		remainder = 0;
		remainder = number % 16;
		if (remainder < 10)
		{
			hexadecimal[i] = remainder + '0';
		}
		else
		{
			hexadecimal[i] = remainder + 'W';
		}
		number /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexadecimal[j]);

	return (count);
}
