#include <iostream>
#include <string>

int main() {
    // String comparison
    std::string str1 = "apple";
    std::string str2 = "orange";

    if (str1 == str2) {
        std::cout << "Strings are equal." << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }

    return 0;
}
