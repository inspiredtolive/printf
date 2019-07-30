#include "holberton.h"

/**
 * _puts - a function that prints a string
 * followed by a new line, to stdout.
 * @str: input string
 * Return: character count of string.
 */
int _puts(char *string)
{
	int count = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}
	return (count);
}
