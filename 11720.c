#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int N;
	int total = 0;
	char str[101];
	scanf("%d", &N);
	scanf("%s", str);

	for (int i = 0; i < N; i++)
	{
		total += str[i] - '0';
	}

	printf("%d", total);

	return 0;
}