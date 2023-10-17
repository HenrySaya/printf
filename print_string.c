#include "main.h"
/**
 * print_string - function that prints string
 * @str: Input string
 * Return: returns count
 */
int print_string(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		print_char((int) *str);
		count++;
		str++;
	}
	return (count);
}
