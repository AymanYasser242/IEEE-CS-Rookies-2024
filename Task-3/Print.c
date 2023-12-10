#include <stdio.h>

void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf(" ");
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}
