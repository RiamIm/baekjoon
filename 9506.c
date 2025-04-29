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
	int arr[50] = { 0 };
	int x;

	while (TRUE)
	{
		int count = 0;
		int sum = 0;
		scanf("%d", &x);
		if (x == -1)
		{
			break;
		}

		for (int i = 1; i < x; i++)
		{
			if (x % i == 0)
			{
				arr[count++] = i;
				sum += i;
			}
		}

		if (sum == x)
		{
			printf("%d = ", x);
			for (int i = 0; i < count; i++)
			{
				printf("%d ", arr[i]);
				if (i != count - 1)
				{
					printf("+ ");
				}
			}
			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", x);
		}

	}
	return 0;
}