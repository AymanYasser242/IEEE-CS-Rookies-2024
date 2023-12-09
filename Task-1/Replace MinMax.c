#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    int minIndex = 0, maxIndex = 0;

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);

        if (A[i] < A[minIndex]) {
            minIndex = i;
        }

        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    
    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
