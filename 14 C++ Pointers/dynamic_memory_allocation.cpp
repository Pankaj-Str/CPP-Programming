#include <iostream>

int main() {
    // Dynamic memory allocation with pointers
    int* dynamicNumber = new int; // Allocate memory for an integer

    *dynamicNumber = 123; // Assign a value to the dynamically allocated memory

    std::cout << "Value stored in dynamicNumber: " << *dynamicNumber << std::endl;

    // Deallocate the dynamically allocated memory
    delete dynamicNumber;

    return 0;
}
