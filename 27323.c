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
	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d", x * y);

	return 0;
}