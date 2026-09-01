#include <stdio.h>

int main(void)
{
    int i, j;
    char ch_01_ss, ch_02_ss;

    int a, result_int_ss;
    float f, result_float_ss;

    int i_explicit_ss;
    float f_explicit_ss;

    printf("\n\n");

    i = 70;
    ch_01_ss = i;
    printf("I = %d\n", i);
    printf("Charater 1  = %c\n\n", ch_01_ss);

    ch_02_ss = 'Q';
    j = ch_02_ss;
    printf("Charater 2 = %c\n", ch_02_ss);
    printf("J = %d\n\n", j);

    a = 5;
    f = 7.8f;
    result_float_ss = a + f;
    printf("Integer a = %d And Floating Point Number %f Added Gives Floating Point Sum = %f\n\n", a, f, result_float_ss);

    result_int_ss = a + f;
    printf("Integer a = %d And Floating Point Number %f Added Gives Integer Sum = %d\n\n", a, f, result_int_ss);

    f_explicit_ss = 30.121995f;
    i_explicit_ss = (int)f_explicit_ss;
    printf("Floating Point Number Which Will Be Type Casted Explicitly = %f\n", f_explicit_ss);
    printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", f_explicit_ss, i_explicit_ss);

    return(0);
}