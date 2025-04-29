#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    int table[100][100] = { 0 };
    int t;
    int x, y;
    int result = 0;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        x--;
        y--;
        for (int j = y; j < y + 10; j++)
        {
            for (int k = x; k < x + 10; k++)
            {
                table[j][k]++;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (table[i][j] > 0)
            {
                result++;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}