#include <stdio.h>
int main(void)
{
    int iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
    int int_size_ss;
    int iArray_size_ss;
    int iArray_num_elements_ss;

    float fArray[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
    int float_size;
    int fArray_size;
    int fArray_num_elements;

    char cArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
    int char_size;
    int cArray_size;
    int cArray_num_elements;

    printf("\n\n");
    printf("In-line Initialization And Piece-meal Display Of Elements of Array 'iArray[]': \n\n");
    printf("iArray[0]  = %d\n", iArray[0]);
    printf("iArray[1]  = %d\n", iArray[1]);
    printf("iArray[2]  = %d\n", iArray[2]);
    printf("iArray[3]  = %d\n", iArray[3]);
    printf("iArray[4]  = %d\n", iArray[4]);
    printf("iArray[5]  = %d\n", iArray[5]);
    printf("iArray[6]  =%d\n", iArray[6]);
    printf("iArray[7]  = %d\n", iArray[7]);
    printf("iArray[8]  = %d\n", iArray[8]);
    printf("iArray[9]  = %d\n\n", iArray[9]);

    int_size_ss = sizeof(int);
    iArray_size_ss = sizeof(iArray);
    iArray_num_elements_ss = iArray_size_ss / int_size_ss;
    printf("Size Of Data type 'int'  = %d bytes\n", int_size_ss);
    printf("Number Of Elements In 'int' Array 'iArray[]'      = %d Elements\n", iArray_num_elements_ss);
    printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", iArray_num_elements_ss, int_size_ss, iArray_size_ss);

    printf("\n\n");
    printf("In-line Initialization And Piece-meal Display Of Elements of Array 'fArray[]': \n\n");
    printf("fArray[0]   = %f\n", fArray[0]);
    printf("fArray[1]  = %f\n", fArray[1]);
    printf("fArray[2]  = %f\n", fArray[2]);
    printf("fArray[3]  = %f\n", fArray[3]);
    printf("fArray[4]= %f\n", fArray[4]);
    printf("fArray[5]  = %f\n", fArray[5]);
    printf("fArray[6] = %f\n", fArray[6]);
    printf("fArray[7]  = %f\n", fArray[7]);
    printf("fArray[8]  = %f\n", fArray[8]);
    printf("fArray[9] = %f\n\n", fArray[9]);

    float_size = sizeof(float);
    fArray_size = sizeof(fArray);
    fArray_num_elements = fArray_size / float_size;
    printf("Size Of Data type 'float' = %d bytes\n", float_size);
    printf("Number Of Elements In 'float' Array 'fArray[]'  = %d Elements\n", fArray_num_elements);
    printf("Size Of Array 'fArray[]' (%d Elements * %d Bytes)  = %d Bytes\n\n", fArray_num_elements, float_size, fArray_size);

    printf("In-line Initialization And Piece-meal Display Of Elements of Array 'cArray[]': \n\n");
    printf("cArray[0] ''  = %c\n", cArray[0]);
    printf("cArray[1] = %c\n", cArray[1]);
    printf("cArray[2]  = %c\n", cArray[2]);
    printf("cArray[3] = %c\n", cArray[3]);
    printf("cArray[4] = %c\n", cArray[4]);
    printf("cArray[5] = %c\n", cArray[5]);
    printf("cArray[6]  = %c\n", cArray[6]);
    printf("cArray[7]  = %c\n", cArray[7]);
    printf("cArray[8]  = %c\n", cArray[8]);
    printf("cArray[9]   = %c\n", cArray[9]);
    printf("cArray[10] = %c\n", cArray[10]);
    printf("cArray[11]  = %c\n", cArray[11]);
    printf("cArray[12] = %c\n\n", cArray[12]);

    char_size = sizeof(char);
    cArray_size = sizeof(cArray);
    cArray_num_elements = cArray_size / char_size;
    printf("Size Of Data type 'char'  = %d bytes\n", char_size);
    printf("Number Of Elements In 'char' Array 'cArray[]' = %d Elements\n", cArray_num_elements);
    printf("Size Of Array 'cArray[]' (%d Elements * %d Bytes)= %d Bytes\n\n", cArray_num_elements, char_size, cArray_size);

    return(0);
}
