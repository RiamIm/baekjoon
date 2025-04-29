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
	int x, y, z, sum;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	sum = x + y + z;

	if (x == y && y == z && x == 60)
	{
		printf("Equilateral\n");
	}
	else if (sum == 180 && (x == y || y == z || x == z))
	{
		printf("Isosceles\n");
	}
	else if (sum == 180)
	{
		printf("Scalene\n");
	}
	else
	{
		printf("Error\n");
	}
	return 0;
}