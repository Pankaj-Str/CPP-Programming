# Codes with Pankaj - C++ Loops Depth Tutorial


Welcome to the "Codes with Pankaj" C++ Loops Depth Tutorial. In this tutorial, we'll dive deep into the world of loops in C++. Loops are essential constructs in programming, allowing you to repeat a block of code multiple times. Whether you're a beginner or looking to refine your skills, this tutorial will cover the fundamentals and provide examples to reinforce your understanding.

### Table of Contents:

1. **Introduction to Loops:**
   - Explanation of why loops are important in programming.
   - Overview of the three main types of loops in C++: `for`, `while`, and `do-while`.

2. **For Loop:**
   - Syntax and structure of the `for` loop.
   - Initialization, condition, and iteration expressions.
   - Example: Iterating through an array using a `for` loop.

```cpp
#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    std::cout << "For Loop Example:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
```

3. **While Loop:**
   - Syntax and structure of the `while` loop.
   - Condition checking and loop execution.
   - Example: Finding the factorial of a number using a `while` loop.

```cpp
#include <iostream>

int main() {
    int number = 5;
    int factorial = 1;
    int i = 1;

    std::cout << "While Loop Example:\n";
    while (i <= number) {
        factorial *= i;
        ++i;
    }

    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}
```

4. **Do-While Loop:**
   - Syntax and structure of the `do-while` loop.
   - Guarantees at least one execution of the loop.
   - Example: User input validation using a `do-while` loop.

```cpp
#include <iostream>

int main() {
    int userInput;

    std::cout << "Do-While Loop Example:\n";
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> userInput;
    } while (userInput <= 0);

    std::cout << "You entered: " << userInput << std::endl;

    return 0;
}
```

5. **Nested Loops:**
   - Explanation of nested loops.
   - Example: Printing a pattern using nested loops.

```cpp
#include <iostream>

int main() {
    int rows = 5;

    std::cout << "Nested Loop Example:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}
```

6. **Loop Control Statements:**
   - Introduction to `break` and `continue` statements.
   - Example: Using `break` and `continue` in a loop.

```cpp
#include <iostream>

int main() {
    std::cout << "Loop Control Statements Example:\n";
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            std::cout << "Breaking the loop at i = 5\n";
            break;
        }

        if (i % 2 == 0) {
            std::cout << "Skipping even number: " << i << "\n";
            continue;
        }

        std::cout << i << " ";
    }

    return 0;
}
```

7. **Conclusion:**
   - Recap of key concepts.
   - Encouragement to practice and experiment with loops.

Congratulations! You've completed the "Codes with Pankaj" C++ Loops Depth Tutorial. Happy coding!