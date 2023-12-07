// Function to get the maximum number in the array
function getMaxNumber(arr) {
  let max = arr[0];
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

// Function to get the minimum number in the array
function getMinNumber(arr) {
  let min = arr[0];
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

// Function to check if a number is prime
function isPrime(num) {
  if (num <= 1) {
    return false;
  }
  for (let i = 2; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      return false;
    }
  }
  return true;
}

// Function to count prime numbers in the array
function countPrimes(arr) {
  let count = 0;
  for (const num of arr) {
    if (isPrime(num)) {
      count++;
    }
  }
  return count;
}

// Function to check if a number is a palindrome
function isPalindrome(num) {
  const numStr = num.toString();
  return numStr === numStr.split("").reverse().join("");
}

// Function to count palindrome numbers in the array
function countPalindromes(arr) {
  let count = 0;
  for (const num of arr) {
    if (isPalindrome(num)) {
      count++;
    }
  }
  return count;
}

// Function to get the number with the maximum number of divisors
function getMaxDivisorsNumber(arr) {
  function countDivisors(num) {
    let count = 0;
    for (let i = 1; i <= num; i++) {
      if (num % i === 0) {
        count++;
      }
    }
    return count;
  }

  let maxDivisors = 0;
  let numberWithMaxDivisors;

  for (const num of arr) {
    const divisorsCount = countDivisors(num);
    if (divisorsCount > maxDivisors) {
      maxDivisors = divisorsCount;
      numberWithMaxDivisors = num;
    }
  }

  return numberWithMaxDivisors;
}

// Function to process input string
function processInput(input) {
  const lines = input.trim().split("\n");
  const N = parseInt(lines[0]);
  const arr = lines[1].split(" ").map(Number);

  console.log(`The maximum number : ${getMaxNumber(arr)}`);
  console.log(`The minimum number : ${getMinNumber(arr)}`);
  console.log(`The number of prime numbers : ${countPrimes(arr)}`);
  console.log(`The number of palindrome numbers : ${countPalindromes(arr)}`);
  console.log(
    `The number that has the maximum number of divisors : ${getMaxDivisorsNumber(
      arr
    )}`
  );
}

// Example usage
const input = "5\n8 2 14 1 83";
processInput(input);
