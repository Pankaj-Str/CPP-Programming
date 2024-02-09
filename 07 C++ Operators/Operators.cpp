// Tutorial: CodesWithPankaj - C++ Operators

#include <iostream>

int main() {
    // Arithmetic Operators:
    int a = 5, b = 3;
    int sum = a + b;  // sum is now 8

    int difference = a - b;  // difference is now 2

    int product = a * b;  // product is now 15

    int quotient = a / b;  // quotient is now 1 (integer division)

    int remainder = a % b;  // remainder is now 2

    // Relational Operators:
    bool isEqual = (a == b);  // isEqual is false

    bool isNotEqual = (a != b);  // isNotEqual is true

    bool isGreaterThan = (a > b);  // isGreaterThan is true

    bool isLessThan = (a < b);  // isLessThan is false

    bool isGreaterOrEqual = (a >= b);  // isGreaterOrEqual is true

    bool isLessOrEqual = (a <= b);  // isLessOrEqual is false

    // Logical Operators:
    bool condition1 = true, condition2 = false;
    bool resultAND = (condition1 && condition2);  // resultAND is false

    bool resultOR = (condition1 || condition2);  // resultOR is true

    bool resultNOT = !condition1;  // resultNOT is false

    // Displaying results:
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    std::cout << "Is Equal? " << std::boolalpha << isEqual << std::endl;
    std::cout << "Is Not Equal? " << isNotEqual << std::endl;
    std::cout << "Is Greater Than? " << isGreaterThan << std::endl;
    std::cout << "Is Less Than? " << isLessThan << std::endl;
    std::cout << "Is Greater Or Equal? " << isGreaterOrEqual << std::endl;
    std::cout << "Is Less Or Equal? " << isLessOrEqual << std::endl;

    std::cout << "Result AND: " << resultAND << std::endl;
    std::cout << "Result OR: " << resultOR << std::endl;
    std::cout << "Result NOT: " << resultNOT << std::endl;

    return 0;
}