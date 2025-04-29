#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char g_arr[20000][51];

int compare(const void* a, const void* b)
{
    const char *str1 = (const char*) a;
    const char *str2 = (const char*) b;

    int len1 = strlen(str1);
    int len2 = strlen(str2);
 
    if (len1 != len2)
    {
        return len1 - len2;
    }
    return strcmp(str1, str2);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &g_arr[i]);
    }

    qsort(g_arr, n, sizeof(g_arr[0]), compare);

    for (int i = 0; i < n - 1; i++)
    {
        if (strcmp(g_arr[i], g_arr[i + 1]) != 0)
        {
            printf("%s\n", g_arr[i]);
        }
    }
    printf("%s\n", g_arr[n - 1]);

    return 0;
}