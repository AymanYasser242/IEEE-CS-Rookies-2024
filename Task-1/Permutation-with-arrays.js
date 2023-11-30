function isPermutation(N, A, B) {
  A.sort((a, b) => a - b);
  B.sort((a, b) => a - b);

  for (let i = 0; i < N; i++) {
    if (A[i] !== B[i]) {
      console.log("no");
      return;
    }
  }

  console.log("yes");
}

// Example
const N1 = 4,
  A1 = [4, 2, 3, 7],
  B1 = [2, 3, 4, 9];
isPermutation(N1, A1, B1);

const N2 = 5,
  A2 = [5, 1, 1, 9, 3],
  B2 = [1, 9, 1, 5, 3];
isPermutation(N2, A2, B2);
