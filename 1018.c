#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m;
    char arr[50][50];
    char result_arr[8][8] =
    {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
    };

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &arr[i][j]);
        }
    }

    int result = INT_MAX;

    for (int n_start = 0; n_start <= n - 8; n_start++)
    {
        for (int m_start = 0; m_start <= m - 8; m_start++)
        {
            int count1 = 0; // B로 시작
            int count2 = 0; // W로 시작

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (arr[n_start + i][m_start + j] != result_arr[i][j])
                    {
                        count1++;
                    }

                    char reversed = (result_arr[i][j] == 'B') ? 'W' : 'B';
                    if (arr[n_start + i][m_start + j] != reversed)
                    {
                        count2++;
                    }
                }
            }

            int local_min = (count1 < count2) ? count1 : count2;
            result = (local_min < result) ? local_min : result;
        }
    }

    printf("%d\n", result);

    return 0;
}
