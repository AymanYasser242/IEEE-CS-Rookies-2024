function minimizeNumber(N, A) {
  let maxOperations = 0;

  for (let i = 0; i < N; i++) {
    let trailingZeros = 0;
    while (A[i] % 2 === 0) {
      A[i] /= 2;
      trailingZeros++;
    }

    maxOperations = Math.max(maxOperations, trailingZeros);
  }

  console.log(maxOperations);
}

// Example 
const N1 = 3,
  A1 = [8, 12, 40];
minimizeNumber(N1, A1);

const N2 = 4,
  A2 = [5, 6, 8, 10];
minimizeNumber(N2, A2);
