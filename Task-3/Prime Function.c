#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    int limit = sqrt(num);

    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}


void checkPrime(int N) {
    if (isPrime(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        checkPrime(N);
    }

    return 0;
}
