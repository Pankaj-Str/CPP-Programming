#include <iostream>

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Call the max function
    int result = max(num1, num2);

    std::cout << "Maximum: " << result << std::endl;

    return 0;
}
