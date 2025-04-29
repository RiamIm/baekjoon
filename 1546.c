#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int n;
	int max = INT_MIN;
	float total = 0;
	scanf("%d", &n);
	float* arr = (float*)malloc(n * sizeof(float));

	for (int i = 0; i < n; i++)
	{
		scanf("%f", &arr[i]);
		if (arr[i] > max)
		{
			max = (int)arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = (arr[i] / (float)max) * 100;
		total += arr[i];
	}

	printf("%f", total / (float)n);

	free(arr);
	return 0;
}