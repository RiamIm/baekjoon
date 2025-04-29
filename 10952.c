#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TRUE 1
#define FALSE 0
int main(void)
{
	int x, y;
	while (TRUE)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
		{
			break;
		}
		printf("%d\n", x + y);
	}
	
	return 0;
}