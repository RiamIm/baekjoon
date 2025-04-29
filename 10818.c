#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int N;
	int min = INT_MAX;
	int max = INT_MIN;

	scanf("%d", &N);
	int* arr = (int*)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	free(arr);

	printf("%d %d", min, max);

	return 0;
}