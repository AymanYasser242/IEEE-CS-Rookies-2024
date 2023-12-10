#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

// Function to count the number of divisors of a number
int countDivisors(int num) {
    int count = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[100];

    // Read the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Find maximum and minimum
    int maxNum = A[0], minNum = A[0];

    for (int i = 1; i < N; i++) {
        if (A[i] > maxNum) {
            maxNum = A[i];
        }
        if (A[i] < minNum) {
            minNum = A[i];
        }
    }

    // Count primes, palindromes, and divisors
    int primeCount = 0, palindromeCount = 0, maxDivisors = 0, maxDivisorNum = A[0];

    for (int i = 0; i < N; i++) {
        if (isPrime(A[i])) {
            primeCount++;
        }
        if (isPalindrome(A[i])) {
            palindromeCount++;
        }
        int divisors = countDivisors(A[i]);
        if (divisors > maxDivisors || (divisors == maxDivisors && A[i] > maxDivisorNum)) {
            maxDivisors = divisors;
            maxDivisorNum = A[i];
        }
    }

    // Print results
    printf("The maximum number : %d\n", maxNum);
    printf("The minimum number : %d\n", minNum);
    printf("The number of prime numbers : %d\n", primeCount);
    printf("The number of palindrome numbers : %d\n", palindromeCount);
    printf("The number that has the maximum number of divisors : %d\n", maxDivisorNum);

    return 0;
}
