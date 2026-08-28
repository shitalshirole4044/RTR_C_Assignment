#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int MyAddition(int, int);

    int r;
    int num_01, num_02;

    num_01 = 10;
    num_02 = 20;

    printf("\n\n");
    printf("%d + %d = %d\n", num_01, num_02, MyAddition(num_01, num_02));
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
