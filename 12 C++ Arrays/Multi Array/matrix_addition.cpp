#include <iostream>

int main() {
    // Matrix addition
    const int rows = 2;
    const int cols = 2;

    int matrix1[rows][cols] = {{1, 2}, {3, 4}};
    int matrix2[rows][cols] = {{5, 6}, {7, 8}};
    int result[rows][cols];

    // Perform matrix addition
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    std::cout << "Result of Matrix Addition:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
