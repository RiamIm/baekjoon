#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define LEN 6
int main(void)
{
	int ans[LEN] = { 1, 1, 2, 2, 2, 8 };
	int arr[LEN] = { 0 };

	for (int i = 0; i < LEN; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < LEN; i++)
	{
		printf("%d ", ans[i] - arr[i]);
	}
	printf("\n");

	return 0;
}