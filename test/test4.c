#include <stdio.h>
#include <stdlib.h>
#include "../main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l = (long int)UINT_MAX + 1024;
	long int res = (long int)INT_MAX * 2;

	len = _printf("%b\n", 1024);
	len2 = printf("10000000000\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	_printf("The binary equivalent of :%d\n", 1024);
	_printf("%b\n", 1024);
	_printf("The binary equivalent of :%d\n", -1024);
	_printf("%b\n", -1024);
	_printf("The binary equivalent of :%d\n", 0);
	_printf("%b\n", 0);
	_printf("The binary equivalent of :%d\n", UINT_MAX);
	_printf("%b\n", UINT_MAX);
	_printf("The binary equivalent of :%d\n", l);
	_printf("%b\n", l);
	_printf("The binary equivalent of :%d bytes and %d\n", 1024, 1);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("The binary equivalent of difference of :%d, %d is %d\n", 2048, 1024, 1024);
	_printf("%b - %b = %b\n", 2048, 1024, 1024);
	_printf("The binary equivalent of the sum of:%d, %d is %d\n", INT_MAX, INT_MAX, res);
	_printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	return (0);
}
