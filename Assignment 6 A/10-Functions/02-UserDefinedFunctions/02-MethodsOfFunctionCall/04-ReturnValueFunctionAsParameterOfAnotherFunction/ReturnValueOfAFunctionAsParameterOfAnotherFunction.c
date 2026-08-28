#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(int, int);

    int r;
    int num_01, num_02;
    int num_03, num_04;

    num_01 = 10;
    num_02 = 20;
    num_03 = 30;
    num_04 = 40;

    r = MyAddition(MyAddition(num_01, num_02), MyAddition(num_03, num_04));

    printf("\n\n");
    printf("%d + %d + %d + %d = %d\n", num_01, num_02, num_03, num_04, r);
    printf("\n\n");

    return(0);
}

int MyAddition(int a, int b)
{
    int sum;

    sum = a + b;
    return(sum);
}
