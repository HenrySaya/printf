#include "main.h"
/**
 * print_digit - function to print integers
 *
 * @num: integer value to be printed
 * Return: return the count
 */
int print_digit(int num)
{
	int count = 0;

	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}

	if (num == 0)
	{
		write(1, "0", 1);
		count++;
	}
	else
	{
		char buffer[10];
		int i = 0;

		while (num > 0)
		{
			buffer[i++] = num % 10 + '0';
			num /= 10;
		}

		while (i > 0)
		{
			write(1, &buffer[--i], 1);
			count++;
		}
	}
	return (count);
}
