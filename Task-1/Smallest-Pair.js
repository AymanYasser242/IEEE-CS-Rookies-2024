function smallestPairSum(T, Cases) {
  for (let t = 0; t < T; t++) {
    const N = Cases[t][0];
    const A = Cases[t][1];

    let smallestSum = Infinity;

    for (let i = 0; i < N - 1; i++) {
      for (let j = i + 1; j < N; j++) {
        const currentSum = A[i] + A[j] + j - i;
        smallestSum = Math.min(smallestSum, currentSum);
      }
    }

    console.log(smallestSum);
  }
}

// Example
const T = 1;
const test = [[4, [20, 1, 9, 4]]];

smallestPairSum(T, test);
