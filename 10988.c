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
	int is_reverse = TRUE;
	scanf("%s", str);
	int half = strlen(str) % 2 == 0 ? strlen(str) : strlen(str) - 1;

	for (int i = 0; i < half; i++)
	{
		if (str[i] != str[strlen(str) - 1 - i])
		{
			is_reverse = FALSE;
		}
	}

	printf("%d\n", is_reverse);
	return 0;
}