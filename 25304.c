#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, n, a, b, total = 0;

	scanf("%d", &x);
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		total += a * b;
	}

	if (x == total)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}


	return 0;
}