#include "holberton.h"

/**
 * print_binary - prints an unsigned int as a binary number
 * @format: format to print the string
 * @args: va_list that contains an unsigned int to print
 * Return: number of characters printed
 */
int print_binary(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int binary[32], i, count;
	(void)format;

	for (i = 31; i >= 0; i--)
	{
		binary[i] = num % 2;
		num /= 2;
	}
	for (i = 0; i < 32 && binary[i] == 0; i++)
		;
	for (; i < 32; i++)
	{
		_putchar(binary[i] + '0');
		count++;
	}
	return (count);
}
