#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int x, y, z;
	int X[5], Y[5], Z[5];
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	printf("%d\n", x + y - z);

	sprintf(X, "%d", x);
	sprintf(Y, "%d", y);
	sprintf(Z, "%d", z);

	strcat(X, Y);
	printf("%d\n", atoi(X) - atoi(Z));

	return 0;
}