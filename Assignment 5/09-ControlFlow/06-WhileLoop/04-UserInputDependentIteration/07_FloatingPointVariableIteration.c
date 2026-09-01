#include <stdio.h>
int main(void)
{
    float f;
    float f_num_ss = 1.7f;

    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", f_num_ss, (f_num_ss * 10.0f));

    f = f_num_ss;
    do
    {
        printf("\t%f\n", f);
        f = f + f_num_ss;
    }while (f <= (f_num_ss * 10.0f));

    printf("\n\n");

    return(0);
}
