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
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		char str[1001];
		scanf("%s", str);
		printf("%c%c\n", str[0], str[strlen(str) - 1]);
	}
	return 0;
}