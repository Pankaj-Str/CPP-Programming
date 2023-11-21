#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    // Call the factorial function
    int result = factorial(num);

    std::cout << "Factorial: " << result << std::endl;

    return 0;
}
