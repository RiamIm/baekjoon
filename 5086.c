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
	int x, y;
	while (TRUE)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
		{
			break;
		}

		if (y % x == 0)
		{
			printf("factor\n");
		}
		else if (x % y == 0)
		{
			printf("multiple\n");
		}
		else
		{
			printf("neither\n");
		}
	}
	return 0;
}