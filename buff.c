#include "main.h"

void print_buffer(char b[], int *ind);
/**
 * _printf-prints a function
 * @format:format
 * Return: printed output
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	char specifier;
	int c, ind = 0;
	va_list args, ap;
	char b[BUFF_SIZE];
	int ch = 0;

	va_start(args, format);
	for (c = 0; format && format[c] != '\0'; c++)
	{
		if (format[c] != '%')
		{
			b[ind++] = format[c];
			if (ind == BUFF_SIZE)
				print_buffer(b, &ind);
			ch++;
		}
		else
		{
		print_buffer(b, &ind);
		specifier = print_format(specifier, ap);
		ch += BUFF_SIZE;
		}
	}
	print_buffer(b, &ind);
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
