#include <stdio.h>
#include <math.h>

long long int calculateEquation(int X, int N)
{
    long long int result = 0;

    for (int i = 0; i <= N; i += 2)
    {
        if (i == 0)
        {
            result += pow(X, 0) - 1;
        }
        else
        {
            result += pow(X, i);
        }
    }

    return result;
}

int main()
{
    int X, N;
    scanf("%d %d", &X, &N);

    long long int result = calculateEquation(X, N);

    printf("%lld\n", result);

    return 0;
}
