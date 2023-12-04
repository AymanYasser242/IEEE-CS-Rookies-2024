function countWords(S) {
  let wordCount = 0;
  let isWord = false;

  for (let i = 0; i < S.length; i++) {
    const char = S[i];

    if ((char >= "a" && char <= "z") || (char >= "A" && char <= "Z")) {
      if (!isWord) {
        isWord = true;
        wordCount++;
      }
    } else {
      isWord = false;
    }
  }

  return wordCount;
}

// Example usage
const S1 = "Meep Meep!";
console.log(countWords(S1)); 

const S2 = "I tot I taw a putty tat.";
console.log(countWords(S2)); 

const S3 = "I did! I did! I did taw a putty tat.";
console.log(countWords(S3)); 

const S4 = "Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...";
console.log(countWords(S4)); 
