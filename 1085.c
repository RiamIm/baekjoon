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
	int x, y, w, h;
	int min = INT_MAX;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	min = (x < y) ? x : y;
	min = ((w - x) < min) ? (w - x) : min;
	min = ((h - y) < min) ? (h - y) : min;

	printf("%d\n", min);

	return 0;
}