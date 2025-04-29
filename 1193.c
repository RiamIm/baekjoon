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
    int n;
    scanf("%d", &n);

    int diag = 1;
    int sum = 1;

    while (n > sum)
    {
        diag++;
        sum += diag;
    }

    int position = n - (sum - diag);

    int numerator, denominator;
    if (diag % 2 == 0)
    {
        numerator = position;
        denominator = diag - position + 1;
    }
    else
    {
        numerator = diag - position + 1;
        denominator = position;
    }

    printf("%d/%d\n", numerator, denominator);

    return 0;
}

