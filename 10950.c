#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	int x, y;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}


	return 0;
}