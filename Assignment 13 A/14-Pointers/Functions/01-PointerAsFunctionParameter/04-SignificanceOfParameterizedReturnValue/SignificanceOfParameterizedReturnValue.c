#include <stdio.h>

enum
{
    NEGATIVE = -1,
    ZERO,
    POSITIVE
};

int main(void)
{
    int Difference(int, int, int *);

    int a;
    int b;
    int answer, ret;

    printf("\n\n");
    printf("Enter Value Of 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Value Of 'B' : ");
    scanf("%d", &b);

    ret = Difference(a, b, &answer);

    printf("\n\n");
    printf("Difference Of %d And %d = %d\n\n", a, b, answer);

    if (ret == POSITIVE)
        printf("The Difference Of %d And %d Is Positive !!!\n\n", a, b);

    else if (ret == NEGATIVE)
        printf("The Difference Of %d And %d Is Negative !!!\n\n", a, b);

    else
        printf("The Difference Of %d And %d Is Zero !!!\n\n", a, b);

    return(0);
}

int Difference(int x, int y, int *diff)
{
    *diff = x - y;

    if (*diff > 0)
        return(POSITIVE);

    else if (*diff < 0)
        return(NEGATIVE);

    else
        return(ZERO);
}
