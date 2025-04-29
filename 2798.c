#include <stdio.h>

int main()
{
    int n, m, sum, result = 0, max = 0;
    int arr[100] = {0};

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];

                if (sum <= m && sum > max)
                {
                    max = sum;
                }
            }
        }
    }

    printf("%d\n", max);

    return 0;
}