#include <stdio.h>

int main()
{
    int n, sum, temp;
    int is_found = 0;
    scanf("%d", &n);

    for (int i = 1; i < 1000000; i++)
    {
        sum = i;
        temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == n)
        {
            printf("%d\n", i);
            is_found = 1;
            break;
        }
    }

    if (!is_found)
    {
        printf("0\n");
    }

    return 0;
}