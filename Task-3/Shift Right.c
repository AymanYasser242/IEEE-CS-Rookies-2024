#include <stdio.h>

void shiftRight(int N, int A[], int X)
{
    X = X % N;

    for (int i = 0; i < X; i++)
    {
        int temp = A[N - 1];
        for (int j = N - 1; j > 0; j--)
        {
            A[j] = A[j - 1];
        }
        A[0] = temp;
    }
}

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);

    int A[10005];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    shiftRight(N, A, X);

    for (int i = 0; i < N; i++)
    {
        printf("%d", A[i]);
        if (i < N - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
