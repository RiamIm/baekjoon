#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int T;
	int result;
	int floor, num;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);
		floor = n % h == 0 ? h : n % h;
		num = n % h == 0 ? n / h : n / h + 1;

		result = floor * 100 + num;
		printf("%d\n", result);
	}

	return 0;
}