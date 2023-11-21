#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << (number > 0 ? "Positive" : (number < 0 ? "Negative" : "Zero")) << std::endl;

    return 0;
}
