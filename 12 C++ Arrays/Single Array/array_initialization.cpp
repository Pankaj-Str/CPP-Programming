#include <iostream>

int main() {
    // Array initialization and printing
    int myArray[] = {1, 2, 3, 4, 5};

    // Display the elements of the array
    std::cout << "Elements in the array:\n";
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
