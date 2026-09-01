#include <stdio.h>
int main(void)
{
    int num_ss;

    printf("\n\n");

    printf("Enter Value  : ");
    scanf("%d", &num_ss);

    if (num_ss < 0)
        printf("Num1 = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num_ss);

    else if ((num_ss > 0) && (num_ss <= 100))
        printf("Num1 = %d Is Between 0 And 100 !!!\n\n", num_ss);

    else if ((num_ss > 100) && (num_ss <= 200))
        printf("Num1 = %d Is Between 100 And 200 !!!\n\n", num_ss);

    else if ((num_ss > 200) && (num_ss <= 300))
        printf("Num1 = %d Is Between 200 And 300 !!!\n\n", num_ss);

    else if ((num_ss > 300) && (num_ss <= 400))
        printf("Num1 = %d Is Between 300 And 400 !!!\n\n", num_ss);

    else if ((num_ss > 400) && (num_ss <= 500))
        printf("Num1 = %d Is Between 400 And 500 !!!\n\n", num_ss);

    else if (num_ss > 500)
        printf("Num1 = %d Is Greater Than 500 !!!\n\n", num_ss);

    return(0);
}
