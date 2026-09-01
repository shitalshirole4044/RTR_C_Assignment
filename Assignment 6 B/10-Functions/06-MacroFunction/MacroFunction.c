#include <stdio.h>

#define MAX_NUMBER(a, b) ((a > b) ? a : b)

int main(int argc, char *argv[], char *envp[])
{
    int iNum_01_ss;
    int iNum_02_ss;
    int iResult_ss;

    float fNum_01_ss;
    float fNum_02_ss;
    float fResult_ss;

    printf("\n\n");
    printf("Enter An Integer Number : \n\n");
    scanf("%d", &iNum_01_ss);

    printf("\n\n");
    printf("Enter Another Integer Number : \n\n");
    scanf("%d", &iNum_02_ss);

    iResult_ss = MAX_NUMBER(iNum_01_ss, iNum_02_ss);
    printf("\n\n");
    printf("Result Of Macro Function MAX_NUMBER = %d\n", iResult_ss);

    printf("\n\n");

    printf("\n\n");
    printf("Enter A Floating Point Number : \n\n");
    scanf("%f", &fNum_01_ss);

    printf("\n\n");
    printf("Enter Another Floating Point Number : \n\n");
    scanf("%f", &fNum_02_ss);

    fResult_ss = MAX_NUMBER(fNum_01_ss, fNum_02_ss);
    printf("\n\n");
    printf("Result Of Macro Function MAX_NUMBER = %f\n", fResult_ss);

    printf("\n\n");

    return(0);
}
