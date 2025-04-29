#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int arr[9][9];
	int max = INT_MIN;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			max = (arr[i][j] > max) ? arr[i][j] : max;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max == arr[i][j])
			{
				printf("%d\n", max);
				printf("%d %d\n", i + 1, j + 1);
				break;
			}
		}
	}

	return 0;
}