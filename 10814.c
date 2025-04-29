#include <stdio.h> 
#include <stdlib.h>

struct member
{
    int age;
    char name[101];
    int order; // 입력 순서
};

int compare (const void* a, const void* b)
{
    struct member* m1 = (struct member*) a;
    struct member* m2 = (struct member*) b;

    if (m1 -> age != m2 -> age)
    {
        return m1 -> age - m2 -> age;
    }
    else
    {
        
        return m1 -> order - m2 -> order;
    }
}

struct member g_mem[100000];

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &g_mem[i].age, &g_mem[i].name);
        g_mem[i].order = count++;
    }

    qsort(g_mem, n, sizeof(struct member), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", g_mem[i].age, g_mem[i].name);
    }

    return 0;
}