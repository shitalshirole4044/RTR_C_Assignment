#include <stdio.h>
int main(void)
{
    int num_month_ss;

    printf("\n\n");

    printf("Enter Number Of Month (1 to 12) : ");
    scanf("%d", &num_month_ss);

    printf("\n\n");

    if (num_month_ss == 1)
        printf("Month Number %d Is JANUARY !!!\n\n", num_month_ss);

    else if (num_month_ss == 2)
        printf("Month Number %d Is FEBRUARY !!!\n\n", num_month_ss);

    else if (num_month_ss == 3)
        printf("Month Number %d Is MARCH !!!\n\n", num_month_ss);

    else if (num_month_ss == 4)
        printf("Month Number %d Is APRIL !!!\n\n", num_month_ss);

    else if (num_month_ss == 5)
        printf("Month Number %d Is MAY !!!\n\n", num_month_ss);

    else if (num_month_ss == 6)
        printf("Month Number %d Is JUNE !!!\n\n", num_month_ss);

    else if (num_month_ss == 7)
        printf("Month Number %d Is JULY !!!\n\n", num_month_ss);

    else if (num_month_ss == 8)
        printf("Month Number %d Is AUGUST !!!\n\n", num_month_ss);

    else if (num_month_ss == 9)
        printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month_ss);

    else if (num_month_ss == 10)
        printf("Month Number %d Is OCTOBER !!!\n\n", num_month_ss);

    else if (num_month_ss == 11)
        printf("Month Number %d Is NOVEMBER !!!\n\n", num_month_ss);

    else if (num_month_ss == 12)
        printf("Month Number %d Is DECEMBER !!!\n\n", num_month_ss);

    else
        printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month_ss);

    printf("If - Else If - Else Ladder Complete !!!\n");

    return(0);
}