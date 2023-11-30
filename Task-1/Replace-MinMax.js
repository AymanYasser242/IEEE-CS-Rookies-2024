function replaceMinMax(N, A) {

    let minIndex = 0;
    let maxIndex = 0;

    for (let i = 1; i < N; i++) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        } else if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }


    const temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;


    console.log(A.join(' '));
}

// Example
const N = 5;
const A = [4, 1, 3, 10, 8];

replaceMinMax(N, A);
