#include <iostream>

using namespace std;

int main() {
    // Arithmetic operators
    int num1 = 10;
    int num2 = 5;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    // Relational operators
    bool isEqual = (num1 == num2);
    bool isNotEqual = (num1 != num2);
    bool isGreaterThan = (num1 > num2);
    bool isLessThan = (num1 < num2);
    bool isGreaterOrEqual = (num1 >= num2);
    bool isLessOrEqual = (num1 <= num2);

    // Logical operators
    bool logicalAnd = (true && false);
    bool logicalOr = (true || false);
    bool logicalNot = !true;

    // Displaying results
    std::cout << "Arithmetic Operators:\n";
    std::cout << "Sum: " << sum << ", Difference: " << difference << ", Product: " << product << ", Quotient: " << quotient << ", Remainder: " << remainder << std::endl;

    std::cout << "\nRelational Operators:\n";
    std::cout << "Equal: " << isEqual << ", Not Equal: " << isNotEqual << ", Greater Than: " << isGreaterThan << ", Less Than: " << isLessThan << ", Greater or Equal: " << isGreaterOrEqual << ", Less or Equal: " << isLessOrEqual << std::endl;

    std::cout << "\nLogical Operators:\n";
    std::cout << "Logical AND: " << logicalAnd << ", Logical OR: " << logicalOr << ", Logical NOT: " << logicalNot << std::endl;



    return 0;
}


