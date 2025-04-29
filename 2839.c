#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int min = INT_MAX;
    scanf("%d", &n);

    for(int x = 0; x <= 1000; x++)
    {
        for (int y = 0; y <= 1000; y++)
        {
            if (3 * x + 5 * y == n)
            {
                min = (x + y < min) ? (x + y) : min;
            }
        }
    }

    if (min == INT_MAX)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", min);
    }

    return 0;
}