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
	int up, down, high;
	int count = 0;
	scanf("%d %d %d", &up, &down, &high);

	count = (high - down - 1) / (up - down) + 1;

	printf("%d\n", count);
	return 0;
}