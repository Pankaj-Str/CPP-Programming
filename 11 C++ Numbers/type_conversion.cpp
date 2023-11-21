#include <iostream>

int main() {
    // Conversion between data types
    double doubleNum = 3.14;
    int intNum = static_cast<int>(doubleNum);

    std::cout << "Double Number: " << doubleNum << std::endl;
    std::cout << "Converted to Int: " << intNum << std::endl;

    return 0;
}
