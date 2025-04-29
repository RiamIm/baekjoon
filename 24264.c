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
	long long int x;
	scanf("%lld", &x);
	printf("%lld\n2\n", x * x);

	return 0;
}