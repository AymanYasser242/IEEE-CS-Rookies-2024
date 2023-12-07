// Function to calculate the result of the equation
function calculateEquation(input) {
  const [X_str, N_str] = input.split(" ");
  const X = parseInt(X_str);
  const N = parseInt(N_str);

  let result = 0;

  for (let i = 0; i <= N; i += 2) {
    if (i == 0) {
      result += X ** 0 - 1;
    } else if (i % 2 == 0) {
      result += X ** i;
    }
  }

  return result;
}

// Example usage
const input = "5 5";
const result = calculateEquation(input);
console.log(result);
