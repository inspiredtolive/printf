#include "holberton.h"

/**
 * _print_rev - a function that prints a string
 * in reverse, followed by a new line.
 * @s: input string
 * Return: length of reversed string.
 */

int _print_rev(char *s)
{
	int i, count = 0, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
		count++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (count);
}

/**
 * print_rev - prints a string
 * @format: format to print string
 * @args: va_list that contains the character to print
 * Return: number of characters printed
 */
int print_rev(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int i, count = 0, length = 0;
	(void)format;

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		length++;
		count++;
	}
	for (i = length - 1; i >= 0; i--)
		_putchar(string[i]);

	return (count);
}
