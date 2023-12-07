// Function to perform right shift on the array
function rightShiftArray(N, X, array) {
  const shiftAmount = X % N;
  const shiftedArray = [
    ...array.slice(N - shiftAmount),
    ...array.slice(0, N - shiftAmount),
  ];
  return shiftedArray;
}

// Function to process input string
function processInput(input) {
  const lines = input.trim().split("\n");
  const [N, X] = lines[0].split(" ").map(Number);
  const array = lines[1].split(" ").map(Number);

  return rightShiftArray(N, X, array);
}

// Example usage
const input1 = "2 2\n2 1";
const result1 = processInput(input1);
console.log(result1.join(" "));

const input2 = "5 21\n1 2 3 4 5";
const result2 = processInput(input2);
console.log(result2.join(" "));
