function maxSubsequenceSize(N, S) {
    let result = 1;  
    let prevChar = S[0];

    for (let i = 1; i < N; i++) {
        if (S[i] !== prevChar) {
            result++;
            prevChar = S[i];
        }
    }

    return Math.min(result, N);  
}

// Example usage
const N1 = 5;
const S1 = "ababb";
console.log(maxSubsequenceSize(N1, S1));  

const N2 = 5;
const S2 = "aaaac";
console.log(maxSubsequenceSize(N2, S2));  
