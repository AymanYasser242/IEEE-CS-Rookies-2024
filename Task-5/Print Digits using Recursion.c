#include <stdio.h>

void print_digits(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    print_digits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        print_digits(n);
        printf("\n");
    }
    return 0;
}
