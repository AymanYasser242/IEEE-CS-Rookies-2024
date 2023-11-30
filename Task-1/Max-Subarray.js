function maxSubarray(T, Cases) {
    for (let t = 0; t < T; t++) {
        const N = Cases[t][0];
        const A = Cases[t][1];

        const result = [];

        for (let i = 0; i < N; i++) {
            let maxInSubarray = A[i];
            for (let j = i; j < N; j++) {
                maxInSubarray = Math.max(maxInSubarray, A[j]);
                result.push(maxInSubarray);
            }
        }

        console.log(result.join(' '));
    }
}

// Example 
const T = 2;
const test = [
    [4, [1, 6, 3, 7]],
    [3, [3, 1, 2]]
];

maxSubarray(T, test);
