#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("Character :%c\n", 'R');
	_printf("Character :%c\n", 'F');

	printf("String: %s\n", "Real print");
	_printf("String: %s\n", "fake print");

	printf("100%%");
	_printf("100%%");

	return (0);
}
