#include <stdio.h>

int main(void)
{
    unsigned long iArray_One[5];
    unsigned long iArray_Two[5][3];
    unsigned long iArray_Three[100][100][5];

    unsigned long num_rows_2D;
    unsigned long num_columns_2D;

    unsigned long num_rows_3D;
    unsigned long num_columns_3D;
    unsigned long depth_3D;

    printf("\n\n");
    printf("Size of 1-D integer array iArray_One = %lu\n", sizeof(iArray_One));
    printf("Number of elements in 1-D integer array iArray_One = %lu\n", (sizeof(iArray_One) / sizeof(int)));

    printf("\n\n");
    printf("Size of 2-D integer array iArray_Two = %lu\n", sizeof(iArray_Two));

    printf("Number rows in 2-D integer array iArray_Two = %lu\n", (sizeof(iArray_Two) / sizeof(iArray_Two[0])));
    num_rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two[0]));

    printf("Number of elements  in each row in 2-D integer array iArray_Two = %lu\n", (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0])));
    num_columns_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));

    printf("Number of elements in total in 2-D Array iArray_Two = %d\n", (num_rows_2D * num_columns_2D));

    printf("\n\n");

    printf("\n\n");
    printf("Size of 3-D integer array iArray_Three = %lu\n", sizeof(iArray_Three));

    printf("Number rows in 3-D integer array iArray_Three = %lu\n", (sizeof(iArray_Three) / sizeof(iArray_Three[0])));
    num_rows_3D = (sizeof(iArray_Three) / sizeof(iArray_Three[0]));

    printf("Number of elements  in one row in 3-D integer array iArray_Three = %lu\n", (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0])));
    num_columns_3D = (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0]));

    printf("Number of elementsin one column in one row in 3-D integer array iArray_Three = %lu\n", (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0])));
    depth_3D = (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0]));

    printf("Number of elements in total in 3-D Array iArray_Three = %d\n", (num_rows_3D * num_columns_3D * depth_3D));

    printf("\n\n");

    return(0);
}
