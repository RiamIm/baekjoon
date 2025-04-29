#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);

	for (int i = 0; i < 9; i++)
	{
		printf("%d * %d = %d\n", x, i + 1, x * (i + 1));
	}

	return 0;
}