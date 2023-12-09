#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    int maxOperations = 0;

   
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    
    while (1) {
        int allEven = 1;

        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = 0;
                break;
            }
        }

        if (allEven) {
            maxOperations++;
            for (int i = 0; i < N; i++) {
                A[i] /= 2;
            }
        } else {
            break;
        }
    }


    printf("%d\n", maxOperations);

    return 0;
}
