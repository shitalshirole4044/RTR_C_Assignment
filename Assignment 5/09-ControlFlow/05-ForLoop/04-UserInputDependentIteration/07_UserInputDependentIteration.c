#include <stdio.h>
int main(void)
{
    int i_num_ss, num_ss, i;

    printf("\n\n");

    printf("Enter An Integer Value From Which Iteration Must Begin : ");
    scanf("%d", &i_num_ss);

    printf("How Many Digits Do You Want To Print From %d Onwards ? : ", i_num_ss);
    scanf("%d", &num_ss);

    printf("Printing Digits %d to %d : \n\n", i_num_ss, (i_num_ss + num_ss));

    for (i = i_num_ss; i <= (i_num_ss + num_ss); i++)
    {
        printf("\t%d\n", i);
    }

    printf("\n\n");

    return(0);
}
