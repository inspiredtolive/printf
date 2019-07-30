#include "holberton.h"

/**
 * _print_rot13 - a function that encodes a string using rot13.
 * @s: input string
 * Return: output string
 */

int _print_rot13(char *s)
{
	int i, count = 0;
	int char_i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (char_i = 0; input[char_i] != '\0'; char_i++)
		{
			if (s[i] == input[char_i])
			{
				_putchar(output[char_i]);
				break;
			}
		}
		count++;
	}
	return (count);
}
