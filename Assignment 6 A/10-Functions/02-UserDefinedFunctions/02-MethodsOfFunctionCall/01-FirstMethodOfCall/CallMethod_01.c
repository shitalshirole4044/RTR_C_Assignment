#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    void MyAddition(void);
    int MySubtraction(void);
    void MyMultiplication(int, int);
    int MyDivision(int, int);

    int result_subtraction_ss;
    int a_multiplication_ss, b_multiplication_ss;
    int a_division_ss, b_division_ss, result_division_ss;

    MyAddition();

    result_subtraction_ss = MySubtraction();
    printf("\n\n");
    printf("Subtraction Yields Result = %d\n", result_subtraction_ss);

    printf("\n\n");
    printf("Enter Integer Value For 'A' For Multiplication : ");
    scanf("%d", &a_multiplication_ss);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Multiplication : ");
    scanf("%d", &b_multiplication_ss);

    MyMultiplication(a_multiplication_ss, b_multiplication_ss);

    printf("\n\n");
    printf("Enter Integer Value For 'A' For Division : ");
    scanf("%d", &a_division_ss);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Division : ");
    scanf("%d", &b_division_ss);

    result_division_ss = MyDivision(a_division_ss, b_division_ss);
    printf("\n\n");
    printf("Division Of %d and %d Gives = %d Quotient\n", a_division_ss, b_division_ss, result_division_ss);

    printf("\n\n");

    return(0);
}

void MyAddition(void)
{
    int a, b, sum;

    printf("\n\n");
    printf("Enter Integer Value For 'A' For Addition : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Addition : ");
    scanf("%d", &b);

    sum = a + b;

    printf("\n\n");
    printf("Sum Of %d And %d = %d\n\n", a, b, sum);
}

int MySubtraction(void)
{
    int a, b, subtraction;

    printf("\n\n");
    printf("Enter Integer Value For 'A' For Subtraction : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Subtraction : ");
    scanf("%d", &b);

    subtraction = a - b;
    return(subtraction);
}

void MyMultiplication(int a, int b)
{
    int multiplication;

    multiplication = a * b;

    printf("\n\n");
    printf("Multiplication Of %d And %d = %d\n\n", a, b, multiplication);
}

int MyDivision(int a, int b)
{
    int division_quotient_ss;

    if (a > b)
        division_quotient_ss = a / b;
    else
        division_quotient_ss = b / a;

    return(division_quotient_ss);
}
