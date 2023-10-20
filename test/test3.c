#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

/**
 * main -Entry point
 *
 * Return: 0 on success, error code otheerwise
 */
int main (void)
{
	int len, len2;
	long int l = (long)INT_MAX + 1024;

	len = _printf("%i\n", -1024);
	len2 = printf("%i\n", -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	_printf("%i\n", 0);
	printf("%i\n", 0);

	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	
	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);

	_printf("%i\n", l);
	printf("%i\n", l);

	_printf("There is %ibytes in %i KB\n", 1024,1);
	printf("There is %ibytes in %i KB\n", 1024,1);

	_printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("%i - %i = %i\n", 1024, 2048, -1024);
	
	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%i\n", 1024);
	printf("%i\n", 1024);

	_printf("%i\n", 0);
	printf("%i\n", 0);
	_printf("%d == %i\n", 1021,1021);
	printf("%d == %i\n", 1021,1021);

	printf("iddi%diddiiddi\n", 1024);
	_printf("iddi%diddiiddi\n", 1024);

	printf("%d", 10000);
	_printf("%d", 10000);

	_printf("%i", 10000);
	printf("%i", 10000);
	return (0);
}
