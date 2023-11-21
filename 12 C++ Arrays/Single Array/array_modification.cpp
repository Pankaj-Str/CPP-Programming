#include <iostream>

int main() {
    // Array modification
    int myArray[] = {5, 10, 15, 20, 25};

    // Display the original elements
    std::cout << "Original elements in the array:\n";
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Modify elements (multiply by 2)
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
        myArray[i] *= 2;
    }

    // Display the modified elements
    std::cout << "Modified elements in the array:\n";
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
