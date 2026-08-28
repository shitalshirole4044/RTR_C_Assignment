#include <stdio.h>
#include <stdarg.h>

int main(void)
{
    int CalculateSum(int, ...);

    int answer;

    printf("\n\n");

    answer = CalculateSum(5, 10, 20, 30, 40, 50);
    printf("Answer = %d\n\n", answer);

    answer = CalculateSum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    printf("Answer = %d\n\n", answer);

    answer = CalculateSum(0);
    printf("Answer = %d\n\n", answer);

    return(0);
}

int CalculateSum(int num, ...)
{
    int va_CalculateSum(int, va_list);

    int sum_total;
    va_list numbers_list;

    va_start(numbers_list, num);

    sum_total = va_CalculateSum(num, numbers_list);

    va_end(numbers_list);
    return(sum_total);
}

int va_CalculateSum(int num, va_list list)
{
    int sum_total = 0;
    int n;

    while(num)
    {
        n = va_arg(list, int);
        sum_total = sum_total + n;
        num--;
    }

    return(sum_total);
}
