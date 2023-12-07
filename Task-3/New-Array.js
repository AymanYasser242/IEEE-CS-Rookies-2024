// Function to concatenate arrays A and B
function concatenateArrays(N, A, B) {
  const C = [...B, ...A];
  return C;
}

// Function to process input string
function processInput(input) {
  const lines = input.trim().split("\n");
  const N = parseInt(lines[0]);
  const A = lines[1].split(" ").map(Number);
  const B = lines[2].split(" ").map(Number);

  return concatenateArrays(N, A, B);
}

// Example usage
const input = "2\n1 2\n3 4";
const result = processInput(input);
console.log(result.join(" "));
