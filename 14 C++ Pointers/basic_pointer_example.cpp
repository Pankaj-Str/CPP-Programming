#include <iostream>

int main() {
    // Basic pointer example
    int number = 42;
    int* pointer = &number;

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value of pointer: " << *pointer << std::endl;
    std::cout << "Address stored in pointer: " << pointer << std::endl;

    return 0;
}
