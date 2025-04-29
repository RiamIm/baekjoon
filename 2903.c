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
	int point = (int)pow(2, n) + 1;
	int result = (int)pow(point, 2);

	printf("%d\n", result);
	return 0;
}