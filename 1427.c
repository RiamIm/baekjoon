#include <stdio.h>

int main()
{
    int arr[10];
    int num, count = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        arr[count++] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}