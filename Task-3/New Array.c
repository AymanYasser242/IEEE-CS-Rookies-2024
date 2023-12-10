#include <stdio.h>

void concatenateArrays(int N, int A[], int B[], int C[])
{
    for (int i = 0; i < N; i++)
    {
        C[i] = B[i];
    }

    for (int i = 0; i < N; i++)
    {
        C[i + N] = A[i];
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N], B[N], C[2 * N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }

    concatenateArrays(N, A, B, C);

    for (int i = 0; i < 2 * N; i++)
    {
        printf("%d", C[i]);
        if (i < 2 * N - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
