#include <stdio.h>

long long find_qth_element(long long a, long long b, long long q)
{
    long long xor_result = a ^ b;
    long long q_mod_3 = q % 3;
    long long result;
    if (q_mod_3 == 1)
    {
        result = a;
    }
    else if (q_mod_3 == 2)
    {
        result = b;
    }
    else
    {
        result = xor_result;
    }
    return result;
}

int main()
{
    long long a, b, q;
    scanf("%lld %lld %lld", &a, &b, &q);
    long long result = find_qth_element(a, b, q);
    printf("%lld\n", result);
    return 0;
}
