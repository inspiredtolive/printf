#include "holberton.h"

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int written = 0;
	int (*print_fn)(char *, va_list);
	char specifier[3];
	va_list args;

	if (!is_valid_format(format))
		return (-1);
	specifier[2] = '\0';
	va_start(args, format);
	while (format[0])
	{
		if (format[0] == '%')
		{
			print_fn = get_print_fn(format);
			if (print_fn)
			{
				specifier[0] = '%';
				specifier[1] = format[1];
				written += print_fn(specifier, args);
			}
			format += 2;
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
