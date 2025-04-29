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
	int x, y, x_temp, y_temp;
	int x_min = INT_MAX, y_min = INT_MAX;
	int x_max = INT_MIN, y_max = INT_MIN;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &x, &y);
		if (i > 0 && (x_min == x || x_max == x))
		{
			x_temp = x;
		}

		if (i > 0 && (y_min == y || y_max == y))
		{
			y_temp = y;
		}

		x_min = (x < x_min) ? x : x_min;
		x_max = (x > x_max) ? x : x_max;
		y_min = (y < y_min) ? y : y_min;
		y_max = (y > y_max) ? y : y_max;
	}

	printf("%d %d", (x_min + x_max) - x_temp, (y_min + y_max) - y_temp);

	return 0;
}