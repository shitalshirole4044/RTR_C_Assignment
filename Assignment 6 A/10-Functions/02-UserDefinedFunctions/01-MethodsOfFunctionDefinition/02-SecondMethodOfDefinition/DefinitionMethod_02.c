#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(void);

    int result_ss;

    result_ss = MyAddition();

    printf("\n\n");
    printf("Sum = %d\n\n", result_ss);
    return(0);
}

int MyAddition(void)
{
    int a, b, sum;

    printf("\n\n");
    printf("Enter Integer Value For 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' : ");
    scanf("%d", &b);

    sum = a + b;

    return(sum);
}
