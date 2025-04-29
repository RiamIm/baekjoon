#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int N, M;
	int x, y, z;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &x, &y, &z);
		for (int j = x - 1; j < y; j++)
		{
			arr[j] = z;
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}