#include <stdio.h>

int fibonacci(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else if (num >= 3)
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    int result = fibonacci(num);
    printf("%d", result);
    return 0;
}