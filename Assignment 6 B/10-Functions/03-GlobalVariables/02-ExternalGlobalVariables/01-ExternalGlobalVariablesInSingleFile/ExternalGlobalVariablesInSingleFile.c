#include <stdio.h>

int main(void)
{
    void change_count(void);

    extern int global_count;

    printf("\n");
    printf("Value Of global_count before change_count() = %d\n", global_count);
    change_count();
    printf("Value Of global_count after change_count()  = %d\n", global_count);
    printf("\n");
    return(0);
}

int global_count = 0;

void change_count(void)
{
    global_count = 5;
    printf("Value Of global_count in change_count() = %d\n", global_count);
}
