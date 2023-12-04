function encryptDecrypt(Q, S) {
  const key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  const original =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  let result = "";

  if (Q === 1) {
    // Encryption
    for (let i = 0; i < S.length; i++) {
      const char = S[i];
      let originalIndex = -1;

      for (let j = 0; j < original.length; j++) {
        if (original[j] === char) {
          originalIndex = j;
          break;
        }
      }

      result += originalIndex != -1 ? key[originalIndex] : char;
    }
  } else if (Q === 2) {
    // Decryption
    for (let i = 0; i < S.length; i++) {
      const char = S[i];
      let keyIndex = -1;

      for (let j = 0; j < key.length; j++) {
        if (key[j] === char) {
          keyIndex = j;
          break;
        }
      }

      result += keyIndex != -1 ? original[keyIndex] : char;
    }
  }

  return result;
}

// Example usage
const Q1 = 1;
const S1 = "Egypt";
console.log(encryptDecrypt(Q1, S1));

const Q2 = 2;
const S2 = "#@_!=.+-*/";
console.log(encryptDecrypt(Q2, S2));

const Q3 = 2;
const S3 = "ZaoQR";
console.log(encryptDecrypt(Q3, S3));
