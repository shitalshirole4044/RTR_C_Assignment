#include <stdio.h>

int main(void)
{
    int a = 5;

    void change_count_ss(void);

    printf("\n");
    printf("A = %d\n\n", a);

    change_count_ss();

    change_count_ss();

    change_count_ss();

    return(0);
}

void change_count_ss(void)
{
    int local_count = 0;

    local_count = local_count + 1;
    printf("Local Count = %d\n", local_count);
}
