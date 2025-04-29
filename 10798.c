#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	char ch[5][16] = {NULL};
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", ch[i]);
		max = (strlen(ch[i]) > max) ? strlen(ch[i]) : max;
	}

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (ch[j][i] == NULL)
			{
				continue;
			}
			else
			{
				printf("%c", ch[j][i]);
			}
		}
	}

	return 0;
}