#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 1; i <= N; i++) {
            for (int j = 0; j <= N - i; j++) {
                int maxNum = A[j];
                for (int k = 1; k < i; k++) {
                    if (A[j + k] > maxNum) {
                        maxNum = A[j + k];
                    }
                }
                printf("%d ", maxNum);
            }
        }

        printf("\n");
    }

    return 0;
}
