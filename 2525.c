#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m;
	int t;

	int dif_h = 0, dif_m = 0;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	dif_m = (m + t) % 60;
	dif_h = h + (m + t) / 60;

	if (dif_h >= 24)
	{
		dif_h %= 24;
	}

	printf("%d %d", dif_h, dif_m);

	return 0;
}