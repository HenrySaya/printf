#include "../main.h"
#include <stdio.h>

int main(void)
{
    /* tests for task 0*/
    int len, len2;


    len = _printf("The character is %c\n", 'A');
    len2 = printf("The character is %c\n", 'A');
    printf("Length:[%d, %d]\n\n", len, len2);
    
    len = _printf("This is a %s\n", "test");
    len2 = printf("This is a %s\n", "test");
    printf("Length:[%d, %d]\n\n", len, len2);

    len = _printf("This is a %% sign\n");
    len2 = printf("This is a %% sign\n");
    printf("Length:[%d, %d]\n\n", len, len2);

    len = _printf("Null character: %c\n", '\0');
    len2 = printf("Null character: %c\n", '\0');
    printf("Length:[%d, %d]\n\n", len, len2);

    len = _printf("Special character: %c\n", '#');
    len2 = printf("Special character: %c\n", '#');
    printf("Length:[%d, %d]\n\n", len, len2);

    len = _printf("Empty string: %s\n", "");
    len2 = printf("Empty string: %s\n", "");
    printf("Length:[%d, %d]\n\n", len, len2);

    len2 = printf("%c and %s and %c\n", 'A', "test", 'B');
    len = _printf("%c and %s and %c\n", 'A', "test", 'B');
    printf("Length:[%d, %d]\n\n", len, len2);

    return (0);
}
