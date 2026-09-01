#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(int, int);

    int a, b, result_ss;

    printf("\n\n");
    printf("Enter Integer Value For 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' : ");
    scanf("%d", &b);

    result_ss = MyAddition(a, b);
    printf("\n\n");
    printf("Sum Of %d And %d = %d\n\n", a, b, result_ss);

    return(0);
}

int MyAddition(int a, int b)
{
    int sum;

    sum = a + b;
    return(sum);
}
