#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	char str[101];
	scanf("%s", str);

	printf("%d", strlen(str));
	
	return 0;
}