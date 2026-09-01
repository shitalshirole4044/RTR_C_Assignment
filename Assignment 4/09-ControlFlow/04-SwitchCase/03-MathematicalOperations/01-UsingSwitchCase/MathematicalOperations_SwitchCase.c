#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a, b;
    int result_ss;

    char option, option_division;

    printf("\n\n");

    printf("Enter Value For 'A' : ");
    scanf("%d", &a);

    printf("Enter Value For 'B' : ");
    scanf("%d", &b);

    printf("Enter Option In Character : \n\n");
    printf("'A' or 'a' For Addition : \n");
    printf("'S' or 's' For Subtraction : \n");
    printf("'M' or 'm' For Multiplication : \n");
    printf("'D' or 'd' For Division : \n\n");

    printf("Enter Option : ");
    option = getch();

    printf("\n\n");

    switch (option)
    {
    case 'A':
    case 'a':
        result_ss = a + b;
        printf("Addition Of A = %d And B = %d Gives result_ss %d !!!\n\n", a, b, result_ss);
        break;

    case 'S':
    case 's':
        if (a >= b)
        {
            result_ss = a - b;
            printf("Subtraction Of B = %d From A = %d Gives result_ss %d !!!\n\n", b, a, result_ss);
        }
        else
        {
            result_ss = b - a;
            printf("Subtraction Of A = %d From B = %d Gives result_ss %d !!!\n\n", a, b, result_ss);
        }
        break;

    case 'M':
    case 'm':
        result_ss = a * b;
        printf("Multiplication Of A = %d And B = %d Gives result_ss %d !!!\n\n", a, b, result_ss);
        break;

    case 'D':
    case 'd':
        printf("Enter Option In Character : \n\n");
        printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
        printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

        printf("Enter Option : ");
        option_division = getch();

        printf("\n\n");

        switch (option_division)
        {
        case 'Q':
        case 'q':
        case '/':
            if (a >= b)
            {
                result_ss = a / b;
                printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", a, b, result_ss);
            }
            else
            {
                result_ss = b / a;
                printf("Division Of B = %d By A = %d Gives Quotient = %d !!!\n\n", b, a, result_ss);
            }
            break;

        case 'R':
        case 'r':
        case '%':
            if (a >= b)
            {
                result_ss = a % b;
                printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", a, b, result_ss);
            }
            else
            {
                result_ss = b % a;
                printf("Division Of B = %d By A = %d Gives Remainder = %d !!!\n\n", b, a, result_ss);
            }
            break;

        default:
            printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division);
            break;

        }

        break;

    default:
        printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option);
        break;
    }

    printf("Switch Case Block Complete !!!\n");

    return(0);
}