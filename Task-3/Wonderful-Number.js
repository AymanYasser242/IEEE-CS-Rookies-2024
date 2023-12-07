// Function to check if a string is a palindrome
function isPalindrome(str) {
  const reversed = str.split("").reverse().join("");
  return str === reversed;
}

// Function to check if a number is wonderful
function isWonderful(N) {
  if (N % 2 === 0) {
    return "NO";
  }

  // Convert N to binary and check if it's a palindrome
  const binaryRepresentation = N.toString(2);
  if (isPalindrome(binaryRepresentation)) {
    return "YES";
  } else {
    return "NO";
  }
}

// Example usage
const N1 = 3;
console.log(isWonderful(N1));

const N2 = 4;
console.log(isWonderful(N2));
