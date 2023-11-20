#include <iostream>

int main() {
    int rows = 5;

    std::cout << "Simple Pattern:\n";

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    std::cout << "Visit my website: www.codeswithpankaj.com\n";

    return 0;
}
