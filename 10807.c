#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int N, x, count = 0;
	int arr[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &x);

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}