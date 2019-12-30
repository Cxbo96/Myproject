#include <stdio.h>

int main()
{
    int a, b = 0, c = 0, e = 0;
    float d = 0;
    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        else
        {
            if (a % 2 == 0)
            {
                c += a;
                b++;
            }
            else
            {
                d += a;
                e++;
            }
        }
    }
    if (c > 0)
        printf("共有%d个偶数 偶数平均：%d\n", b, c / b);
    else
        printf("没有输入偶数\n");
    if (d > 0)
        printf("共有%d个奇数 奇数平均：%0.2f\n", e, d / e);
    else
        printf("没有输入奇数\n");
    return 0;
}