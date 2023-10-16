#include "main.h"
/**
 * print_char - function to ptint characters
 * @c: character to be printed
 * Return: print output
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}
