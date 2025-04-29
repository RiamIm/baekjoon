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
	int n, count = 0, i = 2;
	int arr[1000] = { 0 };
	scanf("%d", &n);

	if (n == 1)
	{
		return 0;
	}

	while (TRUE)
	{
		if (n == 1)
		{
			break;
		}

		if (n % i == 0)
		{
			arr[count++] = i;
			n /= i;
			i--;
		}
		i++;

	}

	for (i = 0; i < count; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}