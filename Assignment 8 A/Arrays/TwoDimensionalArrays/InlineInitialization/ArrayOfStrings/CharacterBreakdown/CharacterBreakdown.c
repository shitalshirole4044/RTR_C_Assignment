#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void){
    int ss_MyStrlen(char[]);

    char ss_strArray[10][15] = {"Hello","Welcome","To","Real","Time","Rendering","Batch","2026","Of","ASTROMEDICOMP"};

    int iStrLengths[10];

    int ss_strArray_size;
    int ss_strArray_num_rows;
    int i,j;

    ss_strArray_size = sizeof(ss_strArray);
    ss_strArray_num_rows = ss_strArray_size / sizeof(ss_strArray[0]);

    for (i = 0; i < ss_strArray_num_rows; i++)
        iStrLengths[i] = ss_MyStrlen(ss_strArray[i]);

    printf("\n\n"); 
    printf("The Entire String Array: \n\n");
    for (i = 0; i < ss_strArray_num_rows; i++)
        printf("%s ", ss_strArray[i]);

    printf("\n\n");
    printf("Strings In The 2D Array: \n\n");

    for (i = 0; i < ss_strArray_num_rows; i++){
        printf("String Number %d => %s\n\n", (i+ 1), ss_strArray[i]);
        for (j = 0; j < iStrLengths[i]; j++){
            printf("Character %d = %c\n", (j + 1), ss_strArray[i][j]);
        }
        printf("\n\n");

    }
    return(0);

}

int ss_MyStrlen(char str[]){
    int j;
    int string_length = 0;
    for(j=0; j<MAX_STRING_LENGTH;j++){
        if(str[j] == '\0')
            break;
        else
            string_length++;

    }
    return(string_length);
}