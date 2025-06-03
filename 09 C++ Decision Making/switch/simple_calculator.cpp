#include <iostream>

int main() {
    char operation;
    double operand1, operand2;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two operands: ";
    std::cin >> operand1 >> operand2;

    switch (operation) {
        case '+':
            std::cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << std::endl;
            break;
        case '-':
            std::cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << std::endl;
            break;
        case '*':
            std::cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << std::endl;
            break;
        case '/':
            if (operand2 != 0) {
                std::cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << std::endl;
            } else {
                std::cout << "Error: Division by zero." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}
