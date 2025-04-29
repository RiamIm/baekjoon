#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, result = 0;
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		result += i;
	}

	printf("%d\n", result);

	return 0;
}