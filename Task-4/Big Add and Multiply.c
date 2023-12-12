#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 100000

void addStrings(char result[], char num1[], char num2[])
{
    int carry = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i, j, k = 0;

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
    {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[k++] = (sum % 10) + '0';
    }

    result[k] = '\0';

    for (int start = 0, end = k - 1; start < end; start++, end--)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

void multiplyString(char result[], char num[], int multiplier)
{
    int carry = 0;
    int len = strlen(num);
    int k = 0;

    for (int i = len - 1; i >= 0 || carry > 0; i--)
    {
        int digit = (i >= 0) ? (num[i] - '0') : 0;

        int product = digit * multiplier + carry;
        carry = product / 10;
        result[k++] = (product % 10) + '0';
    }

    while (k > 1 && result[k - 1] == '0')
    {
        k--;
    }

    result[k] = '\0';

    for (int start = 0, end = k - 1; start < end; start++, end--)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

int main()
{
    char N[MAX_DIGITS];
    char sum[MAX_DIGITS];
    char product[MAX_DIGITS];

    scanf("%s", N);

    addStrings(sum, N, "9999");
    printf("%s\n", sum);

    multiplyString(product, N, 9999);
    printf("%s\n", product);

    return 0;
}
