#include <stdio.h>
#include <string.h>

int main()
{
    int num = 666;
    char str[100000];
    int count = 1;
    int x;
    scanf("%d", &x);

    if(x == 1)
    {
        printf("666\n");
        return 0;
    }

    while (count < x)
    {
        num++;
        sprintf(str, "%d", num);
        if (strstr(str, "666") != NULL)
        {
            count++;
        }
    }

    printf("%s\n", str);

    return 0;
}