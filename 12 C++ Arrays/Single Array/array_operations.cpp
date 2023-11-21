#include <iostream>

int main() {
    // Single array operations
    const int arraySize = 5;
    int myArray[arraySize];

    // Input values into the array
    std::cout << "Enter " << arraySize << " integers:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Display the elements of the array
    std::cout << "Elements in the array:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Find the sum of the elements
    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += myArray[i];
    }
    std::cout << "Sum of elements: " << sum << std::endl;

    // Find the maximum element
    int maxElement = myArray[0];
    for (int i = 1; i < arraySize; ++i) {
        if (myArray[i] > maxElement) {
            maxElement = myArray[i];
        }
    }
    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}
