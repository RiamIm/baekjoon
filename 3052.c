#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int count = 10;
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				count--;
				break;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}