#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2 && num1 == num3)
	{
		printf("%d", 10000 + (num1 * 1000));
	}
	else if ((num1 == num2) || (num1 == num3) || (num2 == num3))
	{
		if (num1 == num2 || num1 == num3)
		{
			printf("%d", 1000 + num1 * 100);
		}
		else
		{
			printf("%d", 1000 + num2 * 100);
		}
	}
	else
	{
		int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
		printf("%d", max * 100);
	}

	return 0;
}