#include <stdio.h>

int main(void)
{
    int num = 5;
    const int* ptr = NULL;

    ptr = &num;
    printf("\n");
    printf("Current Value Of 'num' = %d\n", num);
    printf("Current 'ptr' (Address of 'num') = %p\n", ptr);

    num++;
    printf("\n\n");
    printf("After num++, value of 'num' = %d\n", num);

    ptr++;

    printf("\n\n");
    printf("After ptr++, value of 'ptr' = %p\n", ptr);
    printf("Value at this new 'ptr' = %d\n", *ptr);
    printf("\n");
    return(0);
}
