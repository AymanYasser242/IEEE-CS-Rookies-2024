#include <stdio.h>

#define MAX 10

int max(int a, int b)
{
    return a > b ? a : b;
}

int maxPathSum(int arr[][MAX], int i, int j, int n, int m, int sum)
{
    if (i == n - 1 && j == m - 1)
    {
        return sum + arr[i][j];
    }
    if (i == n - 1)
    {
        return maxPathSum(arr, i, j + 1, n, m, sum + arr[i][j]);
    }
    if (j == m - 1)
    {
        return maxPathSum(arr, i + 1, j, n, m, sum + arr[i][j]);
    }
    int right = maxPathSum(arr, i, j + 1, n, m, sum + arr[i][j]);
    int down = maxPathSum(arr, i + 1, j, n, m, sum + arr[i][j]);
    return max(right, down);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", maxPathSum(arr, 0, 0, n, m, 0));
    return 0;
}
