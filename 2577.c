#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int a, b, c, total = 0;
	int temp = 0;
	int result[10] = { 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	total = a * b * c;

	while (TRUE)
	{
		temp = total % 10;
		result[temp]++;
		if (total / 10 == 0)
		{
			break;
		}
		total /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", result[i]);
	}
	
	return 0;
}