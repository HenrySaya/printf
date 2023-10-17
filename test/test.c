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

	printf("100%%");
	_printf("100%%");

	return (0);
}
