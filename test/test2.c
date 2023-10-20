#include "../main.h"
#include <stdio.h>

int main(void)
{
    /* tests for task 0*/
    int len, len2;

    /*len = _printf("%s%%%c\n", "Hello", '!');
    len2 = printf("%s%%%c\n", "Hello", '!');
    printf("Length:[%d, %d]\n\n", len, len2);

    len = _printf("Large string: %s", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\n");
    len2 = printf("Large string: %s", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\n");
    printf("Length:[%d, %d]\n\n", len, len2);

    len = _printf("");
    printf("%d\n\n", len);

    printf("\n");
    len = _printf(NULL);
    len2 = printf(NULL);
    printf("%d\n\n", len);
    printf("%d\n\n", len2);

    printf("\n");
    */
    len2 = _printf("NULL string: %s", NULL);
    printf("%d\n\n", len2);
    len = _printf("NULL string: %s", NULL);
    printf("%d\n\n", len);

    printf("\n");
    /*len = _printf("%% %% %%%% %%%%%% %%%%%%%% %%%%%%%%%%%%");*/
    len2 = printf("%% %% %%%% %%%%%% %%%%%%%% %%%%%%%%%%%%");
    printf("%d\n\n", len);
    printf("%d\n\n", len2);

    return (0);
}
