#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (c - a > 0)
    {
        if ((c - a) * d >= b)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else if(c - a == 0)
    {
        if (b <= 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        printf("0\n");
    }

    return 0;
}