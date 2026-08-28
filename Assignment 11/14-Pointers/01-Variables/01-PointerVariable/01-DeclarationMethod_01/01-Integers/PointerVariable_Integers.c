#include <stdio.h>

int main(void)
{
    int num;
    int *ptr = NULL;

    num = 10;

    printf("\n\n");

    printf(" ****** BEFORE ptr = &num ******\n\n");
    printf("Value Of 'num'              = %d\n\n", num);
    printf("Address Of 'num'            = %p\n\n", &num);
    printf("Value At Address Of 'num' = %d\n\n", *(&num));

    ptr = &num;

    printf("\n\n");

    printf(" ****** AFTER ptr = &num ******\n\n");
    printf("Value Of 'num'              = %d\n\n", num);
    printf("Address Of 'num'            = %p\n\n", ptr);
    printf("Value At Address Of 'num' = %d\n\n", *ptr);

    return(0);
}
