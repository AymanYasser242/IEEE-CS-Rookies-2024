#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int minResult = A[0] + A[1] + 1;

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int currentResult = A[i] + A[j] + j - i;
                if (currentResult < minResult)
                {
                    minResult = currentResult;
                }
            }
        }

        printf("%d\n", minResult);
    }

    return 0;
}
