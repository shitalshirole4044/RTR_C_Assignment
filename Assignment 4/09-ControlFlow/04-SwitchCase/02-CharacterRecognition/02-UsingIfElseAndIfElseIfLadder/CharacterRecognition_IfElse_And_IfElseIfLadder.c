#include <stdio.h>
#include <conio.h>

#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
    char ch;
    int ch_value_ss;

    printf("\n\n");

    printf("Enter Character : ");
    ch = getch();

    printf("\n\n");

    if ((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I' || ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u'))
    {
        printf("Character \'%c\' Entered By You, Is A VOWEL CHARACTER From The English Alphabet !!!\n\n", ch);
    }

    else
    {
        ch_value_ss = (int)ch;

        if ((ch_value_ss >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value_ss <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value_ss >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value_ss <= CHAR_ALPHABET_LOWER_CASE_ENDING))
        {
            printf("Character \'%c\' Entered By You, Is A CONSONANT CHARACTER From The English Alphabet !!!\n\n", ch);
        }

        else if (ch_value_ss >= CHAR_DIGIT_BEGINNING && ch_value_ss <= CHAR_DIGIT_ENDING)
        {
            printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER !!!\n\n", ch);
        }

        else
        {
            printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", ch);
        }
    }

    return(0);
}