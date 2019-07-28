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
