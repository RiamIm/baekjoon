#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    int T;
    int x;
    int result[4] = { 0 };
    int change[4] = { 25, 10, 5, 1 };
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &x);
        for (int j = 0; j < 4; j++)
        {
            result[j] = x / change[j];
            x = x % change[j];
            printf("%d ", result[j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}