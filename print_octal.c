#include "holberton.h"

/**
 * print_octal - prints an unsigned int as an octal number
 * @format: format to print the string
 * @args: va_list that contains an unsigned int to print
 * Return: number of characters printed
 */
int print_octal(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num_cpy = num;
	char *octal;
	int i, size = 0, count = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	while (num_cpy != 0)
	{
		size++;
		num_cpy /= 8;
	}
	octal = malloc(size);
	if (!octal)
		return (-1);
	for (i = size - 1; i >= 0; i--)
	{
		octal[i] = num % 8 + '0';
		num /= 8;
	}
	for (i = 0; i < size && octal[i] == '0'; i++)
		;
	for (; i < size; i++)
	{
		_putchar(octal[i]);
		count++;
	}
	free(octal);
	return (count);
}
