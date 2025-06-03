#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Call the add function
    int result = add(num1, num2);

    std::cout << "Sum: " << result << std::endl;

    return 0;
}
