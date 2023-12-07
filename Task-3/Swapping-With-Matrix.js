// Function to swap rows and columns in a matrix
function swapRowsColumns(N, X, Y, matrix) {
  // Swap rows
  const tempRow = matrix[X - 1].slice();
  matrix[X - 1] = matrix[Y - 1];
  matrix[Y - 1] = tempRow;

  // Swap columns
  for (let i = 0; i < N; i++) {
    const temp = matrix[i][X - 1];
    matrix[i][X - 1] = matrix[i][Y - 1];
    matrix[i][Y - 1] = temp;
  }

  return matrix;
}

// Function to process input string
function processInput(input) {
  const lines = input.trim().split("\n");
  const [N, X, Y] = lines[0].split(" ").map(Number);

  const matrix = [];
  for (let i = 1; i <= N; i++) {
    const row = lines[i].split(" ").map(Number);
    matrix.push(row);
  }

  return swapRowsColumns(N, X, Y, matrix);
}

// Example usage
const input = "4 3 1\n1 2 3 -5\n-5 4 0 3\n7 7 1 2\n40 6 5 11";
const result = processInput(input);

// Print the result matrix
for (const row of result) {
  console.log(row.join(" "));
}
