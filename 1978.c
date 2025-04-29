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
	int t, num, count = 0;
	int is_prime;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		is_prime = TRUE;
		scanf("%d", &num);
		if (num == 1)
		{
			continue;
		}
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				is_prime = FALSE;
			}
		}

		if (is_prime)
		{
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}