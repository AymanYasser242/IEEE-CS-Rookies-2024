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

        int count = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                int isNonDecreasing = 1;

                for (int k = i; k < j; k++)
                {
                    if (A[k] > A[k + 1])
                    {
                        isNonDecreasing = 0;
                        break;
                    }
                }

                if (isNonDecreasing)
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
