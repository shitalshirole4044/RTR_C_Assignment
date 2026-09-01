#include <stdio.h>

int main(void)
{
    int a, b;
    int p, q;
    char ch_result_01_ss, ch_result_02_ss;
    int i_result_01_ss, i_result_02_ss;

    printf("\n\n");

    a = 7;
    b = 5;
    ch_result_01_ss = (a > b) ? 'A' : 'B';
    i_result_01_ss = (a > b) ? a : b;
    printf("Ternary Operator Answer 1  %c and %d \n\n", ch_result_01_ss, i_result_01_ss);

    p = 30;
    q = 30;
    ch_result_02_ss = (p != q) ? 'P' : 'Q';
    i_result_02_ss = (p != q) ? p : q;
    printf("Ternary Operator Answer 2  %c and %d \n\n", ch_result_02_ss, i_result_02_ss);

    printf("\n\n");
    return(0);
}
