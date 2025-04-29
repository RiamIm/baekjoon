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
	int count = 1;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d", count);
		return 0;
	}
	int min = 2;
	int max = 7;

	while (TRUE)
	{
		count++;
		if (n >= min && n <= max)
		{
			printf("%d", count);
			break;
		}
		else
		{
			min = min + 6 * (count - 1);
			max = max + 6 * count;
		}
	}

	return 0;
}