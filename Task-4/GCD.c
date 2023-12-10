#include <stdio.h>

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long gcd_result = gcd(A, B);
    long long lcm_result = lcm(A, B);

    printf("%lld %lld\n", gcd_result, lcm_result);

    return 0;
}
