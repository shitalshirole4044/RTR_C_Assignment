#include <stdio.h>
int main(void)
{
    int iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
    int int_size_ss;
    int iArray_size_ss;
    int iArray_num_elements_ss;

    float fArray_ss[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
    int float_size_ss;
    int fArray_size_ss;
    int fArray_num_elements_ss;

    char cArray_ss[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
    int char_size_ss;
    int cArray_size_ss;
    int cArray_num_elements_ss;

    int i;

    printf("\n\n");
    printf("In-line Initialization And Loop (for) Display Of Elements of Array : \n\n");

    int_size_ss = sizeof(int);
    iArray_size_ss = sizeof(iArray);
    iArray_num_elements_ss = iArray_size_ss / int_size_ss;

    for (i = 0; i < iArray_num_elements_ss; i++)
    {
        printf("iArray[%d] (Element %d)  = %d\n", i, (i + 1), iArray[i]);
    }

    printf("\n\n");
    printf("Size Of Data type 'int' = %d bytes\n", int_size_ss);
    printf("Number Of Elements In 'int' Array '      = %d Elements\n", iArray_num_elements_ss);
    printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", iArray_num_elements_ss, int_size_ss, iArray_size_ss);

    printf("\n\n");
    printf("In-line Initialization And Loop (while) Display Of Elements of Array 'fArray_ss[]': \n\n");

    float_size_ss = sizeof(float);
    fArray_size_ss = sizeof(fArray_ss);
    fArray_num_elements_ss = fArray_size_ss / float_size_ss;

    i = 0;
    while (i < fArray_num_elements_ss)
    {
        printf("fArray_ss[%d] (Element %d)  = %f\n", i, (i + 1), fArray_ss[i]);
        i++;
    }

    printf("\n\n");
    printf("Size Of Data type 'float'  = %d bytes\n", float_size_ss);
    printf("Number Of Elements In 'float' Array '   = %d Elements\n", fArray_num_elements_ss);
    printf("Size Of Array (%d Elements * %d Bytes)   = %d Bytes\n\n", fArray_num_elements_ss, float_size_ss, fArray_size_ss);

    printf("\n\n");
    printf("In line Initialization And Loop Display Of Elements of Array : \n\n");

    char_size_ss = sizeof(char);
    cArray_size_ss = sizeof(cArray_ss);
    cArray_num_elements_ss = cArray_size_ss / char_size_ss;

    i = 0;
    do
    {
        printf("cArray_ss[%d] (Element %d)  = %c\n", i, (i + 1), cArray_ss[i]);
        i++;
    } while (i < cArray_num_elements_ss);

    printf("\n\n");
    printf("Size Of Data type 'char'= %d bytes\n", char_size_ss);
    printf("Number Of Elements In 'char' Array '  = %d Elements\n", cArray_num_elements_ss);
    printf("Size Of Array  (%d Elements * %d Bytes)   = %d Bytes\n\n", cArray_num_elements_ss, char_size_ss, cArray_size_ss);

    return(0);
}
