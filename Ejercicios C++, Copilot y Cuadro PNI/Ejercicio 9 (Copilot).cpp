#include <iostream>

int main() {
  int m, n, p, q;

  // Prompt the user to enter the dimensions of the first matrix
  std::cout << "Enter the number of rows and columns of the first matrix: ";
  std::cin >> m >> n;

  // Allocate memory for the first matrix
  int** first_matrix = new int*[m];
  for (int i = 0; i < m; i++) {
    first_matrix[i] = new int[n];
  }

  // Prompt the user to enter the elements of the first matrix
  std::cout << "Enter the elements of the first matrix:\n";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> first_matrix[i][j];
    }
  }

  // Prompt the user to enter the dimensions of the second matrix
  std::cout << "Enter the number of rows and columns of the second matrix: ";
  std::cin >> p >> q;

  // Check if the number of columns in the first matrix is equal to the number of rows in the second matrix
  if (n != p) {
    std::cout << "Error: The number of columns in the first matrix is not equal to the number of rows in the second matrix.\n";
    return 1;
  }

  // Allocate memory for the second matrix
  int** second_matrix = new int*[p];
  for (int i = 0; i < p; i++) {
    second_matrix[i] = new int[q];
  }

  // Prompt the user to enter the elements of the second matrix
  std::cout << "Enter the elements of the second matrix:\n";
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      std::cin >> second_matrix[i][j];
    }
  }

  // Create a 2D array to store the result of the matrix multiplication
  int** result_matrix = new int*[m];
  for (int i = 0; i < m; i++) {
    result_matrix[i] = new int[q];
  }

  // Perform the matrix multiplication
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      result_matrix[i][j] = 0;
      for (int k = 0; k < n; k++) {
        result_matrix[i][j] += first_matrix[i][k] * second_matrix[k][j];
      }
    }
  }

  // Print the result matrix
  std::cout << "Result matrix:\n";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      std::cout << result_matrix[i][j] << " ";
    }
    std::cout << "\n";
  }

  // Free the memory used by the matrices
  for (int i = 0; i < m; i++) {
    delete[] first_matrix[i];
  }
}
