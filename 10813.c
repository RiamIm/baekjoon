#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int N, M, x, y;
	scanf("%d %d", &N, &M);

	int* arr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}
	
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &x, &y);
		x -= 1;
		y -= 1;
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);

	return 0;
}