#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	if (arr[0] < arr[1] + arr[2])
	{
		printf("%d\n", arr[0] + arr[1] + arr[2]);
	}
	else
	{
		printf("%d\n", (arr[1] + arr[2] - 1) + arr[1] + arr[2]);
	}
	return 0;
}