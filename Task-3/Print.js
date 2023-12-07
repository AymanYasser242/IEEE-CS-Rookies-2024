function printNumbers(N) {
    let result = '';

    for (let i = 1; i <= N; i++) {
        result += i + ' ';
    }

    console.log(result);
}

// Example usage
const N = 5;
printNumbers(N);
