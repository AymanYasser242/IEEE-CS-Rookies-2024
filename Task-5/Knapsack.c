#include <stdio.h>

int knapsack(int weights[], int values[], int n, int capacity)
{
    if (n == 0 || capacity == 0)
    {
        return 0;
    }

    if (weights[n - 1] > capacity)
    {
        return knapsack(weights, values, n - 1, capacity);
    }

    int includeCurrent = values[n - 1] + knapsack(weights, values, n - 1, capacity - weights[n - 1]);
    int excludeCurrent = knapsack(weights, values, n - 1, capacity);

    return (includeCurrent > excludeCurrent) ? includeCurrent : excludeCurrent;
}

int main()
{
    int N, W;
    scanf("%d %d", &N, &W);

    int weights[N], values[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &weights[i], &values[i]);
    }

    int result = knapsack(weights, values, N, W);

    printf("%d\n", result);

    return 0;
}
