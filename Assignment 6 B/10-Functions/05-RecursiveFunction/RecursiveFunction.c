#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    unsigned int num;

    void recursive_ss(unsigned int);

    printf("\n\n");
    printf("Enter Any Number : \n\n");
    scanf("%u", &num);

    printf("\n\n");
    printf("Output Of recursive Function : \n\n");

    recursive_ss(num);

    printf("\n\n");
    return(0);
}

void recursive_ss(unsigned int n)
{
    printf("n = %d\n", n);

    if(n > 0)
    {
        recursive_ss(n - 1);
    }
}
