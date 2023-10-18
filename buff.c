#include "main.h"

void print_buffer(char b[], int *ind);
int print_format(char specifier, va_list ap);
/**
 * _printf-prints a function
 * @format:format
 * Return: printed output
 */
int _printf(const char *format, ...)
{
	char b[BUFF_SIZE];
	int ind = 0;
	int ch = 0;

	if (format == NULL)
		return (-1);

	va_list args;

	va_start(args, format);

	ch = print_format(char specifier, va_list ap);
	va_end(args);

	return (ch);
}
/**
 * print_buffer-prints whats in the buffer
 * @b:characters
 * @ind:buffer index
 */
void print_buffer(char b[], int *ind)
{
	if (*ind > 0)
		write(1, &b[0], *ind);
	*ind = 0;
}
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
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(ap, int));
	else if (specifier == 'x' || specifier == 'X')
		count += print_digspecial(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'u')
		count += print_digspecial(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'o')
		count += print_digspecial(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'b')
		count += print_binary(va_arg(ap, unsigned int));
	return (count);

	print_buffer(b, &ind)
	return (ch);
}
