#include <stdio.h>
int main(void)
{
    char option_ss, ch = '\0';

    printf("\n\n");
    printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");

    do
    {
        do
        {
            printf("\n");
            printf("In Loop...\n");
            ch = getch();
        } while (ch != 'Q' && ch != 'q');
        printf("\n\n");
        printf("EXITTING USER CONTROLLED INFINITE LOOP...");

        printf("\n\n");
        printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN? ");
        option_ss = getch();
    }while (option_ss == 'Y' || option_ss == 'y');

    return(0);
}
