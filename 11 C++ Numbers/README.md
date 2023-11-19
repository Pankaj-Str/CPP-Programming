# C++ Numbers 

## 1. Data Types for Numbers

C++ provides various data types to represent numbers, each serving a specific purpose. Let's dive into the commonly used numeric data types:

- **int**: Integer data type for whole numbers.
- **float**: Single-precision floating-point data type for decimal numbers.
- **double**: Double-precision floating-point data type for enhanced precision in decimal numbers.

**Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int integerNumber = 42;
    float decimalNumber = 3.14;
    double preciseDecimal = 2.71828;

    cout << "Integer: " << integerNumber << endl;
    cout << "Float: " << decimalNumber << endl;
    cout << "Double: " << preciseDecimal << endl;

    return 0;
}
```

## 2. Basic Arithmetic Operations

Performing arithmetic operations is fundamental to programming. C++ supports common arithmetic operators such as addition, subtraction, multiplication, division, and modulus.

**Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // Addition
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = a - b;
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = a * b;
    cout << "Product: " << product << endl;

    // Division
    int quotient = a / b;
    cout << "Quotient: " << quotient << endl;

    // Modulus (remainder)
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
```

## 3. Math Library Functions

C++ provides a Math library (`<cmath>`) that includes a variety of mathematical functions. Functions like `sqrt()`, `pow()`, and `abs()` are invaluable for advanced numeric operations.

**Example:**

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Square root
    cout << "Square root of 25: " << sqrt(25) << endl;

    // Power
    cout << "2 to the power of 3: " << pow(2, 3) << endl;

    // Absolute value
    cout << "Absolute value of -7: " << abs(-7) << endl;

    return 0;
}
```

## Conclusion

Empower yourself with the knowledge of handling numbers in C++. Visit [CodesWithPankaj.com](https://codeswithpankaj.com) to access this comprehensive tutorial, complete with examples and practical insights. From choosing the right data type to utilizing advanced math functions, this tutorial will guide you in mastering the art of working with numbers in C++. Happy coding!