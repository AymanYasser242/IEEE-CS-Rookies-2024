#include <stdio.h>
double sumArr(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + sumArr(arr, n - 1);
}
double averageArr(int arr[], int n)
{
    double sum = sumArr(arr, n);
    return sum / n;
}

int main()
{
    int N;

    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    double avg = averageArr(A, N);
    printf("%1.6lf\n", (double)avg);
    return 0;
}
