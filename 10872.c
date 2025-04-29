#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int N, x;
	int arr[10000];
	scanf("%d %d", &N, &x);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < x)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	return 0;
}