#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int arr[30];
	int yes_arr[28];
	int no_arr[2];
	int count = 0;
	int len = sizeof(arr) / sizeof(int);
	int yes_len = sizeof(yes_arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < yes_len; i++)
	{
		scanf("%d", &yes_arr[i]);
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < yes_len; j++)
		{
			if (arr[i] == yes_arr[j])
			{
				arr[i] = 0;
			}
		}
	}
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", i + 1);
		}
	}
	printf("\n");

	return 0;
}