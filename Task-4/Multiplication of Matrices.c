#include <stdio.h>

int main()
{

    int RA, CA, RB, CB;
    scanf("%d %d", &RA, &CA);

    int A[RA][CA];
    for (int i = 0; i < RA; i++)
    {
        for (int j = 0; j < CA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &RB, &CB);

    int B[RB][CB];
    for (int i = 0; i < RB; i++)
    {
        for (int j = 0; j < CB; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    int result[RA][CB];
    for (int i = 0; i < RA; i++)
    {
        for (int j = 0; j < CB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < CA; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < RA; i++)
    {
        for (int j = 0; j < CB; j++)
        {
            printf("%d", result[i][j]);
            if (j < CB - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
