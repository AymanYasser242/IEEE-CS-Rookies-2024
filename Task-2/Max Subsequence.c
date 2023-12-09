#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char S[N + 1];
    scanf("%s", S);

    int maxSubsequenceSize = 1;

    for (int i = 1; i < N; i++)
    {
        if (S[i] != S[i - 1])
        {
            maxSubsequenceSize++;
        }
    }

    printf("%d\n", maxSubsequenceSize);

    return 0;
}
