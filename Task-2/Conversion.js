function conversion(S) {
  let result = "";

  for (let i = 0; i < S.length; i++) {
    if (S[i] === ",") {
      result += " ";
    } else if (S[i] >= "a" && S[i] <= "z") {
      result += S[i].toUpperCase();
    } else if (S[i] >= "A" && S[i] <= "Z") {
      result += S[i].toLowerCase();
    } else {
      result += S[i];
    }
  }

  console.log(result);
}

// Example usage:
const S = "happy,NewYear,enjoy";
conversion(S);
