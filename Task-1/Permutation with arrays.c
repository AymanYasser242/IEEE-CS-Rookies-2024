#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N], B[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int found = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                int temp = B[j];
                B[j] = B[i];
                B[i] = temp;
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("no\n");
            return 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] != B[i])
        {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");

    return 0;
}
