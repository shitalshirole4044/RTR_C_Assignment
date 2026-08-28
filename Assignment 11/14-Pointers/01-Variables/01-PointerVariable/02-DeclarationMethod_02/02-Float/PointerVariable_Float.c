#include <stdio.h>

int main(void)
{
    float num;
    float* ptr = NULL;

    num = 6.9f;

    printf("\n\n");

    printf(" ****** BEFORE ptr = &num ******\n\n");
    printf("Value Of 'num'              = %f\n\n", num);
    printf("Address Of 'num'            = %p\n\n", &num);
    printf("Value At Address Of 'num' = %f\n\n", *(&num));

    ptr = &num;

    printf("\n\n");

    printf(" ****** AFTER ptr = &num ******\n\n");
    printf("Value Of 'num'              = %f\n\n", num);
    printf("Address Of 'num'            = %p\n\n", ptr);
    printf("Value At Address Of 'num' = %f\n\n", *ptr);

    return(0);
}
