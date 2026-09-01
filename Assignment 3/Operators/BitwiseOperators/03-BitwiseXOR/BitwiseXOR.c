#include <stdio.h>

int main(void)
{
    void PrintBinaryFormOfNumber(unsigned int);

    unsigned int a;
    unsigned int b;
    unsigned int result_SS;

    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &a);

    printf("\n\n");
    printf("Enter Another Integer = ");
    scanf("%u", &b);

    printf("\n\n\n\n");
    result_SS = a ^ b;
    printf("Bitwise XOR-ing Of \nA = %d (Decimal) and B = %d (Decimal) gives result %d (Decimal).\n\n", a, b, result_SS);

    PrintBinaryFormOfNumber(a);
    PrintBinaryFormOfNumber(b);
    PrintBinaryFormOfNumber(result_SS);

    return 0;
}

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
    unsigned int quotientSS, remainderSS;
    unsigned int num;
    unsigned int binary_array_SS[8];
    int i;

    for (i = 0; i < 8; i++)
        binary_array_SS[i] = 0;

    printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
    num = decimal_number;
    i = 7;
    while (num != 0)

    {
        quotientSS = num / 2;
        remainderSS = num % 2;
        binary_array_SS[i] = remainderSS;
        num = quotientSS;
        i--;
    }

    for (i = 0; i < 8; i++)
        printf("%u", binary_array_SS[i]);

    printf("\n\n");
}