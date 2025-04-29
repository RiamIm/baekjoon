#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int arr[9];
	int len = sizeof(arr) / sizeof(int);
	int max = INT_MIN;

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	for (int i = 0; i < len; i++)
	{
		if (max == arr[i])
		{
			printf("%d\n", i + 1);
		}
	}

	return 0;
}