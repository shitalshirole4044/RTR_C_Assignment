#include <stdio.h>
int main(void)
{
    int age_ss;

    printf("\n\n");
    printf("Enter age_ss : ");
    scanf("%d", &age_ss);
    printf("\n\n");
    if (age_ss >= 18)
    {
        printf("Entering if-block\n\n");
        printf("You Are Eligible For Voting\n\n");
    }
    else
    {
        printf("Entering else-block\n\n");
        printf("You Are NOT Eligible For Voting\n\n");
    }
    printf("Bye\n\n");
    return(0);
}
