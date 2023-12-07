// Function to check if a number is prime
function isPrime(N) {
  if (N <= 1) {
    return false;
  }

  for (let i = 2; i * i <= N; i++) {
    if (N % i === 0) {
      return false;
    }
  }

  return true;
}

// Function to process each test case
function processCases(input) {
  const lines = input.split("\n");
  const T = parseInt(lines[0]);

  // Beganing with 1 to skip first line
  for (let i = 1; i <= T; i++) {
    const N = parseInt(lines[i]);
    if (isPrime(N)) {
      console.log("YES");
    } else {
      console.log("NO");
    }
  }
}

// Example usage
const input = "3\n2\n4\n8";
processCases(input);
