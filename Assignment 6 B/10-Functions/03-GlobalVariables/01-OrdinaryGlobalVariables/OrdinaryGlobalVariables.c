#include <stdio.h>

int global_count = 0;

int main(void)
{
    void change_count_one_ss(void);
    void change_count_two_ss(void);
    void change_count_three_ss(void);

    printf("\n");

    printf("main() : Value of global_count = %d\n", global_count);

    change_count_one_ss();
    change_count_two_ss();
    change_count_three_ss();

    printf("\n");
    return(0);
}

void change_count_one_ss(void)
{
    global_count = 100;
    printf("change_count_one_ss() : Value of global_count = %d\n", global_count);
}

void change_count_two_ss(void)
{
    global_count = global_count + 1;
    printf("change_count_two_ss() : Value of global_count = %d\n", global_count);
}

void change_count_three_ss(void)
{
    global_count = global_count + 10;
    printf("change_count_three_ss() : Value of global_count = %d\n", global_count);
}
