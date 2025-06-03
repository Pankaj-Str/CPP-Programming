#include <iostream>
#include <string>

int main() {
    // String length and access
    std::string myString = "Hello, C++!";

    // Display the length of the string
    std::cout << "Length of the string: " << myString.length() << std::endl;

    // Access individual characters
    std::cout << "First character: " << myString[0] << std::endl;
    std::cout << "Last character: " << myString[myString.length() - 1] << std::endl;

    return 0;
}
