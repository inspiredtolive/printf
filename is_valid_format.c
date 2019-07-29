/**
 * is_valid_format - checks if the format string is valid
 * @format: string to check
 * Return: Valid(1), Invalid(0)
 */
int is_valid_format(char *format)
{
	int i, len, isValid;
	char *valid_chars = "cs%dibur";

	if (!format)
		return (0);
	while (format[0])
	{
		isValid = 0;
		if (format[0] == '%')
		{
			for (i = 0; valid_chars[i] && format[1]; i++)
			{
				if (format[1] == valid_chars[i])
				{
					isValid = 1;
					format += 2;
					break;
				}
			}
			if (isValid == 0)
				return (0);
		}
		else
		{
			format++;
		}
	}
	return (1);
}
