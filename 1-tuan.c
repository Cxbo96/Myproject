#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", '*');
        }
        for (j = 0; j < i; j++)
        {
            printf("%c", 'F' - j);
        }
        printf("\n");
    }
    return 0;
}