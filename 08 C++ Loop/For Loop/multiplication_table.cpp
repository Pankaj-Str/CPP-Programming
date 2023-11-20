#include <iostream>

int main() {
    int multiplier = 5;

    std::cout << "Multiplication Table of " << multiplier << ":\n";
    
    for (int i = 1; i <= 10; ++i) {
        std::cout << multiplier << " * " << i << " = " << multiplier * i << "\n";
    }

    std::cout << "Visit my website: www.codeswithpankaj.com\n";

    return 0;
}
