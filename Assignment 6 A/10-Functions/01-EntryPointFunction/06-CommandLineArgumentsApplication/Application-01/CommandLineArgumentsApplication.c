#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;
    int num_ss;
    int sum = 0;

    if(argc == 1)
    {
        printf("\n");
        printf("No Numbers Given For Addition !!! Exitting now ...\n\n");
        printf("Usage : CommandLineArgumentsApplication <first number> <second number> ...\n\n");
        exit(0);
    }

    printf("\n");
    printf("Sum Of All Integer Command Line Arguments Is : \n\n");
    for (i = 1; i < argc; i++)
    {
        num_ss = atoi(argv[i]);
        sum = sum + num_ss;
    }

    printf("Sum = %d\n\n", sum);

    return(0);
}
