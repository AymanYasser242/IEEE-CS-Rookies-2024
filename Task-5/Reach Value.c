#include <stdio.h>

int canReachValue(long long current, long long target)
{

    if (current == target)
    {
        return 1;
    }

    if (current > target)
    {
        return 0;
    }

    return canReachValue(current * 10, target) || canReachValue(current * 20, target);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long N;
        scanf("%lld", &N);

        int result = canReachValue(1, N);

        printf(result ? "YES\n" : "NO\n");
    }

    return 0;
}
