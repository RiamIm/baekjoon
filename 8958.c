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
	int count = 0;
	int total = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		char str[81];
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O')
			{
				count++;
			}
			else
			{
				for (int k = 1; k <= count; k++)
				{
					total += k;
				}
				count = 0;
			}
		}
		if (count != 0)
		{
			for (int k = 1; k <= count; k++)
			{
				total += k;
			}
		}
		printf("%d\n", total);
		count = 0;
		total = 0;
	}
	return 0;
}