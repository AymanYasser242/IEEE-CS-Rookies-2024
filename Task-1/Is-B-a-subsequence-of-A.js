function isSubsequence(N, M, A, B) {
    let i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] === B[j]) {
            j++;
        }
        i++;
    }

    if (j === M) {
        console.log("Yes");
    } else {
        console.log("No");
    }
}

// Example 
const N1 = 3, M1 = 2, A1 = [1, 4, 7], B1 = [1, 7];
isSubsequence(N1, M1, A1, B1);

const N2 = 7, M2 = 4, A2 = [1, 8, 4, 7, 5, 2, 7], B2 = [4, 5, 7, 2];
isSubsequence(N2, M2, A2, B2);

const N3 = 3, M3 = 3, A3 = [21, 8, 40], B3 = [21, 8, 40];
isSubsequence(N3, M3, A3, B3);
