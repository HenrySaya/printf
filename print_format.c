#include "main.h"
/**
 * print_format - examine specifier type
 *
 * @specifier: help specifier identification
 * @ap: argument pointer
 * Return: returns count
 */

int print_format(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_string(va_arg(ap, char *));
	else if (specifier == '%')
		count += write(1, &specifier, 1);
	else if (specifier == 'b')
		count += print_binary(va_arg(ap, unsigned int));
	return (count);
}
