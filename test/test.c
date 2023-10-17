#include "../main.h"
#include <stdio.h>

int main(void)
{
	int count;
	int len;

	len = printf("Character :%c\n", 'R');
	count = _printf("Character :%c\n", 'F');

	printf("Length: [%d]\n", len);
	_printf("Length: [%d]\n", count);

	printf("String: %s\n", "Real print");
	_printf("String: %s\n", "fake print");

	printf("100%%\n");
	_printf("100%%\n");

	_printf("%b\n", 98);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	return (0);
}
