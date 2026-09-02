#include<stdio.h>

#define MAX_ss_string_length 512

int main(void){
    // function prototype

    int SS_myStrlen(char[]);

    char SS_strArray[10][15] = {"hello!","Welcome","To","Real","Time","Rendering","Batch","2026","Of","ASTROMEDICOMP"};

    int ss_char_size;
    int SS_strArray_size;
    int SS_strArray_num_elements, SS_strArray_num_rows, SS_strArray_num_columns;
    int strActual_num_chars=0;
    int i;

    printf("\n\n");

    ss_char_size =sizeof(char);

    SS_strArray_size = sizeof(SS_strArray);

    printf("Size Of Two Dimensional Character Array (String Array) Is = %d\n\n", SS_strArray_size);

    SS_strArray_num_rows = SS_strArray_size / sizeof(SS_strArray[0]);
    printf("Number of Rows In Two Dimensional Character Array Is = %d\n\n", SS_strArray_num_rows);

    SS_strArray_num_columns = sizeof(SS_strArray[0]) / ss_char_size;
    printf("Number of Columns In Two Dimensional Character Array Is = %d\n\n", SS_strArray_num_columns);

    SS_strArray_num_elements = SS_strArray_num_rows * SS_strArray_num_columns;
    printf("Maximum Number of Elements In Two Dimensional Character Array  Is = %d\n\n", SS_strArray_num_elements);

    for (i = 0; i < SS_strArray_num_rows; i++){
        strActual_num_chars = strActual_num_chars + SS_myStrlen(SS_strArray[i]);
    }

    printf("Actual Number of Elements In Two Dimensional Character Array Is = %d\n\n", strActual_num_chars);

    printf("\n\n");
    printf("Strings In The 2D Array: \n\n");

    printf("%s ", SS_strArray[0]);
    printf("%s ", SS_strArray[1]);
    printf("%s ", SS_strArray [2]);
    printf("%s ", SS_strArray[3]);
    printf("%s ", SS_strArray[4]);
    printf("%s ", SS_strArray[5]);
    printf("%s ", SS_strArray[6]);
    printf("%s ", SS_strArray[7]);
    printf("%s ", SS_strArray[8]);
    printf("%s\n\n", SS_strArray[9]);
    return(0);

}

int SS_myStrlen(char str[])
{
    int j;
    int ss_string_length = 0;

    for (j = 0; j < MAX_ss_string_length; j++){
        if (str[j] == '\0')
            break;
        else 
            ss_string_length++;
    }
    return(ss_string_length);
}