#include <stdio.h>
#include <stdlib.h>

struct pos
{
   int x;
   int y;
};

int compare(const void* a, const void* b)
{
    struct pos* p1 = (struct pos*)a;
    struct pos* p2 = (struct pos*)b;

    if (p1 -> x == p2 -> x)
    {
        return p1 -> y - p2 -> y;
    }
    else
    {
        return p1 -> x - p2 -> x;
    }
}

int main()
{
    int n;
    struct pos arr[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(struct pos), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    printf("\n");

    return 0;
}