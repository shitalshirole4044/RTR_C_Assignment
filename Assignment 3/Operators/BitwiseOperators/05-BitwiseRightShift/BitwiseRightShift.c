#include <stdio.h>

int main(void)
{
    void PrintBinaryFormOfNumber(unsigned int);

    unsigned int a;
    unsigned int num_bits_ss_ss;
    unsigned int result_ss;

    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &a);

    printf("\n\n");
    printf("By How Many Bits Do You Want To Shift A = %d To The Right ", a);
    scanf("%u", &num_bits_ss_ss);

    printf("\n\n\n\n");
    result_ss = a >> num_bits_ss_ss;
    printf("Bitwise RIGHT SHIFTing A = %d By %d Bits \nGives The result = %d \n\n", a, num_bits_ss, result_ss);
    PrintBinaryFormOfNumber(a);
    PrintBinaryFormOfNumber(result_ss);

    return 0;
}

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
    unsigned int quotient_ss, remainder_ss;
    unsigned int num;
    unsigned int binary_array_ss[8];
    int i;

    for (i = 0; i < 8; i++)
        binary_array_ss[i] = 0;

    printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
    num = decimal_number;
    i = 7;
    while (num != 0)
    {
        quotient_ss = num / 2;
        remainder_ss = num % 2;
        binary_array_ss[i] = remainder_ss;
        num = quotient_ss;
        i--;
    }

    for (i = 0; i < 8; i++)
        printf("%u", binary_array_ss[i]);

    printf("\n\n");
}