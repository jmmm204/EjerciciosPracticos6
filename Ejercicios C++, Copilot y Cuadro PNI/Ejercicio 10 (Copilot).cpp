#include <iostream>
using namespace std;

int main() {
    int m, n; // matrix dimensions
    int mat[10][10]; // matrix
    int transpose[10][10]; // transposed matrix

    // Prompt user for matrix dimensions
    cout << "Enter the number of rows and columns (separated by space): ";
    cin >> m >> n;

    // Prompt user for matrix values
    cout << "Enter the matrix values:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transposed matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
