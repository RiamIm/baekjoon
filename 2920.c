#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int arr[8];
	int ascending[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int descending[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };
	int is_asc = TRUE;
	int is_des = TRUE;
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != ascending[i])
        {
            is_asc = FALSE;
        }
        if (arr[i] != descending[i])
        {
            is_des = FALSE;
        }
    }

    if (is_asc)
    {
        printf("ascending\n");
    }
    else if (is_des)
    {
        printf("descending\n");
    }
    else
    {
        printf("mixed\n");
    }

    return 0;
}