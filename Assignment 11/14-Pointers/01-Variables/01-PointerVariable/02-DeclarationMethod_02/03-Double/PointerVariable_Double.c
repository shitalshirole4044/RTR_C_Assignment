#include <stdio.h>

int main(void)
{
    double num;
    double* ptr = NULL;

    num = 2.34343434f;

    printf("\n\n");

    printf(" ****** BEFORE ptr = &num ******\n\n");
    printf("Value Of 'num'              = %lf\n\n", num);
    printf("Address Of 'num'            = %p\n\n", &num);
    printf("Value At Address Of 'num' = %lf\n\n", *(&num));

    ptr = &num;

    printf("\n\n");

    printf(" ****** AFTER ptr = &num ******\n\n");
    printf("Value Of 'num'              = %lf\n\n", num);
    printf("Address Of 'num'            = %p\n\n", ptr);
    printf("Value At Address Of 'num' = %lf\n\n", *ptr);

    return(0);
}
