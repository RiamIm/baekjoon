#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int a, x, count = 0;
	char result[10000] = { NULL };
	char ch;
	scanf("%d %d", &a, &x);

	while (TRUE)
	{
		if (a % x >= 10)
		{
			result[count] = a % x + 55;
		}
		else
		{
			result[count] = a % x + 48;
		}
		a /= x;
		count++;
		if (a < x)
		{
			if (a >= 10)
			{
				result[count] = a + 55;
			}
			else
			{
				result[count] = a + 48;
			}
			break;
		}
	}

	int len = strlen(result);
	int half = len % 2 == 0 ? len / 2 : len / 2  + 1;

	for (int i = 0; i < half; i++)
	{
		char temp = result[i];
		result[i] = result[len - i - 1];
		result[len - i - 1] = temp;
	}

	if (result[0] == '0')
	{
		for (int i = 1; i < len; i++)
		{
			printf("%c", result[i]);
		}
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			printf("%c", result[i]);
		}
	}	
	printf("\n");
	return 0;
}