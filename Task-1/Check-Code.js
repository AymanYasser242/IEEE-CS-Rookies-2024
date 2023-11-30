function checkCode(A, B, S) {
    if (S.length !== A + B + 1 || S[A] !== '-') {
        console.log("No");
        return;
    }

    for (let i = 0; i < S.length; i++) {
        if (i !== A && (S[i] < '0' || S[i] > '9')) {
            console.log("No");
            return;
        }
    }

    console.log("Yes");
}

// Example 
const A1 = 3, B1 = 3, S1 = "269-665";
checkCode(A1, B1, S1);

const A2 = 1, B2 = 1, S2 = "12-";
checkCode(A2, B2, S2);

const A3 = 1, B3 = 2, S3 = "7444";
checkCode(A3, B3, S3);
