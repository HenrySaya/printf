#include "main.h"
/**
 * print_digit - function to handle specifier d and x
 */
int print_digit(int num) 
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num == 0)
	{
		_putchar('0');
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
			_putchar(buffer[--i]);
			count++;
		}
    	}
    
    	return (count);
}
