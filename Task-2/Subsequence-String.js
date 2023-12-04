function isHelloSubsequence(S) {
  const target = "hello";
  let index = 0;

  for (let i = 0; i < S.length; i++) {
    if (S[i] === target[index]) {
      index++;
    }

    if (index === target.length) {
      console.log("YES");
      return;
    }
  }

  console.log("NO");
}

// Example usage:
const S1 = "ahhellllloou";
isHelloSubsequence(S1);

const S2 = "hlelo";
isHelloSubsequence(S2);
