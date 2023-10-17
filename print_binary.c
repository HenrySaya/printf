#include "main.h"
/**
 * print_binary - function to convert integer to binary equivalent
 *
 * @num: integer to be converted
 * Return: Always 0
 */
int print_binary(unsigned int num)
{
	char binary[32];
	int index = 0;

	if (num == 0)
	{
		binary[index++] = '0';
	}
	else
	{
		while (num > 0)
		{
			binary[index++] = (num % 2) + '0';
			num /= 2;
		}
	}
	while (index > 0)
	{
		write(1, &binary[--index], 1);
	}

	return (0);
}
