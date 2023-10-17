#include "main.h"
/**
 * print_format - examine specifier type
 *
 * @specifier:identifies specifier
 * @ap: argument pointer
 * Return: returns count
 */

int print_format(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'i')
		count += print_char(va_arg(ap, int));
	else if (specifier == 'd')
		count += print_string(va_arg(ap, char *));
	else  if (specifier == '%')
		count += write(1, &specifier, 1);
	return (count);
}
