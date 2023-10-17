#include "main.h"
/**
 * print_digspecial - handles o x u specifiers
 *
 * @num: integer to be converted
 * @specifier: describes the data type
 * Return: returns count
 */
int print_digspecial(unsigned int num, char specifier)
{
	int count = 0;

	char buffer[10];
	int i = 0;

	while (num > 0)
	{
		int digit = num % 10;

		buffer[i++] = (digit < 10)
			? digit + '0'
			: digit - 10 + ((specifier == 'x') ? 'a' : 'A');
		num /= 10;
	}

	if (specifier == 'o')
	{
		while (i > 0)
		{
			write(1, &buffer[--i], 1);
			count++;
		}
	}
	if (specifier == 'u' || specifier == 'x' || specifier == 'X')
	{
		while (i > 0)
		{
			write(1, &buffer[--i], 1);
			count++;
		}
	}

	return (count);
}
