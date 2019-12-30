#include <stdio.h>

int main()
{
    int num = 1, sum = 0;
    do
    {
        sum += num;
        num++;
    } while (num <= 10);
    printf("%d\n", sum);
    return 0;
}