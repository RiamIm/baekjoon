#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	char str[1001];
	int i;

	scanf("%s", str);
	scanf("%d", &i);

	printf("%c\n", str[i - 1]);

	return 0;
}