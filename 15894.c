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
	long int x;
	scanf("%ld", &x);

	printf("%ld\n", x * 4);

	return 0;
}