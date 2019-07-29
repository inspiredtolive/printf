#include "holberton.h"

/**
 * print_unprintable - prints ascii hex values of non printable characters
 * @format: format to print string
 * @args: va_list that contains the string to print
 * Return: number of characters printed
 */
int print_unprintable(char *format, va_list args)
{
	char *string = va_arg(args, char *), hex[3];
	int count = 0;
	(void)format;

	if (string == NULL)
		string = "(null)";
	hex[2] = '\0';
	while (*string)
	{
		if (*string < 32 || *string >= 127)
		{
			count += _puts("\\x");
			if (*string % 16 >= 10)
				hex[1] = *string % 16 + 55;
			else
				hex[1] = *string % 16 + '0';
			if (*string / 16 % 16 >= 10)
				hex[0] = *string / 16 % 16 + 55;
			else
				hex[0] = *string / 16 % 16 + '0';
			count += _puts(hex);
		}
		else
			count += _putchar(*string);
		string++;
	}
	return (count);
}
