#include <stdio.h>

int main(void)
{
    void change_count_ss(void);

    extern int global_count_ss;

    printf("\n");
    printf("Value Of global_count before change_count_ss() = %d\n", global_count_ss);
    change_count_ss();
    printf("Value Of global_count after change_count_ss()  = %d\n", global_count_ss);
    printf("\n");
    return(0);
}

int global_count_ss = 0;

void change_count_ss(void)
{
    global_count_ss = 5;
    printf("Value Of global_count in change_count_ss() = %d\n", global_count_ss);
}
