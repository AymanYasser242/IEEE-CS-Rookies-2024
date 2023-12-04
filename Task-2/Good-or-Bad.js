function isGoodOrBad(T, testCases) {
    for (let t = 0; t < T; t++) {
        const S = testCases[t];

        let isGood = false;

        for (let i = 0; i <= S.length - 3; i++) {
            if ((S[i] === '0' && S[i + 1] === '1' && S[i + 2] === '0') ||
                (S[i] === '1' && S[i + 1] === '0' && S[i + 2] === '1')) {
                isGood = true;
                break;
            }
        }

        if (isGood) {
            console.log("Good");
        } else {
            console.log("Bad");
        }
    }
}

// Example usage:
const T = 2;
const testCases = [
    "11111110",
    "10101010101010"
];

isGoodOrBad(T, testCases);
