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
	int t, x, y;
	int x_min = INT_MAX, x_max = INT_MIN;
	int y_min = INT_MAX, y_max = INT_MIN;
	scanf("%d", &t);
	

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &x, &y);
		x_min = (x < x_min) ? x : x_min;
		x_max = (x > x_max) ? x : x_max;
		y_min = (y < y_min) ? y : y_min;
		y_max = (y > y_max) ? y : y_max;
	}

	if (t == 1)
	{
		printf("0\n");

		return 0;
	}

	printf("%d\n", (x_max - x_min) * (y_max - y_min));

	return 0;
}