# Codes with Pankaj - C++ Functions Depth Tutorial

Introduction:
Welcome to the "Codes with Pankaj" C++ Functions Depth Tutorial. In this tutorial, we'll unravel the power of functions in C++. Functions are essential building blocks in programming, allowing you to modularize your code and promote reusability. Whether you're just starting or looking to enhance your skills, this tutorial will cover the fundamentals of functions with clear examples to reinforce your understanding.

### Table of Contents:

1. **Introduction to Functions:**
   - Explanation of the importance of functions in programming.
   - Overview of function definition, declaration, and invocation.

2. **Function Declaration and Definition:**
   - Syntax for declaring and defining functions.
   - Example: Creating a simple function to add two numbers.

```cpp
#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    std::cout << "Function Declaration and Definition Example:\n";

    // Function invocation
    int result = add(5, 3);

    std::cout << "The sum is: " << result << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

3. **Function Parameters and Return Types:**
   - Explanation of function parameters and return types.
   - Example: Function with multiple parameters and a return type.

```cpp
#include <iostream>

// Function declaration
double calculateAverage(double num1, double num2);

int main() {
    std::cout << "Function Parameters and Return Types Example:\n";

    // Function invocation
    double avg = calculateAverage(4.5, 7.2);

    std::cout << "The average is: " << avg << std::endl;

    return 0;
}

// Function definition
double calculateAverage(double num1, double num2) {
    return (num1 + num2) / 2.0;
}
```

4. **Function Overloading:**
   - Explanation of function overloading.
   - Example: Overloading a function to handle different data types.

```cpp
#include <iostream>

// Function declarations
int add(int a, int b);
double add(double a, double b);

int main() {
    std::cout << "Function Overloading Example:\n";

    // Function invocations
    int sumInt = add(5, 3);
    double sumDouble = add(4.5, 7.2);

    std::cout << "Sum of integers: " << sumInt << std::endl;
    std::cout << "Sum of doubles: " << sumDouble << std::endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
```

5. **Recursion:**
   - Explanation of recursive functions.
   - Example: Computing the factorial of a number using recursion.

```cpp
#include <iostream>

// Function declaration
int factorial(int n);

int main() {
    std::cout << "Recursion Example:\n";

    // Function invocation
    int result = factorial(5);

    std::cout << "Factorial: " << result << std::endl;

    return 0;
}

// Function definition
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
```

6. **Default Arguments:**
   - Explanation of default function arguments.
   - Example: Function with default values for parameters.

```cpp
#include <iostream>

// Function declaration
void greet(std::string name, std::string greeting = "Hello");

int main() {
    std::cout << "Default Arguments Example:\n";

    // Function invocations
    greet("Alice");
    greet("Bob", "Hi");

    return 0;
}

// Function definition
void greet(std::string name, std::string greeting) {
    std::cout << greeting << ", " << name << "!\n";
}
```

7. **Conclusion:**
   - Recap of key concepts related to functions.
   - Encouragement to practice and experiment with function concepts.

Congratulations! You've completed the "Codes with Pankaj" C++ Functions Depth Tutorial. Happy coding!