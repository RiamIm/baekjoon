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
	int x, y, z;
	while (TRUE)
	{
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0)
		{
			break;
		}

		if (x < y + z && y < x + z && z < x + y)
		{
			if (x == y && y == z && x == z)
			{
				printf("Equilateral\n");
			}
			else if (x == y || y == z || x == z)
			{
				printf("Isosceles\n");
			}
			else
			{
				printf("Scalene\n");
			}
		}
		else
		{
			printf("Invalid\n");
		}
		
	}
	return 0;
}