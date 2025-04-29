#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	char str[16];
	int time = 0;
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
	{
		time += func(str[i]);
	}

	printf("%d\n", time);

	return 0;
}

int func(int ch)
{
	if (ch >= 65 && ch <= 67)
	{
		return 3;
	}
	else if (ch <= 70)
	{
		return 4;
	}
	else if (ch <= 73)
	{
		return 5;
	}
	else if (ch <= 76)
	{
		return 6;
	}
	else if (ch <= 79)
	{
		return 7;
	}
	else if (ch <= 83)
	{
		return 8;
	}
	else if (ch <= 86)
	{
		return 9;
	}
	else if (ch <= 90)
	{
		return 10;
	}
}