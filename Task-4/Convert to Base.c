#include <stdio.h>
#include <string.h>

long long base_to_decimal(char* N, int X) {
    long long decimal_value = 0;
    int length = strlen(N);
    for (int i = 0; i < length; i++) {
        if ('0' <= N[i] && N[i] <= '9') {
            decimal_value = decimal_value * X + (N[i] - '0');
        } else {
            decimal_value = decimal_value * X + (N[i] - 'A' + 10);
        }
    }
    return decimal_value;
}

void decimal_to_base(long long N, int X) {
    if (N == 0) {
        printf("0\n");
        return;
    }

    char result[100];
    int index = 0;
    while (N > 0) {
        int remainder = N % X;
        if (remainder < 10) {
            result[index++] = remainder + '0';
        } else {
            result[index++] = remainder - 10 + 'A';
        }
        N /= X;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    char N[100];
    int X;

    if (T == 1) {
        scanf("%s %d", N, &X);
        long long result = base_to_decimal(N, X);
        printf("%lld\n", result);
    } else {
        long long N;
        scanf("%lld %d", &N, &X);
        decimal_to_base(N, X);
    }

    return 0;
}
