#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	char num1[4];
	char num2[4];
	int is_num1_max = FALSE;
	scanf("%s %s", num1, num2);

	for (int i = 2; i >= 0; i--)
	{
		if (num1[i] == num2[i])
		{
			continue;
		}

		if (num1[i] > num2[i])
		{
			is_num1_max = TRUE;
			break;
		}
		else
		{
			break;
		}
	}

	for (int i = 2; i >= 0; i--)
	{
		if (is_num1_max)
		{
			printf("%c", num1[i]);
		}
		else
		{
			printf("%c", num2[i]);
		}
	}
	printf("\n");
		
	return 0;
}