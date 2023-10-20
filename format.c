#include "main.h"
/**
 * _printf - function that produces output
 *
 * @format: input argument
 * Return: returns count
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	va_start(ap, format);
	count = 0;

	if (format == NULL)
	{
		write(1, "Error: format string is NULL\n", 29);
		return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			count += print_format(*format, ap);
		}
		else
			count += write(1, format, 1);

		++format;
	}

	va_end(ap);
	return (count);
}
