#include <stdio.h>
#include <stdbool.h>

bool isOdd(int num)
{
    return num % 2 != 0;
}

bool isPalindrome(int num)
{
    int reversed = 0;
    int original = num;

    while (num > 0)
    {
        reversed = (reversed << 1) | (num & 1);
        num = num >> 1;
    }

    return original == reversed;
}

void checkWonderful(int N)
{
    if (isOdd(N) && isPalindrome(N))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    checkWonderful(N);

    return 0;
}
