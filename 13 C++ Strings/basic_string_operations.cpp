#include <iostream>
#include <string>

int main() {
    // Basic string input and output
    std::string myString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, myString);

    std::cout << "You entered: " << myString << std::endl;

    return 0;
}
