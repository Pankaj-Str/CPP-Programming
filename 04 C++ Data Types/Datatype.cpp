#include <iostream>
#include <string>

int main() {
    // Integer data type
    int myInt = 42;

    // Floating-point data types
    double myDouble = 3.14;
    float myFloat = 2.718f; // 'f' suffix denotes a float

    // Character data type
    char myChar = 'A';

    // Boolean data type
    bool myBool = true;

    // Enumeration data type
    enum Color { RED, GREEN, BLUE };
    Color myColor = RED;

    // Pointer data type
    int* myIntPtr = nullptr; // Pointer to an integer

    // Array data type
    int myArray[5] = {1, 2, 3, 4, 5};

    // String data type from the C++ Standard Library
    std::string myString = "Hello, CodesWithPankaj! Visit us at www.codeswithpankaj.com";

    // Displaying values
    std::cout << "Integer: " << myInt << std::endl;
    std::cout << "Double: " << myDouble << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Char: " << myChar << std::endl;
    std::cout << "Bool: " << std::boolalpha << myBool << std::endl; // boolalpha for displaying true/false
    std::cout << "Color: " << myColor << std::endl; // Prints the enumeration value
    std::cout << "Pointer: " << myIntPtr << std::endl; // Prints the pointer address
    std::cout << "Array: " << myArray[2] << std::endl; // Accessing array element
    std::cout << "String: " << myString << std::endl;

    return 0;
}
