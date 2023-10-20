#include "main.h"
/**
 * print_binary - function to convert integer to binary equivalent
 *
 * @num: integer to be converted
 * Return: retun the count
 */
int print_binary(int num)
{
	char binary[32];
	int index = 0;
	int count = 0;

	unsigned int u_num;

	if (num < 0)
	{
		binary[index++] = '1';
		u_num = (unsigned int)(-num);
		count++;
	}
	else
	{
		u_num = (unsigned int)num;
	}

	if (u_num == 0)
	{
		binary[index++] = '0';
		count++;
	}
	else
	{
		while (u_num > 0)
		{
			binary[index++] = (u_num % 2) + '0';
			u_num /= 2;
			count++;
		}
	}
	while (index > 0)
	{
		write(1, &binary[--index], 1);
	}

	return (count);
}
