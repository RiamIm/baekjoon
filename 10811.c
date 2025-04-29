#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, x, y;
    scanf("%d %d", &n, &m);
    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        x -= 1;
        y -= 1;
        int half = (y - x + 1) / 2;
        for (int j = 0; j < half; j++)
        {
            int temp = arr[x + j];
            arr[x + j] = arr[y - j];
            arr[y - j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}