#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(int, int);

    int r;
    int num_01_ss, num_02_ss;
    int num_03_ss, num_04_ss;

    num_01_ss = 10;
    num_02_ss = 20;
    num_03_ss = 30;
    num_04_ss = 40;

    r = MyAddition(MyAddition(num_01_ss, num_02_ss), MyAddition(num_03_ss, num_04_ss));

    printf("\n\n");
    printf("%d + %d + %d + %d = %d\n", num_01_ss, num_02_ss, num_03_ss, num_04_ss, r);
    printf("\n\n");

    return(0);
}

int MyAddition(int a, int b)
{
    int sum;

    sum = a + b;
    return(sum);
}
