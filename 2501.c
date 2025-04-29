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
	int p, q, count = 0;
	int arr[10000] = { 0 };
	scanf("%d %d", &p, &q);

	for (int i = 0; i < p; i++)
	{
		if (p % (i + 1) == 0)
		{
			arr[count] = i + 1;
			count++;
		}
	}

	printf("%d\n", arr[q - 1]);

	return 0;
}