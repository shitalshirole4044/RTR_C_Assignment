#include <stdio.h>
int main(void)
{
    char option_ss, ch = '\0';

    printf("\n\n");
    printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
    printf("Enter y oy Y To Initiate User Controlled Infinite Loop : ");
    printf("\n\n");
    option_ss = getch();
    if (option_ss == 'Y' || option_ss == 'y')
    {
        for (;;)
        {
            printf("In Loop\n");
            ch = getch();
            if (ch == 'Q' || ch == 'q')
                break;
        }
    }

    printf("\n\n");
    printf("EXITTING USER CONTROLLED INFINITE LOOP");
    printf("\n\n");

    return(0);
}
