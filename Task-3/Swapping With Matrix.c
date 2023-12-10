#include <stdio.h>

void swapRows(int N, int A[][500], int X, int Y)
{
    for (int j = 0; j < N; j++)
    {
        int temp = A[X][j];
        A[X][j] = A[Y][j];
        A[Y][j] = temp;
    }
}

void swapColumns(int N, int A[][500], int X, int Y)
{
    for (int i = 0; i < N; i++)
    {
        int temp = A[i][X];
        A[i][X] = A[i][Y];
        A[i][Y] = temp;
    }
}

void printMatrix(int N, int A[][500])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", A[i][j]);
            if (j < N - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int A[500][500];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    swapRows(N, A, X - 1, Y - 1);
    swapColumns(N, A, X - 1, Y - 1);

    printMatrix(N, A);

    return 0;
}
