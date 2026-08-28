#include <stdio.h>

int main(void)
{
    int num;
    int *ptr = NULL;
    int **pptr = NULL;

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

    pptr = &ptr;

    printf("\n\n");

    printf(" ****** AFTER pptr = &ptr ******\n\n");
    printf("Value Of 'num'                          = %d\n\n", num);
    printf("Address Of 'num' (ptr)                  = %p\n\n", ptr);
    printf("Address Of 'ptr'  (pptr)                = %p\n\n", pptr);
    printf("Value At Address Of 'ptr' (*pptr)       = %p\n\n", *pptr);
    printf("Value At Address Of 'num' (*ptr) (*pptr) = %d\n\n", **pptr);

    return(0);
}
