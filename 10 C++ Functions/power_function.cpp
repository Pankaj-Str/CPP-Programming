#include <iostream>

// Function to calculate the power of a number
double power(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Call the power function
    double result = power(base, exponent);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
