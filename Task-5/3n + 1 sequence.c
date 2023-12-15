#include <stdio.h>

int sequenceLength(int n)
{

    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {

        return 1 + sequenceLength(n / 2);
    }
    else
    {

        return 1 + sequenceLength(3 * n + 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int length = sequenceLength(n);

    printf("%d\n", length);

    return 0;
}
