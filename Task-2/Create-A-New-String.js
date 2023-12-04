function createNewString(S, T) {
    let lengthS = 0;
    for (let i = 0; i < S.length; i++) {
        lengthS++;
    }

    let lengthT = 0;
    for (let i = 0; i < T.length; i++) {
        lengthT++;
    }

    let newString = "";
    for (let i = 0; i < lengthS; i++) {
        newString += S[i];
    }
    newString += " ";
    for (let i = 0; i < lengthT; i++) {
        newString += T[i];
    }

    console.log(`${lengthS} ${lengthT}`);
    console.log(newString);
}

// Example usage:
const S1 = "LEVEL";
const T1 = "ONE";
createNewString(S1, T1);

const S2 = "Programming";
const T2 = "contest";
createNewString(S2, T2);
