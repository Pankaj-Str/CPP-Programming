#include <iostream>

int main() {
    // Dynamic 2D array
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Dynamically allocate memory for the 2D array
    int** dynamicArray = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new int[cols];
    }

    // Initialize and display elements of the dynamic 2D array
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray[i][j] = value++;
            std::cout << dynamicArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
