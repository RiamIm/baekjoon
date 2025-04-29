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
	char str[10000];
	int x;
	int result = 0;

	scanf("%s %d", str, &x);
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		int dig;
		if (str[i] >= '0' && str[i] <= '9')
		{
			dig = str[i] - '0';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			dig = str[i] - 'A' + 10;
		}

		result += dig * pow(x, len - 1 - i);
	}

	printf("%d", result);

	return 0;
}