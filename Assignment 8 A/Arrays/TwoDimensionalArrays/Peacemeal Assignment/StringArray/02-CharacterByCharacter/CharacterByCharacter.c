#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char strArray[5][10];
    int char_size;
    int strArray_size;
    int strArray_num_elements, strArray_num_rows, strArray_num_columns;
    int i;

    printf("\n\n");

    char_size = sizeof(char);

    strArray_size = sizeof(strArray);
    printf("Size Of Two Dimensional  Character Array (String Array) Is = %d\n\n", strArray_size);

    strArray_num_rows = strArray_size / sizeof(strArray[0]);
    printf("Number of Rows (Strings) In Two Dimensional  Character Array (String Array) Is = %d\n\n", strArray_num_rows);

    strArray_num_columns = sizeof(strArray[0]) / char_size;
    printf("Number of Columns In Two Dimensional  Character Array (String Array) Is = %d\n\n", strArray_num_columns);

    strArray_num_elements = strArray_num_rows * strArray_num_columns;
    printf("Maximum Number of Elements (Characters) In Two Dimensional  Character Array (String Array) Is = %d\n\n", strArray_num_elements);

    strArray[0][0] = 'M';
    strArray[0][1] = 'y';
    strArray[0][2] = '\0';

    strArray[1][0] = 'N';
    strArray[1][1] = 'a';
    strArray[1][2] = 'm';
    strArray[1][3] = 'e';
    strArray[1][4] = '\0';

    strArray[2][0] = 'I';
    strArray[2][1] = 's';
    strArray[2][2] = '\0';

    strArray[3][0] = 'S';
    strArray[3][1] = 'H';
    strArray[3][2] = 'I';
    strArray[3][3] = 'T';
    strArray[3][4] = 'A';
    strArray[3][5] = 'L';
    strArray[3][6] = 'A';
    strArray[3][7] = '\0';

    strArray[4][0] = 'S';
    strArray[4][1] = 'H';
    strArray[4][2] = 'I';
    strArray[4][3] = 'R';
    strArray[4][4] = 'O';
    strArray[4][5] = 'L';
    strArray[4][6] = 'E';
    strArray[4][7] = '\0';

    printf("\n\n");
    printf("The Strings In the 2D Character Array Are : \n\n");

    for (i = 0; i < strArray_num_rows; i++)
        printf("%s ", strArray[i]);

    printf("\n\n");

    return(0);
}

int MyStrlen(char str[])
{
    int j;
    int string_length = 0;

    for (j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if (str[j] == '\0')
            break;
        else
            string_length++;
    }
    return(string_length);
}
