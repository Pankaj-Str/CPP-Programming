### Topic: C++ Data Types

#### Introduction:
Data types in C++ define the type of data that a variable can hold. Understanding data types is fundamental for efficient memory usage and proper program execution. This tutorial covers the basic data types in C++.

#### 1. Integer Data Types:
   - **int:** Standard integer type, typically 32 bits.
   - **short:** Short integer, usually 16 bits.
   - **long:** Long integer, often 32 or 64 bits.
   - **long long:** Very long integer, at least 64 bits.

```cpp
int main() {
    int num = 10;
    short smallNum = 5;
    long largeNum = 1000000;
    long long veryLargeNum = 123456789012345;

    return 0;
}
```

#### 2. Floating-Point Data Types:
   - **float:** Single-precision floating-point, typically 32 bits.
   - **double:** Double-precision floating-point, usually 64 bits.
   - **long double:** Extended precision floating-point.

```cpp
int main() {
    float num1 = 3.14f;
    double num2 = 2.71828;
    long double num3 = 0.12345678901234567890;

    return 0;
}
```

#### 3. Character Data Type:
   - **char:** Represents a single character.

```cpp
int main() {
    char grade = 'A';

    return 0;
}
```

#### 4. Boolean Data Type:
   - **bool:** Represents true or false.

```cpp
int main() {
    bool isTrue = true;
    bool isFalse = false;

    return 0;
}
```

#### Example:

```cpp
#include <iostream>

int main() {
    // Integer Data Types
    int age = 25;
    short distance = 1500;
    long population = 7000000000;
    long long bigNumber = 987654321987654321;

    // Floating-Point Data Types
    float pi = 3.14159f;
    double gravity = 9.81;
    long double veryPreciseNum = 0.12345678901234567890;

    // Character Data Type
    char grade = 'A';

    // Boolean Data Type
    bool isCplusplusFun = true;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Distance: " << distance << " meters" << std::endl;
    std::cout << "Population: " << population << std::endl;
    std::cout << "Big Number: " << bigNumber << std::endl;

    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Gravity: " << gravity << " m/s^2" << std::endl;
    std::cout << "Very Precise Number: " << veryPreciseNum << std::endl;

    std::cout << "Grade: " << grade << std::endl;

    std::cout << "Is C++ Fun? " << std::boolalpha << isCplusplusFun << std::endl;

    return 0;
}
```

Feel free to visit my website for additional tutorials and resources: [Codes with Pankaj](https://www.codeswithpankaj.com/).