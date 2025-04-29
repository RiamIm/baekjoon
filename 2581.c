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
	int n, m, count = 0, sum = 0;
	int is_prime;
	int arr[10000] = { 0 };
	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = n; i <= m; i++)
	{
		is_prime = TRUE;
		if (i == 1)
		{
			continue;
		}
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is_prime = FALSE;
				break;
			}
		}

		if (is_prime)
		{
			arr[count++] = i;
		}
	}

	for (int i = 0; i < count; i++)
	{
		sum += arr[i];
	}

	if (sum != 0 && arr[0] != 0)
	{
		printf("%d\n", sum);
		printf("%d\n", arr[0]);
	}
	else
	{
		printf("-1\n");
	}
	

	return 0;
}