#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    char S[A + B + 1];
    scanf("%s", S);

    
    int isValid = 1;

    for (int i = 0; i < A + B + 1; i++) {
        if (i == A) {
           
            if (S[i] != '-') {
                isValid = 0;
                break;
            }
        } else {
          
            if (S[i] < '0' || S[i] > '9') {
                isValid = 0;
                break;
            }
        }
    }

   
    if (isValid) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
