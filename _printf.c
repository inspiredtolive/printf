#include "holberton.h"

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int i, written = 0;
	va_list args;

	print_fn getfn[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{"%d", print_num},
		{"%i", print_num},
		{"%b", print_binary},
		{"%u", print_unsign},
		{"%r", print_rev},
		{NULL, NULL}
	};

	if (!is_valid_format(format))
		return (-1);
	va_start(args, format);
	while (format[0])
	{
		if (format[0] == '%')
		{
			for (i = 0; getfn[i].specifier; i++)
			{
				if (format[1] == getfn[i].specifier[1])
				{
					written += getfn[i].fn(getfn[i].specifier, args);
					format += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(format[0]);
			written += 1;
			format++;
		}
	}
	return (written);
}
