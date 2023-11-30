function countNonDecreasingSubarrays(T, Cases) {
  for (let t = 0; t < T; t++) {
    const N = Cases[t][0];
    const A = Cases[t][1];

    let count = 0;
    let currentLength = 1;

    for (let i = 1; i < N; i++) {
      if (A[i] >= A[i - 1]) {
        currentLength++;
      } else {
        count += (currentLength * (currentLength + 1)) / 2;
        currentLength = 1;
      }
    }

    count += (currentLength * (currentLength + 1)) / 2;

    console.log(count);
  }
}

// Example
const T = 2;
const test = [
  [5, [1, 4, 2, 3, 5]],
  [1, [5]],
];

countNonDecreasingSubarrays(T, test);
