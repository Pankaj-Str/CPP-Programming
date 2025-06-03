#include <iostream>

int main() {
    int number;
    int factorial = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int i = 1;
    while (i <= number) {
        factorial *= i;
        i++;
    }

    std::cout << "Factorial of " << number << ": " << factorial << std::endl;

    return 0;
}
