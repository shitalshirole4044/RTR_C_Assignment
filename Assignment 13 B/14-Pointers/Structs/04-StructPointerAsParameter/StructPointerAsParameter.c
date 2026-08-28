#include <stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
};

int main(void)
{
    void ChangeValues(struct MyData *);

    struct MyData *pData = NULL;

    printf("\n\n");

    pData = (struct MyData *)malloc(sizeof(struct MyData));
    if (pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY TO 'sturct MyData' !!! EXITTING NOW ... \n\n");
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY TO 'sturct MyData' !!!\n\n");

    pData->i = 30;
    pData->f = 11.45f;
    pData->d = 1.2995;

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", pData->i);
    printf("f = %f\n", pData->f);
    printf("d = %lf\n", pData->d);

    ChangeValues(pData);

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", pData->i);
    printf("f = %f\n", pData->f);
    printf("d = %lf\n", pData->d);

    if (pData)
    {
        free(pData);
        pData = NULL;
        printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return(0);
}

void ChangeValues(struct MyData *pParam_Data)
{
    pParam_Data->i = 9;
    pParam_Data->f = 8.2f;
    pParam_Data->d = 6.1998;
}
