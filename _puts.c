#include "holberton.h"

/**
 * _puts - a function that prints a string
 * followed by a new line, to stdout.
 * @str: input string
 * Return: character count of string.
 */


int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
			str++;
			count++;
	}
	return (count);
}
