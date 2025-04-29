#include <stdio.h>

int arr[10001];

int main()
{
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        while (arr[i] > 0)
        {
            printf("%d\n", i);
            arr[i]--;
        }
    }

    return 0;
}