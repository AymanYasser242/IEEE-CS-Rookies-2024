#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

long long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%lld %lld\n", nCr(A, B), nPr(A, B));

    return 0;
}
