#include <iostream>
#include <cmath> // Include cmath for mathematical constants

int main() {
    // Integer constant
    const int MY_CONSTANT_INT = 42;

    // Floating-point constants
    const double PI = 3.141592653589793;
    const float EULER_NUMBER = 2.71828f;

    // Character constant
    const char MY_CONSTANT_CHAR = 'A';

    // Boolean constants
    const bool MY_TRUE_CONSTANT = true;
    const bool MY_FALSE_CONSTANT = false;

    // Mathematical constants from cmath
    const double SQRT_TWO = std::sqrt(2.0);
    const double EULER_CONSTANT = std::exp(1.0);

    // String literal
    const char* WEBSITE_NAME = "www.codeswithpankaj.com";

    // Displaying constant values
    std::cout << "Integer Constant: " << MY_CONSTANT_INT << std::endl;
    std::cout << "Pi: " << PI << std::endl;
    std::cout << "Euler's Number: " << EULER_NUMBER << std::endl;
    std::cout << "Character Constant: " << MY_CONSTANT_CHAR << std::endl;
    std::cout << "True Constant: " << std::boolalpha << MY_TRUE_CONSTANT << std::endl;
    std::cout << "False Constant: " << std::boolalpha << MY_FALSE_CONSTANT << std::endl;
    std::cout << "Square Root of 2: " << SQRT_TWO << std::endl;
    std::cout << "Euler's Constant: " << EULER_CONSTANT << std::endl;
    std::cout << "Website Name: " << WEBSITE_NAME << std::endl;

    return 0;
}
