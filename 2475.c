#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int arr[5];
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		total += arr[i] * arr[i];
	}

	printf("%d", total % 10);

	return 0;
}