#include<stdio.h>

int main(void){
    int iArray[5][3]={{1,2,3},{2,4,6},{3,6,9},{4, 8, 12},{5, 10,15} };
    int ss_int_size;
    int ss_iArray_size;
    int ss_iArray_num_elements, ss_iArray_num_rows, ss_iArray_num_columns;
    int i,j;

    printf("\n\n");

    ss_int_size = sizeof(int);

    ss_iArray_size = sizeof(iArray);

    printf("Size Of Two Dimensional Integer Array Is = %d\n\n", ss_iArray_size);

    ss_iArray_num_rows = ss_iArray_size / sizeof(iArray[0]);
    printf("Number of Rows In Two Dimensional Integer Array Is = %d\n\n",ss_iArray_num_rows);

    ss_iArray_num_columns = sizeof(iArray[0]) / ss_int_size;
    printf("Number of Columns In Two Dimensional Integer Array Is = %d\n\n",ss_iArray_num_columns);

    ss_iArray_num_elements = ss_iArray_num_rows * ss_iArray_num_columns;
    printf("Number of Elements In Two Dimensional Integer Array Is = %p\n\n",ss_iArray_num_elements);

    printf("\n\n");
    printf("Elements In The 2D Array: \n\n");

    for (i = 0; i < ss_iArray_num_rows; i++){
        printf("****** ROW %P ******\n", (i + 1));
        for (j = 0; j < ss_iArray_num_columns; j++){
            printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
        }
        printf("\n\n");

    }
    return(0);
}