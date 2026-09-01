#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(int, int);

    int r;
    int num_01_ss, num_02_ss;

    num_01_ss = 10;
    num_02_ss = 20;

    printf("\n\n");
    printf("%d + %d = %d\n", num_01_ss, num_02_ss, MyAddition(num_01_ss, num_02_ss));
    printf("\n\n");

    return(0);
}

int MyAddition(int a, int b)
{
    int Add(int, int);

    return(Add(a, b));
}

int Add(int x, int y)
{
    return(x + y);
}
