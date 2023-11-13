# C++ operators along with examples:

### Arithmetic Operators:

1. **Addition (+):**
   ```cpp
   int a = 5, b = 3;
   int sum = a + b;  // sum is now 8
   ```

2. **Subtraction (-):**
   ```cpp
   int a = 5, b = 3;
   int difference = a - b;  // difference is now 2
   ```

3. **Multiplication (*):**
   ```cpp
   int a = 5, b = 3;
   int product = a * b;  // product is now 15
   ```

4. **Division (/):**
   ```cpp
   int a = 6, b = 3;
   int quotient = a / b;  // quotient is now 2
   ```

5. **Modulus (%):**
   ```cpp
   int a = 7, b = 3;
   int remainder = a % b;  // remainder is now 1
   ```

### Relational Operators:

1. **Equal to (==):**
   ```cpp
   int a = 5, b = 5;
   bool isEqual = (a == b);  // isEqual is true
   ```

2. **Not equal to (!=):**
   ```cpp
   int a = 5, b = 3;
   bool isNotEqual = (a != b);  // isNotEqual is true
   ```

3. **Greater than (>):**
   ```cpp
   int a = 7, b = 5;
   bool isGreaterThan = (a > b);  // isGreaterThan is true
   ```

4. **Less than (<):**
   ```cpp
   int a = 3, b = 5;
   bool isLessThan = (a < b);  // isLessThan is true
   ```

5. **Greater than or equal to (>=):**
   ```cpp
   int a = 5, b = 5;
   bool isGreaterOrEqual = (a >= b);  // isGreaterOrEqual is true
   ```

6. **Less than or equal to (<=):**
   ```cpp
   int a = 3, b = 5;
   bool isLessOrEqual = (a <= b);  // isLessOrEqual is true
   ```

### Logical Operators:

1. **Logical AND (&&):**
   ```cpp
   bool condition1 = true, condition2 = false;
   bool result = (condition1 && condition2);  // result is false
   ```

2. **Logical OR (||):**
   ```cpp
   bool condition1 = true, condition2 = false;
   bool result = (condition1 || condition2);  // result is true
   ```

3. **Logical NOT (!):**
   ```cpp
   bool condition = true;
   bool result = !condition;  // result is false
   ```



```cpp
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
```
