#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
    int i, j;
    int **ptr_iArray = NULL;

    printf("\n\n");

    ptr_iArray = (int **)malloc(NUM_ROWS * sizeof(int *));
    if (ptr_iArray == NULL)
    {
        printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS FAILED !!! EXITTING NOW...\n\n", NUM_ROWS);
        exit(0);
    }
    else
        printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS HAS SUCCEEDED !!!\n\n", NUM_ROWS);

    for (i = 0; i < NUM_ROWS; i++)
    {
        ptr_iArray[i] = (int *)malloc(NUM_COLUMNS * sizeof(int));
        if (ptr_iArray == NULL)
        {
            printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d FAILED !!! EXITTING NOW...\n\n", i);
            exit(0);
        }
        else
            printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d HAS SUCCEEDED !!!\n\n", i);
    }

    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLUMNS; j++)
        {
            *(*(ptr_iArray + i) + j) = (i + 1) * (j + 1);
        }
    }

    printf("\n\n");
    printf("2D Integer Array Elements Along With Addresses : \n\n");
    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLUMNS; j++)
        {
            printf("ptr_iArray_Row[%d][%d] = %d \t \t At Address &ptr_iArray_Row[%d][%d] : %p\n", i, j, ptr_iArray[i][j], i, j, &ptr_iArray[i][j]);
        }
        printf("\n\n");
    }

    for (i = (NUM_ROWS - 1); i >= 0; i--)
    {
        if (*(ptr_iArray + i))
        {
            free(*(ptr_iArray + i));
            *(ptr_iArray + i) = NULL;
            printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", i);
        }
    }

    if (ptr_iArray)
    {
        free(ptr_iArray);
        ptr_iArray = NULL;
        printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return(0);
}
